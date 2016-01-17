#pragma once
#include "GlobalDef.h"

class CSceneBase
{
public:
	CSceneBase();
	~CSceneBase();

	//初始化
	virtual void Init();

	//游戏进行，返回false时表示游戏结束
	virtual bool Play();

	//提供给每次更新单个Brick游戏（当前只有游戏结束）使用，获取当前改变的Brick行列索引
	virtual void GetCurPos(int& iRowIndex, int& iColIndex);

	//获取当前Brick状态
	virtual bool GetBrickState(int iRowIndex, int iColIndex);

	//获取游戏类型
	virtual SCENE_INDEX GetSceneType();

	//获取每次执行完Play后等待的时间
	virtual float GetRefreshTime();

	//左
	virtual void OnLeft();

	//右
	virtual void OnRight();

	//上
	virtual void OnUp();

	//下
	virtual void OnDown();

	//Fire
	virtual void OnFire();

	//开始
	virtual void OnStart();
};

