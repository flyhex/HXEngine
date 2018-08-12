#pragma once
#include "HXCommon.h"
#include "HXICamera.h"
#include "vgl.h"
#include "vmath.h"
#include "HXVector.h"
#include "HXQuaternion.h"

namespace HX3D
{
	class HXGLCamera : public HXICamera
	{
	public:
		HXGLCamera();
		~HXGLCamera();

		virtual void Initialize(const HXVector3D& position, const HXVector3D& rotate,
			float nearZ, float farZ);

		virtual bool PreRender();
		virtual void PostRender();
		virtual bool PreRenderShadowMap();
		virtual void PostRenderShadowMap();

		virtual void Update();
		HXVector3D UpdateAt();
		HXVector3D UpdateUp();
		void OnViewPortResize(int nScreenWidth, int nScreenHeight);
	
		//HXVector3D WorldToScreenPoint(HXVector3D position);
		//HXVector3D ScreenToWorldPoint(HXVector3D position);
		HXVector3D WorldToViewportPoint(HXVector3D position);	//([-1,1],[-1,1])
		HXVector3D ViewportToWorldPoint(HXVector3D position);

		// ����ƶ�
		virtual void move(const HXVector3D& mov);
		// ��Y����ת
		virtual void yaw(float fDegree);
		// ��X����ת
		virtual void pitch(float fDegree);

		void UpdateViewMatrix(const HXVector3D& eye, const HXVector3D& at, const HXVector3D& up);
		//void UpdateProjectionMatrix(float left, float right, float bottom, float top, float n, float f);
		void UpdateProjectionMatrix(float field, float size, float n, float f);

		vmath::mat4 mMatrixView;
		vmath::mat4 mMatrixProjection;

		/*float mNear;
		float mFar;*/
	};
}


