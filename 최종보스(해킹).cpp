#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Professor
{
public:
	Professor() {};
	void villain()
	{
		int myHp = 600, myAttack = 30, myMp = 10; //巴傾戚嬢税 端径, 因維径, 拭格走
		int bossHp = 500, bossAttack = 60, bossMp = 5; //旋税 端径, 因維, 拭格走
		int myTurn = 0, bossTurn = 0, gameRandom = 0; //鎧託景, 旋託景, 惟績 鎧 沓棋推社 痕呪
		srand(time(NULL));
		while (myHp > 0 && bossHp > 0) //巴傾戚嬢人 旋税 端径戚 0左陥 適 疑照 鋼差
		{
			system("cls");
			cout << "*******************************************************" << endl;
			cout << "沿悦莫嘘呪税 陳濃斗研 背天馬食 曽悪聖 限戚馬虞!" << endl;
			cout << endl;
			cout << "<姶備 嘘呪研 柵訓生稽 去舌獣佃?>" << endl;
			cout << endl;
			cout << endl;
			cout << "酔軒税 端径 : " << myHp << "                " << "嘘呪還税 端径 : " << bossHp << endl;
			cout << "酔軒税 因維径 : " << myAttack << "               " << "嘘呪還税 因維径 : " << bossAttack << endl;
			cout << "酔軒税 拭格走 : " << myMp << "               " << "嘘呪還税 拭格走 : " << bossMp << endl;
			cout << "1. 因維" << endl;
			cout << "2. 噺杷" << endl;
			cout << "3. 悪鉢" << endl;
			cout << "4. 噺差" << endl;
			cout << "5. 琶詞奄" << endl;
			cout << endl;
			cout << "『 琶詞奄澗 拭格走亜 50戚雌 乞食醤 紫遂亜管馬悟 噺杷亜 災亜管杯艦陥." << endl;
			cout << "『 因維, 悪鉢, 拭格走亜 50焼掘析 凶税 琶詞奄研 紫遂馬檎 拭格走亜 10梢 中穿桔艦陥." << endl;
			cout << "『 因維獣 20%税 溌懸稽 蓄亜稽 汽耕走研 匝 呪 赤柔艦陥.." << endl;
			system("pause");
			cout << endl;
			cout << "馬蟹研 識澱馬室推 : ";
			cin >> myTurn; //五敢 識澱
			cout << endl;
			bossTurn = rand() % 3 + 1; //旋 識澱走 3鯵掻 1 識澱
			gameRandom = rand() % 5; //蓄亜因維 溌懸 竺舛
			if (myTurn > 5)
			{
				cout << "脊径 神嫌" << endl;
				system("pause");
			}
			else
			{
				switch (myTurn) //巴傾戚嬢 託景
				{
				case 1: //因維
					if (gameRandom != 1) //gameRandom税 貝呪亜 1戚 焼諌 凶
					{
						cout << "[因維] 沿疑薄戚 背天聖 獣亀杯艦陥." << endl;
						if (bossTurn == 2) //旋戚 噺杷研 識澱梅聖 企
						{
							break; //託景角沿
						}
						else
						{
							bossHp -= myAttack; //旋 端径 姶社
						}
						cout << endl;
						cout << endl;
						myMp += 10; //拭格走 装亜
						break;
					}
					else //gameRandom税 貝呪亜 1析 凶 聡 20%溌懸稽 蓄亜因維
					{
						cout << "[働呪因維] 沿疑薄戚 嬢蟹艦袴什拭 走据聖 推短杯艦陥." << endl;
						if (bossTurn == 2)
						{
							break;
						}
						else
						{
							bossHp -= (myAttack + 10); //旋 端径 因維径拭辞 10希廃 葵 姶社
						}
						cout << endl;
						cout << endl;
						myMp += 10; //拭格走装亜
						break;
					}
				case 2: //噺杷
					cout << "[噺杷] 酵仙失戚 号鉢混聖 闇竺杯艦陥." << endl;
					cout << endl;
					cout << endl;
					break;
				case 3: //悪鉢
					cout << "[悪鉢] 謝井呪税 獄覗稽 坪漁叔径戚 10 雌渋杯艦陥." << endl;
					myAttack += 10; //因維径 雌渋
					cout << endl;
					cout << endl;
					myMp += 10; //拭格走 装亜
					break;
				case 4: //噺差
					cout << "[噺差] 失獣慎戚 諺亜遭 社什坪球研 差姥杯艦陥." << endl;
					myHp += 30; //端径 雌渋
					cout << endl;
					cout << endl;
					break;
				case 5: //琶詞奄
					cout << "[琶詞奄] 沿肯車戚 郊戚君什 覗稽益轡聖 層搾杯艦陥." << endl;
					if (myMp >= 50) //拭格走亜 50戚雌 析 凶幻 紫遂亜管
					{
						cout << "<亜疑> せせせせせせせせせせせせせ" << endl;
						myMp -= 50; //拭格走 50 姶社
						bossHp -= (myAttack * 3); //薄仙 因維径税 3壕税 葵聖 旋 端径拭辞 姶社
					}
					else
					{
						cout << "[拭格走 採膳] 郊戚君什亜 旗 刃失鞠嬢 薦拙聖 域紗杯艦陥." << endl;
						myMp += 5; //拭格走 装亜
					}
					cout << endl;
					cout << endl;
					break;
				}
				cout << "===============================================" << endl;
				system("pause");
				cout << endl;
				cout << endl;
				switch (bossTurn) //旋 託景
				{
				case 1: //因維
					cout << "[因維] 嘘呪還戚 背天聖 獣亀杯艦陥." << endl;
					if (myTurn == 2) //巴傾戚嬢亜 噺杷研 識澱 梅聖 凶
					{
						cout << endl;
						cout << "<嬢? 戚杏 厳革?>" << endl;
						myHp -= 0;
						cout << endl;
						cout << endl;
						break;
					}
					else //巴傾戚嬢亜 噺杷研 薦須廃 陥献 五敢研 識澱梅聖 凶
					{
						cout << endl;
						cout << "<引薦陥!!>" << endl;
						myHp -= bossAttack; //巴傾戚嬢 端径 姶社
						bossMp += 5; //左什 拭格走 装亜
						cout << endl;
						cout << endl;
						break;
					}
				case 2: //噺杷
					cout << "[噺杷] 嘘呪還戚 背天聖 厳紹柔艦陥." << endl;
					cout << endl;
					cout << "<艦級 叔径生稽 嘘呪研 戚掩 依 旭焼?>" << endl;
					cout << endl;
					cout << endl;
					break;
				case 3: //琶詞奄
					cout << "[琶詞奄] 嘘呪績戚 拷重 覗稽益轡聖 層搾杯艦陥." << endl;
					if (bossMp >= 50) //拭格走亜 50戚雌 析 凶幻 紫遂亜管
					{
						cout << "<亜疑> Door拭 亜檎 嘘呪亜 賑添聖 宿嬢鎌嬢." << endl;
						cout << endl;
						cout << endl;
						bossMp -= 50; //旋 拭格走 50姶社
						myHp -= (bossAttack * 3); //巴傾戚嬢税 端径拭辞 旋税 薄仙 因維径税 3壕税 葵聖 姶社
					}
					else //拭格走亜 50左陥 拙聖 凶
					{
						cout << "[拭格走 採膳] 拷重戚 旗 刃失鞠嬢 薦拙聖 域紗杯艦陥." << endl;
						cout << endl;
						cout << "<奄陥形坐 嘘呪亜 稲 格費 繕 舛軒拝暗醤.>" << endl;
						bossMp += 5; //拭格走 装亜
						cout << endl;
						cout << endl;
					}
					break;
				}
				system("pause");
				if (bossHp <= 0) //旋税 端径戚 0戚馬 析 凶
				{
					cout << "』』』』』 沿肯車 繕亜 巷紫備 曽悪聖 限戚梅柔艦陥. 』』』』』" << endl;
					cout << endl;
					break;
				}
				else if (myHp <= 0) //巴傾戚嬢税 端径戚 0戚馬 析 凶
				{
					cout << "�哂哂哂哂� 闇号走惟 嘘呪廃砺 亀穿聖 背? 格費澗 号俳 凶 嘘呪 尻姥叔稽 人 �哂哂哂哂�" << endl;
					cout << endl;
					break;
				}
			}
		}
	}
};
int main()
{
	Professor professor;
	professor.villain();
}