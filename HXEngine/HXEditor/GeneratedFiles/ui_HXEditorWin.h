/********************************************************************************
** Form generated from reading UI file 'HXEditorWin.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HXEDITORWIN_H
#define UI_HXEDITORWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HXEditorWinClass
{
public:
    QAction *actionLoadScene;
    QAction *actionLoadGameObject;
    QAction *actionSaveScene;
    QAction *actionDeleteGameObject;
    QAction *actionExportGameObject;
    QAction *actionCreateEmptyGO;
    QAction *actionNewScene;
    QAction *actionDirectionLight;
    QAction *actionPointLight;
    QAction *actionSpotLight;
    QAction *actionDeleteLight;
    QAction *actionCreateCamera;
    QAction *actionDeleteCamera;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuGameObject;
    QMenu *menuLight;
    QMenu *menuCreateLight;
    QMenu *menuCamera;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *HXEditorWinClass)
    {
        if (HXEditorWinClass->objectName().isEmpty())
            HXEditorWinClass->setObjectName(QStringLiteral("HXEditorWinClass"));
        HXEditorWinClass->resize(1000, 600);
        HXEditorWinClass->setStyleSheet(QStringLiteral(""));
        actionLoadScene = new QAction(HXEditorWinClass);
        actionLoadScene->setObjectName(QStringLiteral("actionLoadScene"));
        actionLoadGameObject = new QAction(HXEditorWinClass);
        actionLoadGameObject->setObjectName(QStringLiteral("actionLoadGameObject"));
        actionSaveScene = new QAction(HXEditorWinClass);
        actionSaveScene->setObjectName(QStringLiteral("actionSaveScene"));
        actionDeleteGameObject = new QAction(HXEditorWinClass);
        actionDeleteGameObject->setObjectName(QStringLiteral("actionDeleteGameObject"));
        actionExportGameObject = new QAction(HXEditorWinClass);
        actionExportGameObject->setObjectName(QStringLiteral("actionExportGameObject"));
        actionCreateEmptyGO = new QAction(HXEditorWinClass);
        actionCreateEmptyGO->setObjectName(QStringLiteral("actionCreateEmptyGO"));
        actionNewScene = new QAction(HXEditorWinClass);
        actionNewScene->setObjectName(QStringLiteral("actionNewScene"));
        actionDirectionLight = new QAction(HXEditorWinClass);
        actionDirectionLight->setObjectName(QStringLiteral("actionDirectionLight"));
        actionPointLight = new QAction(HXEditorWinClass);
        actionPointLight->setObjectName(QStringLiteral("actionPointLight"));
        actionSpotLight = new QAction(HXEditorWinClass);
        actionSpotLight->setObjectName(QStringLiteral("actionSpotLight"));
        actionDeleteLight = new QAction(HXEditorWinClass);
        actionDeleteLight->setObjectName(QStringLiteral("actionDeleteLight"));
        actionCreateCamera = new QAction(HXEditorWinClass);
        actionCreateCamera->setObjectName(QStringLiteral("actionCreateCamera"));
        actionDeleteCamera = new QAction(HXEditorWinClass);
        actionDeleteCamera->setObjectName(QStringLiteral("actionDeleteCamera"));
        centralWidget = new QWidget(HXEditorWinClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        HXEditorWinClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(HXEditorWinClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1000, 18));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuGameObject = new QMenu(menuBar);
        menuGameObject->setObjectName(QStringLiteral("menuGameObject"));
        menuLight = new QMenu(menuBar);
        menuLight->setObjectName(QStringLiteral("menuLight"));
        menuCreateLight = new QMenu(menuLight);
        menuCreateLight->setObjectName(QStringLiteral("menuCreateLight"));
        menuCamera = new QMenu(menuBar);
        menuCamera->setObjectName(QStringLiteral("menuCamera"));
        HXEditorWinClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(HXEditorWinClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        HXEditorWinClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(HXEditorWinClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        HXEditorWinClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuGameObject->menuAction());
        menuBar->addAction(menuLight->menuAction());
        menuBar->addAction(menuCamera->menuAction());
        menuFile->addAction(actionLoadScene);
        menuFile->addAction(actionSaveScene);
        menuFile->addAction(actionNewScene);
        menuGameObject->addAction(actionCreateEmptyGO);
        menuGameObject->addAction(actionLoadGameObject);
        menuGameObject->addAction(actionDeleteGameObject);
        menuGameObject->addSeparator();
        menuGameObject->addAction(actionExportGameObject);
        menuLight->addAction(menuCreateLight->menuAction());
        menuLight->addAction(actionDeleteLight);
        menuCreateLight->addAction(actionDirectionLight);
        menuCreateLight->addAction(actionPointLight);
        menuCreateLight->addAction(actionSpotLight);
        menuCamera->addAction(actionCreateCamera);
        menuCamera->addAction(actionDeleteCamera);

        retranslateUi(HXEditorWinClass);

        QMetaObject::connectSlotsByName(HXEditorWinClass);
    } // setupUi

    void retranslateUi(QMainWindow *HXEditorWinClass)
    {
        HXEditorWinClass->setWindowTitle(QApplication::translate("HXEditorWinClass", "HXEditorWin", nullptr));
        actionLoadScene->setText(QApplication::translate("HXEditorWinClass", "Load...", nullptr));
        actionLoadGameObject->setText(QApplication::translate("HXEditorWinClass", "Create...", nullptr));
        actionSaveScene->setText(QApplication::translate("HXEditorWinClass", "Save as...", nullptr));
        actionDeleteGameObject->setText(QApplication::translate("HXEditorWinClass", "Delete...", nullptr));
        actionExportGameObject->setText(QApplication::translate("HXEditorWinClass", "Export...", nullptr));
        actionCreateEmptyGO->setText(QApplication::translate("HXEditorWinClass", "CreateEmpty", nullptr));
        actionNewScene->setText(QApplication::translate("HXEditorWinClass", "New", nullptr));
        actionDirectionLight->setText(QApplication::translate("HXEditorWinClass", "DirectionalLight", nullptr));
        actionPointLight->setText(QApplication::translate("HXEditorWinClass", "PointLight", nullptr));
        actionSpotLight->setText(QApplication::translate("HXEditorWinClass", "SpotLight", nullptr));
        actionDeleteLight->setText(QApplication::translate("HXEditorWinClass", "Delete...", nullptr));
        actionCreateCamera->setText(QApplication::translate("HXEditorWinClass", "Create", nullptr));
        actionDeleteCamera->setText(QApplication::translate("HXEditorWinClass", "Delete...", nullptr));
        menuFile->setTitle(QApplication::translate("HXEditorWinClass", "Scene", nullptr));
        menuGameObject->setTitle(QApplication::translate("HXEditorWinClass", "GameObject", nullptr));
        menuLight->setTitle(QApplication::translate("HXEditorWinClass", "Light", nullptr));
        menuCreateLight->setTitle(QApplication::translate("HXEditorWinClass", "Create", nullptr));
        menuCamera->setTitle(QApplication::translate("HXEditorWinClass", "Camera", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HXEditorWinClass: public Ui_HXEditorWinClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HXEDITORWIN_H
