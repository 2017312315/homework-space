#include<iostream>
using namespace std;
int main() {
	int grade;
	cout << "�㿼�Կ��˶��ٷ֣���0~100��" << endl;
	cin >> grade;
	if (grade >= 90 && grade <= 100)
		cout << "��ĳɼ��ȼ�Ϊ�š�";
	else if (grade >= 80 && grade < 90)
		cout << "��ĳɼ��ȼ�Ϊ����";
	else if (grade >= 70 && grade < 80)
		cout << "��ĳɼ��ȼ�Ϊ�С�";
	else if (grade >= 0 && grade < 60)
		cout << "��ĳɼ��ȼ�Ϊ�";
	else
		cout << "��ĳɼ���������";
	system("pause");
	return 0;
}