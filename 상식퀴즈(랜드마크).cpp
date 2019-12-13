#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Landmark
{
public:
	Landmark() {};
	void quiz()
	{
		string a[] = { "광화문", "자유의여신상", "만리장성", "아사쿠사", "빅벤", "에펠탑", "콜로세움", "타지마할", "스핑크스" }; //랜드마크 배열
		string b[] = { "한국", "미국", "중국", "일본", "영국", "프랑스", "이탈리아", "인도", "이집트" }; //나라배열
		string answer; //답안 문자열
		int r; //랜덤 변수
		int num; //숫자입력 변수
		int correct = 0; //정답 횟수
		srand(time(NULL));
		cout<<"=======문제로 나오는 랜드마크가 있는 나라 이름을 쓰세요.======="<<endl;
		cout << endl;
		cout << endl;
		for (;;)
		{
			cout << "퀴즈 : 1, 종료 : 2 >>";
			cout << " ";
			cin >> num; //숫자 입력
			if (num == 1)
			{
				for (;;)
				{
					int r = rand() % 9; //아홉개의 문자열 중 랜덤으로 출력
					cout << endl;
					cout << a[r] << "가(이) 있는 나라는?";
					cout << " ";
					cin >> answer; //답안 입력
					if (answer == "다시")
						break;
					if (b[r] == answer)
					{
						cout << endl;
						cout << endl;
						cout << "정답 !!" << endl;
						correct++; //정답일 때 마다 증가
						if (correct > 2) //correct가 2보다 클 때 즉 세번 이상 정답일 경우
						{
							cout << endl;
							cout << endl;
							cout << "축하합니다. 상식퀴즈의 방을 통과했습니다." << endl;
							exit(1); //통과
						}
					}
					else
					{
						cout << endl;
						cout << endl;
						cout << "읍읍!! 당신들 누구야 ?! ...(이미 잡혀간 도전자입니다.)" << endl;
						exit(1); //실패
					}
				}
			}
			else if (num == 2)
			{
				break;
			}
			else
			{
				cout << endl;
				cout << endl;
				cout << "입력 오류" << endl;
				break;
			}
		}
	}
};
int main()
{
	Landmark landmark;
	landmark.quiz();
}