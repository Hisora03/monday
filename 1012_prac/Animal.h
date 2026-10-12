#pragma once
#include <string>
class Animal
{
private:
	std::string name;
public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	/// <param name="name">動物の名前</param>
	Animal(std::string);

	std::string GetName();

	/// <summary>
	/// 鳴く
	/// </summary>
	virtual void Speak() = 0;
};