#pragma once
using namespace std;

class Person {
public:
    void display()
    {
        cout << "姓名：";
        cin >> name;
        cout << "工号：";
        cin >> num;
		while(num<=0)
		{
			cout<<"请重新输入工号大于0的数:"<<endl;
			cin>>num;
		}
    }
    string name;//名字
    int num;
};//工号