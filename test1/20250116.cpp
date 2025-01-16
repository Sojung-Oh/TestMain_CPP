#include <iostream>
#include <string>

using namespace std;

#define MAIN4

#ifdef MAIN4

int main()
{
	//string ����
	if (!true) {
		string str1 = "";
		string str2 = "codingon";
		string str3("condingon");
		string str4(str2); //str4 = str2
		char str_arr[] = { 'h', 'e', 'l', 'l', 'o', NULL }; //string�� �� ������ null(�Ǵ� 0) �� �־����� ������ �����Ⱚ ��� ��
		string str5(str_arr);

		cout << "str 1: " << str1 << endl;
		cout << "str 2: " << str2 << endl;
		cout << "str 3: " << str3 << endl;
		cout << "str 4: " << str4 << endl;
		cout << "str 5: " << str5 << endl;
	}
	
	//string ����
	if (!true) {
		string str1 = "coding";
		string str2 = "on";
		string str3("aaa");
		string str4("bbb");
		string str5("bbbbb");

		cout << "str 1 + str 2 : " << str1 + str2 << endl;
		cout << "str 1 > str 2 : " << (str1 < str2) << endl; //���ڿ��� ���ĺ� ���� �ձ��� ��
		cout << "str 1 > str 2 : " << (str4 < str5) << endl; //���ڿ��� �պκ��� ���� ��� ���� ��
	}

	//string �Լ�
	if (!true) {
		string str1 = "helloworld";
		string str2 = "codingon";
		string str3("on");
		string str4("world");
		string str5("bbbbb");

		//cout << "at : " << str1.at(5) << endl;
		//cout << "index : " << str1[5] << endl;
		//cout << "front : " << str1.front() << endl;
		//cout << "back : " << str1.back() << endl;
		//cout << "length : " << str1.length() << endl;
		//str1.resize(5);
		//cout << "resize : " << str1 << endl;
		//cout << "empty : " << str1.empty() << endl; //str1�� ����ִ��� ���� Ȯ��
		////str1.clear();
		//cout << "clear : " << str1.empty() << endl;

		cout << "find : " << str1.find(str4) << endl; // ������ ù���� �ε����� ��ȯ, ������ Ʈ���� �� ��ȯ
		cout << "substr : " << str2.substr(3,2) << endl;
		cout << "compare : " << str1.compare(str2) << endl;

		cout << "isdigit : " << isdigit('1') << endl; //���ڰ� �����̸� true, �ƴϸ� false
		cout << "isalpha : " << isalpha('c') << endl; //���ڰ� ���ĺ��̸� true,�ƴϸ� false

		cout << "toupper('c') : " << toupper('c') << endl; //�ƽ�Ű �ڵ� ��ȣ�� ��� ����

		char ch = toupper('c');
		char ch2 = 68; //������ ������ �ƽ�Ű �ڵ� ��ȣ�� ��� �ش� ���ڸ� �����ϴ� �͵� ����
		cout << "ch : " << ch << endl;
		cout << "ch2 : " << ch2 << endl;

		cout << "string to int  : " << stoi("1234") << endl;
		
		cout << "string to int  : " << typeid(stoi("1234")).name() << endl; //�ڷ��� Ȯ���ϱ�
	
	}

	//--------------�ǽ�13. string ����غ���

	if (!true) {
		string s = "Police say two people are suspected of trying to create a shortcut for their construction work.The two have been detained and the case is under further investigation.The 38-year-old man and 55-year-old woman were working near the affected area, the 32nd Great Wall.";
		cout << "length of s  : " << s.length() << endl;
		cout << "100th letter of s  : " << s[99] << endl;
		cout << "index of first 'two' in the s  : " << s.find("two") << endl; //���⼭ ����� 11�̴� 12 �ε��� ���ĺ��� "two" �ٽ� ã���� �ι�° "two" ã�� �� �ִ�
		cout << "index of second  'two' in the s  : " << s.find("two", 12) << endl;
	
	}
	
	//-------------�ǽ�14. string ����غ���

	if (!true) {
		string input1, input2;
		
		int i = 0;
		int i_2 = 0;
		int count1;
		int count2;

		do{ cout << "ù��° ���ڿ��� �Է��ϼ���  : " << endl;
		cin >> input1;
		
		count1 = input1.length();

		while (i < count1)
		{
			int val = isdigit(input1[i]);
			if (val == 0)
			{
				cout << "No " << endl;
				break;
			}
			else {
				i_2++;
			}
			i++;
		}
		if (i_2  == count1)
		{
			cout << "ù��° ���ڿ��� ok " << endl;
		}
		else 
		{cout << "ù��° ���ڿ��� no " << endl; }

		} while (i_2 != count1);

		int j = 0;
		int j_2 = 0;

		do {
			cout << "�ι�° ���ڿ��� �Է��ϼ���  : " << endl;
			cin >> input2;
			count2 = input2.length();

			while (j < count1)
			{
				int val2 = isdigit(input2[j]);
				if (val2 == 0)
				{
					cout << "No " << endl;
					break;
				}
				else {
					j_2++;
				}
				j++;
			}
			if (j_2 == count2)
			{
				cout << "�ι�° ���ڿ��� ok  " << endl;
			}
			else
			{
				cout << "�ι�° ���ڿ��� no " << endl;
			}

		} while (j_2 != count2);

		cout << "ù��° ���ڿ��� �ι�° ���ڿ��� �̾���̱� : " << input1 + input2 << endl;
		cout << "ù��° ���ڿ��� �ι�° ���ڿ��� �� : " << stoi(input1) + stoi(input2) << endl;

	}

	//--------�ǽ�15. string ����غ���

	if (!true)
	{
		string s = "Codingon";
		//----ù��° ���� �ҹ��ڷ� ����
		s[0] = tolower(s[0]);
		cout << "'Codingon'�� ù��° ���� �ҹ��ڷ� ���� : " << s << endl;
		cout << "'codingon'�� 'ding'�̶�� �κ� ���ڿ� ��ȯ : " << s.substr(2, 4) << endl;
		cout << "'coooooon'�� �ǵ��� ���� : " << s.replace(2, 4, "oooo") << endl;
		cout << "'con'�� �ǵ��� ���� : " << s.erase(2, 5) << endl;

	}

	//-----�迭

	if (!true) {
		int arr_init[] = { 0, }; //[]�ȿ� �ƹ��͵� �� ���� �� ������ �迭 ũ�� �������� �ʰڴٴ� �ǹ�!

		int arr_int[] = { 1, 2, 3, 4, 5, 6, };
		
		char arr_char[] = { 'a', 'b', 'c', };
		float arr_float[] = { 0.0, };

	}

	//--------�ǽ�16. �迭 ����غ���

	if (!true) {
		int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
		int prime_number[4] = {2, 3, 5, 7};

		for (int i = 0; i < 10; i++) {
			
			for (int j = 0; j < 4; j++) {
				if (arr[i] == prime_number[j]) {
					cout << "�Ҽ� : " << arr[i] << endl;
				}
			}
		}
		
	}

	//---------�ǽ�17. �迭�� �ܼ� �Է� �� ���

	if (true) {
		int arr_i[10] = { 1,2,3,4,5,6,7,9,10 };
		cout << "�迭 ũ�� : " << sizeof(arr_i) << endl;
		cout << "���� ũ�� : " << sizeof(arr_i[0]) << endl;
		int count = sizeof(arr_i) / sizeof(arr_i[0]);
		count = count - 1;
		for (int i = 0; i <= count; i++)
		{
			cout << "int�� �迭 " << i + 1 << "��°�� ��� �Է��� ��: ";
			cin >> arr_i[i];
		}
		for (int j = count; j >= 0; j--) {
			cout << "int�� �迭 " << j + 1 << "��°�� ��� �Էµ� ��: ";
			cout << arr_i[j] << endl;
		}
		cout << "��";
	}


	return 0;
}
#endif