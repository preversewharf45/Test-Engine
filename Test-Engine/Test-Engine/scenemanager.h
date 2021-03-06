#pragma once

#include "scene.h"
#include "assetmanager.h"
#include "shadermanager.h"
#include "lualoader.h"
#include "player.h"

class SceneManager : LuaLoader {
public:
	SceneManager();
	SceneManager(AssetManager * pAssetManager);
	inline Scene * getActiveScene() { return mActiveScene; }
public:
	static Shader * getBasicModelShader() { return mBasicModelShader; }
	static Shader * getTerrainShaer() { return mTerrainShader; }
	static Shader * getWaterShader() { return mWaterShader; }
	static Shader * getSkyboxShader() { return mSkyboxShader; }
	static Shader * getGrassShader() { return mGrassShader; }
private:
	static AssetManager * mAssetManager;
	static std::vector<Scene> mScenes;
	static Scene * mActiveScene;
private:
	static Shader * mBasicModelShader;
	static Shader * mTerrainShader;
	static Shader * mWaterShader;
	static Shader * mSkyboxShader;
	static Shader * mGrassShader;
private:
	static int loadTerrain(lua_State * L);
	static int setSun(lua_State * L);
private:
	void commitFunctions() override;
};
