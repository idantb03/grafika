#pragma once
#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>

class Demo :
	public RenderEngine
{
public:
	Demo();
	~Demo();
private:
	GLuint shadowmapShader, cubeVBO, cubeVAO, cubeEBO, cube_texture, planeVBO, planeVAO, planeEBO, plane_texture, stexture, stexture2, stexture3, stexture4, stexture5, VBO, VAO, EBO, texture, VBO2, VAO2, EBO2, texture2, texture3, VBO3, VAO3, EBO3, texture4, VBO4, VAO4, EBO4;
	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow *window);
	void BuildStove();
	void BuildSideStove();
	void BuildFrontStove();
	void BuildTexturedPlane();
	void DrawStove();
	void DrawSideStove();
	void DrawFrontStove();
	void DrawTexturedPlane();
};

