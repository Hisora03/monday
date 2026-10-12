#include<iostream>
#include"Enemy.h"
#include"Player.h"
#include"boss.h"
using namespace std;

int main(void)
{
	
	string playerName;
	string enemyName;
	string bossName;
	cout << "名前を入力してください" << endl;
	cout << "冒険者:" << endl;
	cin >> playerName;
	cout << "ゴブリン:" << endl;
	cin >> enemyName;
	cout << "魔王:" << endl;
	cin >> bossName;

	//コンストラクタ
	Player player(playerName);
	Enemy enemy(enemyName);
	Boss boss(bossName);

	cout << "勇者の名前" << playerName << endl;
	cout << "敵の名前" << enemyName << endl;
	cout << "ボスの名前" << bossName << endl;

	player.Attack();
	enemy.Attack();
	boss.Attack();

	return 0;
}