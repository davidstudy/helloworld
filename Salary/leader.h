#pragma once
using namespace std;

class Leader: public Person//领导
{
public:
    Leader()
    {   int s=2500;
	int b=600;
	wage = s;
	butie = b;
	jintie=0;
    }
    void display1()
    {
        cout << "请输入领导的";
        Person::display();
    }
    int wage;//基本工资
    int butie;
	int jintie;
};//补贴