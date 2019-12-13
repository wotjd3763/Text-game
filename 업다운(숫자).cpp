#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Check
{
public:
	Check() {}
	void it()
	{
		int random; //난수
		int chance; //기회
		int num; //입력할 숫자
		int first; //난수 범위 (최소)
		int last; //난수 범위 (최대)

		srand(time(NULL)); //난수
		chance = 5;
		first = 1;
		last = 100;
		random = rand() % last + first; //1부터 100까지 난수 설정
		cout << "<<<<<<<<<<< 업/다운 게임 >>>>>>>>>>" << endl;
		cout << first << "부터 " << last << "까지의 범위의 숫자 중 하나가 랜덤으로 정해집니다." << endl;
		cout << "총 " << chance << "번의 기회가 있으니 그 안에 숫자를 맞추십시오." << endl;
		cout << "0을 입력하면 게임을 종료합니다." << endl;
		while ( chance < 6 && chance > 0 ) //기회가 0보다 크고 6보다 작을 동안만 반복
		{
			cout << "숫자를 입력하세요 : ";
			cin >> num; //숫자 입력
			cout << endl;
			cout << endl;
			if (num == 0)
			{
				cout << "게임을 종료합니다." << endl;
				exit(1);
			}
			else if (num<first || num>last) //입력한 숫자가 범위를 벗어날 때
				cout << "입력하신 숫자가 범위안에 포함되어 있지 않습니다." << endl;
			else
			{
				if (num == random) //입력한 숫자와 난수가 일치할 때
				{
					cout << "승리했습니다!!! 정답은 : "<< random << " 입니다." << endl;
					cout << endl;
					exit(1);
				}
				else if (num > random) //입력한 숫자가 난수보다 클 때
				{
					chance--; //틀릴 때 마다 기회가 1씩 감소
					cout << "다운! 좀더 아래의 숫자입니다." << endl;
					cout << "남은 횟수는 : " << chance << "번" << endl;
					cout << endl;
					cout << endl;
				}
				else if (num < random) //입력한 숫자가 난수보다 작을 때
				{
					chance--;
					cout << "업! 좀더 위의 숫자입니다." << endl;
					cout << "남은 횟수는 : " << chance << "번" << endl;
					cout << endl;
					cout << endl;
				}
				else
					cout << endl;
			}
		}
		cout << "패배했습니다... 정답은 : " << random << " 입니다." << endl;
		cout << endl;
		exit(1);
	}
};
int main()
{
	Check check;
	check.it();
}