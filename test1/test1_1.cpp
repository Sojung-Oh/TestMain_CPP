#include <iostream>
#include <string> //���ڿ��� ó���ϱ� ���� ���̺귯��

//using namespace std; // std��� ���ӽ����̽��� ����ϰڴ�
int val = 0;
std::string str = "";

int main() {
	int val = 0;

	//cout << "�ȳ��ϼ���" << std::endl;
	//cout << "���� �ݿ� ���� Ȯ��" << std::endl;

	//--------�ڷ���

	////bool b = 4; // 0�� �ƴ� ���ڴ� ��� 1(True)�� ���
	//char c = 'A'; // ���ڿ��� "", ���ڴ� '' 
	//int i = 1.5; // �Ҽ��� �Ʒ� �κ��� �߶����
	//float f = 1.111;

	////std::cout << b << std::endl;
	////std::cout << "bool���� ������" << sizeof(b) << std::endl;
	//std::cout << c << std::endl;
	//std::cout << i << std::endl;
	//std::cout << f << std::endl;

	//-------------------�ǽ�2
	//char student_grade = 'A';
	//double sensor1Temperature = 36.5;
	//double sensor1Humidity = 78.5;
	//double MotorSpeed = 28.6;

	////---------������ �޸�

	//int a = 100;
	//int b = 100;

	//int* ptr = 0;
	//int* ptr2 = 0;

	//ptr = &a;
	//ptr2 = &b; //�� ������ �ּ� 16������ ǥ��

	//std::cout << ptr << std::endl;
	//std::cout << ptr2 << std::endl;

	//-------------���
	char ch = 40; //�ƽ�Ű�ڵ� ��ȣ�� �����Ǵ� ���� ���
	std::cout << ch << std::endl;

	//---------------�Է�

	std::cout << "���� �Է��Ͻÿ�: " << std::endl;
	std::cin >> val;
	std::cout << "�Էµ� ��" << std::endl;
	std::cout << val;

	//---------------�ǽ�3 �����

	std::cout << "����� ���ڿ��� �Է��ϼ���, �� ���ڿ��� 5ȸ ���� ��µ˴ϴ� " << std::endl;
	std::cout << "�Է��� ���ڿ�: ";
	std::cin >> str; 
	std::cout << "�Էµ� ��: ";
	std::cout << "1ȸ �Է�" << str << std::endl;
	std::cout << "2ȸ �Է�" << str << std::endl;
	std::cout << "3ȸ �Է�" << str << std::endl;
	std::cout << "4ȸ �Է�" << str << std::endl;
	std::cout << "5ȸ �Է�" << str << std::endl;

	return 0;
}

