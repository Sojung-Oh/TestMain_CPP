#include <iostream>
#include <string>

//#define MAIN3

#ifdef MAIN3

int main() {
	//---------�ǽ�8. ������ �����

	//-------(1) 5�ܸ� ����ϱ�

	//std::cout << "5�� ���" << std::endl;

	//int until = 10;

	//for (int i = 1; i < until; i++)
	//{
	//	std::cout << "5 * " << i << " = " << 5 * i<< std::endl;
	//}

	//------(2) 1~9�ܱ��� ��� ����غ���
	//std::cout << "1 ~ 9�� ���" << std::endl;
	//int until = 10;

	//for (int i = 1; i < until; i++)
	//{
	//	std::cout << "----" << i <<"��----" << std::endl;
	//	for (int i2 = 1; i2 < until; i2++)
	//	{
	//		std::cout << i << " * " << i2 << " = " << i * i2 << std::endl;
	//	}
	//}
//---------�ǽ�9. 1���� n������ �� ���ϱ�

	//std::cout << "1���� n������ �� ���ϱ�\n" << std::endl;
	//
	//std::cout << "����(���� ����)�� �Է��ϼ���: " << std::endl;

	//int input;
	//std::cin >> input;

	//int res = 0;

	//for (int i = 1; i <=  input; i++) res = res + i; //for���� ������ ��쿡�� �߰�ȣ ���� �̷��� ǥ���� �� �ִ�.

	//std::cout << "1���� " << input << "������ ���� : " << res << std::endl;

	//--------�ǽ�10. while�� ����غ���
	bool flag = true;

	//--------------�ǽ�8 while�� �ٽ�¥��

	if (!flag) {
		//---8.(1)

	//-------(1) 5�ܸ� ����ϱ�

		std::cout << "5�� ���" << std::endl;

		int until = 10;
		int i = 1;

		while (i < until)
		{
			std::cout << "5 * " << i << " = " << 5 * i << std::endl;
			i++;
		}

		//-----8.(2)
		std::cout << "1 ~ 9�� ���" << std::endl;
		int i2 = 1;
		int j = 1;

		while (i2 < until)
		{
			std::cout << "----" << i2 << "��----" << std::endl;
			
			int j = 1;
			while (j < until)
			{
				std::cout << i2 << " * " << j << " = " << i2 * j << std::endl;
				j++;
			}
			i2++;
		}
	}
	
	//----------�ǽ�9 while �̿��ؼ� �ٽ� ¥��

	if (!flag) {
		//---------�ǽ�9. 1���� n������ �� ���ϱ�

	std::cout << "1���� n������ �� ���ϱ�\n" << std::endl;
	
	std::cout << "����(���� ����)�� �Է��ϼ���: " << std::endl;

	int input;
	std::cin >> input;

	int res = 0;
	int i = 1;

	while (i <= input) {
		res = res + i;
		i++;
	}

	std::cout << "1���� " << input << "������ ���� : " << res << std::endl;
	}

	//----------�ǽ�11. ����ڰ� �Է��� ���� ���ϱ�
	if (!flag) {
		int input;
		int res = 0;
		std::cout << "����ڰ� �Է��� ���� ���ϱ�\n" << std::endl;
		
		do {
			std::cout << "���ڸ� �Է��ϼ���(0: exit): ";
			std::cin >> input;
			res += input;
		} while (input != 0);
		std::cout << "����ڰ� �Է��� ���� ���� : " << res << std::endl;
	}

	//-------�ǽ�12. �Է��� ���ڸ�ŭ �����
	if (!flag) {
		int input;
		int floor = 1;
		std::cout << "���ڸ� �Է��ϼ���(0: exit): ";
		std::cin >> input;


		while (floor <= input) {

			for (int i = 1; i <= floor; i++) {
				std::cout << "*";
			}
			floor += 1;
			std::cout << "\n" << std::endl;
		}
	}

	//-------���սǽ�3. �Ƕ�̵� ���� �� ���
	
	if (flag) {
		int input;
		int floor = 1;
		std::cout << "�Ƕ�̵��� ���̸� �Է��ϼ���(0: exit): ";
		std::cin >> input;


		while (floor <= input) { 

			//����
			for (int i = 1; i <= input - floor; i++) {
				std::cout << " ";
			}


			//�����
			for (int i = 1; i <= 1 + (floor-1)*2 ; i++) {
				std::cout << "*";
			}
			std::cout << "\n" << std::endl;
			floor += 1;
		}
	}

	return 0;
}
#endif