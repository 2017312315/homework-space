#include<iostream>
using namespace std;
#define random(x)(rand()%x)

int main() {
	int number = (int)rand() % 100 + 1;
	int i;
	cout << "��һ����" << endl;
	cin >> i;
	while (i != number) {
		if (i > number)
			cout << "��ȷ�����ָ�С" << endl;
		else if (i < number)
			cout << "��ȷ�����ָ���" << endl;
		cout << "�ٲ�һ��" << endl;
		cin >> i;
	}
	cout << "�¶��ˣ����־���" << number << endl;
	system("pause");
	return 0;
}