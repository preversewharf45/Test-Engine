#pragma once

#include "scenemanager.h"

class TerrainRenderer {
public:
	TerrainRenderer();
	TerrainRenderer(glm::mat4 pProjection);
	void draw(std::vector<Terrain*> * pTerrains, const glm::mat4 &pViewMatrix, Shader * pShader);
	void setSun(DirectionalLight * pSun, Shader * pShader);
private:
	glm::mat4 mProjection;
	void drawElements(unsigned int pVertexCount);
	void enableVertexAttribArray(unsigned int pSize);
};
