#pragma once
using namespace std;

class Person {
public:
    void display()
    {
        cout << "������";
        cin >> name;
        cout << "���ţ�";
        cin >> num;
		while(num<=0)
		{
			cout<<"���������빤�Ŵ���0����:"<<endl;
			cin>>num;
		}
    }
    string name;//����
    int num;
};//����