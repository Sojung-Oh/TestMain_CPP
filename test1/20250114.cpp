#include <iostream>
#include <string>

//#define MAIN2 //��ó����. ���� �Ӽ����� ��ó���� �Ӽ� �����ؼ� �ڵ�ó�� �ϰ� �� ���� ������ ���� ���⿣ �̰� ���� ������

#ifdef MAIN2

int main(){
	/*int val = 0;

	std::cout << "input any number" << std::endl;
	std::cin >> val;

	std::cout << "hello" << std::endl;
	std::cout << "I'm taking K-Digital-Training course" << std::endl;
	std::cout << "Renewable Energy course - 1st" << std::endl;

	if (val == 1) {
		std::cout << "�Ƶ��̳�";
	}
	else if (val == 2) {
		std::cout << "Python";
	}
	else if (val == 3) {
		std::cout << "AWS";
	}
	else {
		std::cout << "nothing";
	}
	std::cout << "�Դϴ�." << std::endl;*/
	//----------------�ǽ�4. if��(1)

	//int age = 0;

	//std::cout << "���̸� �Է��ϼ���." << std::endl;
	//std::cin >> age;

	//if (age <= 0) {
	//	std::cout << "�߸��� �Է��Դϴ�." << std::endl;
	//}
	//else if (age < 8) {
	//	std::cout << "�����Դϴ�." << std::endl;
	//}
	//else if (age < 14) {
	//	std::cout << "�ʵ��л��Դϴ�." << std::endl;
	//}
	//else if (age < 17) {
	//	std::cout << "���л��Դϴ�." << std::endl;
	//}
	//else if (age < 20) {
	//	std::cout << "����л��Դϴ�." << std::endl;
	//}
	//else if (age < 200) {
	//	std::cout << "�����Դϴ�." << std::endl;
	//}
	//else {
	//	std::cout << "���̰� �ʹ� �����ϴ�." << std::endl;
	//}

	//--------------�ǽ�5. if��(2)

	//std::string name = "";
	//std::cout << "�̸��� �Է��ϼ���." << std::endl;
	//std::cin >> name;

	//if (name == "ȫ�浿") {
	//	std::cout << "�����Դϴ�." << std::endl;
	//}
	//else if (name == "������") {
	//	std::cout << "�����Դϴ�." << std::endl;
	//}
	//else {
	//	std::cout << "�𸣰ھ��." << std::endl;
	//}

	//------------switch�� 

	/*int val = 0;

	std::cout << "���ڸ� �Է��ϼ���: ";
	std::cin >> val;

	switch (val) {
		case 0:
			std::cout << "case 0 �Դϴ�!!" << std::endl;
			break;
		case 1:
			std::cout << "case 1 �Դϴ�!!" << std::endl;
			break;
		case 2:
			std::cout << "case 2 �Դϴ�!!" << std::endl;
			break;
		case 3:
			std::cout << "case 3 �Դϴ�!!" << std::endl;
			break;
		default:
			break;
	}*/

	//---------��������

	//int val = 0;
	//bool flag = true;

	//std::cout << "���� �Է��� ���ڴ�? ";

	//std::cin >> val;

	//if (val >= 40 && val <= 60) // 40 <= val <= 60�� �߸��� ���ǹ�. �պκи� ���� Ȯ���ؼ� true <= 60 ���� ��� 
	//{
	//	std::cout << "40���� 60 �����Դϴ�.";
	//}
	//else if (val >= 70 && val <= 80) // 70 <= val && val <= 80 �̷��� �ᵵ ok!
	//{
	//	std::cout << "70���� 80 �����Դϴ�.";
	//}
	//else if (val >= 80 && val <= 90)
	//{
	//	std::cout << "80���� 90 �����Դϴ�.";
	//}
	//else {
	//	std::cout << "pass";
	//}

//int val_1 = 9;
//int val_2 = 21;
//int result = 0;
//
//result = val_1 + 21;
//std::cout << "���� ���: " << result << std::endl;
//
//result = val_1 - val_2;
//std::cout << "���� ���: " << result << std::endl;
//
//result = val_2 * val_1;
//std::cout << "���� ���: " << result << std::endl;
//
//result = val_2 / val_1;
//std::cout << "������ ���: " << result << std::endl;
//
//result = val_2 % val_1;
//std::cout << "������ ���: " << result << std::endl;
//
//val_1++;
//std::cout << "val_1 ���������� ���: " << val_1 << std::endl;

//---------�ǽ�6. switch��

//int score = 0;
//char grade = 'N';
//bool flag = false;
//
//std::cout << "������ �Է��ϼ���: ";
//std::cin >> score;
//
//if (score < 0) {
//	std::cout << "�߸��� �Է��Դϴ�" << std::endl;
//}
//else {
//	if (90 < score && score <= 100) {
//		grade = 'A';
//		if(flag) std::cout << "������ A�Դϴ�" << std::endl;
//	}
//	else if (75 < score && score <= 90) {
//		grade = 'B';
//		if (flag) std::cout << "������ B�Դϴ�" << std::endl;
//	}
//	else if (50 < score && score <= 75) {
//		grade = 'C';
//		if (flag) std::cout << "������ C�Դϴ�" << std::endl;
//	}
//	else if (34 < score && score <= 50) {
//		grade = 'D';
//		if (flag) std::cout << "������ D�Դϴ�" << std::endl;
//	}
//	else {
//		grade = 'F';
//		if (flag) std::cout << "������ F�Դϴ�" << std::endl;
//	}
//
//	switch (grade) {
//	case 'A':
//		std::cout << "������ A�Դϴ�." << std::endl;
//		break;
//	case 'B':
//		std::cout << "������ B�Դϴ�." << std::endl;
//		break;
//	case 'C':
//		std::cout << "������ C�Դϴ�." << std::endl;
//		break;
//	case 'D':
//		std::cout << "������ D�Դϴ�." << std::endl;
//		break;
//	case 'F':
//		std::cout << "������ F�Դϴ�." << std::endl;
//		break;
//	}
//}

//-----------�ǽ�7. ���� ������

//int input = 0;
//int rest = 0;
//std::cout << "���ڸ� �Է��ϼ���: ";
//std::cin >> input;
//
//rest = input % 5;
//
//rest == 0 ? std::cout << input << "�� 5�� ����Դϴ�." << std::endl : std::cout << input << "�� 5�� ����� �ƴϳ׿�̤�" << std::endl;

//-------------���� �ǽ�1

//int today = 0000;
//int bday = 0000;
//
//std::cout << "������ ���� ���� 4�ڸ� ���ڷ� �Է��ϼ���. (e.g. 2025�� 1�� 14�� -> 0114): ";
//std::cin >> today;
//
//std::cout << "������ ���� ���� 4�ڸ� ���ڷ� �Է��ϼ���. (e.g. 2000�� 10�� 14�� -> 1014): ";
//std::cin >> bday;
//
//today < bday? std::cout << "������ ���� ���� ���ҳ׿�." << std::endl : std::cout << "������ �����׿�." << std::endl;


//-----------���սǽ�2. ���� ���α׷� �����
float val_1 = 0.0;
float val_2 = 0.0;
char circul = ' ';
float res = 0.0;

std::cout << "�� ���� ������ �Է��ϼ���: " << std::endl;
std::cin >> val_1;
std::cin >> val_2;

std::cout << "�����ڸ� �Է��ϼ���: ";
std::cin >> circul;

switch (circul) {
case '+'  :
	res = val_1 + val_2;
	std::cout << "���� ����� " << res <<"�Դϴ�." << std::endl;
case '-':
	res = val_1 - val_2;
	std::cout << "���� ����� " << res << "�Դϴ�." << std::endl;
case '*':
	res = val_1 * val_2;
	std::cout << "���� ����� " << res << "�Դϴ�." << std::endl;
case '/':
	if (val_2 == 0) {
		std::cout << "0���� ���� �� �����ϴ�." << std::endl;
	}
	else {
		res = val_1 / val_2;
		std::cout << "���� ����� " << res << "�Դϴ�." << std::endl;
	}
default:
	std::cout << "�����ڰ� �߸� �ԷµǾ����ϴ�." << std::endl;
}


	return 0;

}
#endif