#pragma once
#include "DynamicArray.h"
#include "ArraypipApp.h"
#include "Texture.h"
#include "Font.h"
#include "Input.h"
#include "Application.h"
#include "Renderer2D.h"


class ArraypipApp : public aie::Application {
public:

	
	virtual bool startup();
	virtual void shutdown();

	virtual void update(float deltaTime);
	virtual void draw();

protected:



	aie::Renderer2D*	m_2dRenderer;
	aie::Font*			m_font;
};