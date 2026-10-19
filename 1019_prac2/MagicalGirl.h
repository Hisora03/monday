#pragma once
class MagicalGirl
{
public:
	//純粋仮想関数
	
	/// <summary>
	/// 攻撃
	/// </summary>
	virtual void Fight() = 0;
	/// <summary>
	/// プロフィール
	/// </summary>
	virtual void ShowProfile();
	/// <summary>
	/// 魔法少女デストラクタ
	/// </summary>
	virtual~MagicalGirl() = default;

};

