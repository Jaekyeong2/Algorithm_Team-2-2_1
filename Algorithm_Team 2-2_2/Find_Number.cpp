#include <stdio.h>

void find_number()
{
	int i, find_num = 45; //ã���� �ϴ� ����
	int num_box[8] = { 45,20,60,35,10,55,90,85 }; //���� ���

	for (i = 0; i < 8; i++)
	{
		if (find_num == num_box[i])
		{
			printf("%d��°������ �ִ� %d���� ã�ҽ��ϴ�. ", i + 1, num_box[i]);
			return; //Ž�������� �Լ� ����
		}
	}
	printf("%d <- ��Ͽ� ���� �����Դϴ�.", find_num); //���ǹ��� �ߵ����� ������
}

int main()
{
	find_number();
}
