#include <stdio.h>

void find_number()
{
	int i, find_num = 45; //찾고자 하는 숫자
	int num_box[8] = { 45,20,60,35,10,55,90,85 }; //숫자 목록

	for (i = 0; i < 8; i++)
	{
		if (find_num == num_box[i])
		{
			printf("%d번째순서에 있는 %d값을 찾았습니다. ", i + 1, num_box[i]);
			return; //탐색성공시 함수 종료
		}
	}
	printf("%d <- 목록에 없는 숫자입니다.", find_num); //조건문이 발동되지 않으면
}

int main()
{
	find_number();
}
