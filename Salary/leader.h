#pragma once
using namespace std;

class Leader: public Person//�쵼
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
        cout << "�������쵼��";
        Person::display();
    }
    int wage;//��������
    int butie;
	int jintie;
};//����