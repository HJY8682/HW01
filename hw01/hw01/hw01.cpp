#include <iostream>

using namespace std;

int main() {
	double num[5];
	double total = 0;

	for (int i = 0; i < 5; i++) {			//i를 1로하고 < 를 하면 4까지밖에 안나오고 <= 를하면 0~4까지 이기때문에 5가 없어 오류
		cout << i + 1  << " 번째 숫자 : ";  // i는 0부터 시작하기 때문에 i+1을 해줘야 1부터 시작
		cin >> num[i];                      //	입력받은 숫자를 num 배열에 저장
		total += num[i];                    // 입력받은 숫자를 total에 합산
	}

	double average = total / 5;				// 평균을 구하기 위해 total을 5로 나눔

	cout << "합계 : " << total << endl;
	cout << "평균 : " << average << endl;

	return 0;
}