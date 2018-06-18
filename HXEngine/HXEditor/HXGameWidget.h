﻿#pragma once
//#include <QWidget>
#include "vgl.h"
#include "vmath.h"
#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include <QTimer>
#include "HXIDisplayListener.h"
#include "HXGLShadowMap.h"
#include "TestTriangle.h"

using namespace HX3D;

class HXGameWidget : public QOpenGLWidget, protected QOpenGLFunctions, public HXIDisplayListener
{
	Q_OBJECT
public:
	HXGameWidget(QWidget * parent = 0);
	~HXGameWidget();

	typedef void(*FPtr)(void);

	virtual void OnDisplay(bool shadow);
	virtual void OnViewPortResize(int nScreenWidth, int nScreenHeight);
	virtual void OnKeyboard(unsigned char key, int x, int y) {};
	virtual void OnMouseMove(int nButton, int deltaX, int deltaY) {};
	virtual void OnMouseWheel(float fDistance) {};

	QString GetCurScene();
	void LoadScene(QString path, FPtr callback);
	void LoadGameObject(QString path);
protected:
	virtual void initializeGL();
	virtual void resizeGL(int w, int h);
	virtual void paintGL();

private:
	QTimer timer;

	// for test
	TestTriangle* mTestTriangle;

	bool bLoadScene;	// QT OpenGL相关处理(如:模型加载后的VBO生成等)必须在继承QOpenGLWidget的函数里处理
	QString scenePath;
	FPtr loadCallback;

	bool bLoadGameObject;
	QString gameObjectPath;
};