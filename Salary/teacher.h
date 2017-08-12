#pragma once
using namespace std;
class Teacher: public Person//教师
{
public:
    Teacher()
    {    int s=1000;
	wage = s;
	butie1=0;
    }
    void display1();
    int wage;//基本工资
    int time;
	int butie1;
	int jintie1;
	
};//课时