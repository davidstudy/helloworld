#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string>
#include<iomanip>
#include "person.h"
#include "teacher.h"
#include "leader.h"
using namespace std;
int i;


void Teacher::display1()
{
    cout << "������";
    Person::display();
    cout << "�������ʦ�Ŀ�ʱ��Сʱ����  ";
    cin >> time;
	while(time<=0)
		{
		cout<<"�����������ʱ����0����:"<<endl;
		cin>>time;
		}
}


class Jianzhi: public Teacher, public Leader//��ʦ��ְ�쵼
{
public:
    Jianzhi( int b = 500) :
        Leader()
    {
        butie = b;
    }
    void display1()
    {
        cout << "�������ʦ��ְ�쵼��";
        Teacher::display();
        cout << "�������ʦ��ְ�쵼�Ŀ�ʱ(Сʱ)��";
        cin >> time;
		while(time<=0)
		{
		cout<<"�����������ʱ����0����:"<<endl;
		cin>>time;
		}
    }
    int butie;
};//����
Teacher t[100];

Leader x[100];
Jianzhi j[100];
void show()
{
    cout << "\t��������Ҫ¼��Ķ��� ��" << endl;
    cout << "\t\t 1����ʦ" << endl;
    cout << "\t\t 2���쵼" << endl;
    cout << "\t\t 3����ʦ��ְ�쵼" << endl;
    cout << "\t\t 4���˳�¼��" << endl;
    cout << "��ѡ��   ";
}
void jiaoshiluru()//��ʦ¼��
{
    ofstream outfile("��ʦ.txt", ios::app);
    if (!outfile) {
        cerr << "open error!" << endl;
        exit(0);
    }
    int b;
    cout << "��ѡ����Ҫ¼���ʦ�ĸ�����";
    cin >> b;
    for (i = 0; i < b; i++) {
        t[i].display1();
		cout<<"�Ƿ񱣴���Ϣ(y(Y)/n(N))"<<endl;
		char c;
		cin>>c;
		if(c=='Y'||c=='y')
		{
        outfile << t[i].num << "    " << t[i].name << "    " << t[i].wage
                << "    " << t[i].time << endl;
		}
    }
    outfile.close();
}

void Leaderluru()//�쵼¼��
{
    ofstream outfile("�쵼.txt", ios::app);
    if (!outfile) {
        cerr << "open error!" << endl;
        exit(0);
    }
    int b;
    cout << "��������Ҫ¼���쵼�ĸ�����";
    cin >> b;
    for (i = 0; i < b; i++) {
        x[i].display1();
        cout<<"�Ƿ񱣴���Ϣ(y(Y)/n(N))"<<endl;
		char c;
		cin>>c;
		if(c=='Y'||c=='y')
        {
			outfile << x[i].num << "    " << x[i].name << "     " << x[i].wage
                << "     " << x[i].butie << endl;
		}
    }
}

void jianzhiluru()//��ʦ��ְ�쵼¼��
{
    ofstream outfile("��ʦ��ְ�쵼.txt", ios::app);
    if (!outfile) {
        cerr << "open error!" << endl;
        exit(0);
    }
    int b;
    cout << "��������Ҫ��ʦ��ְ�쵼�ĸ���:";
    cin >> b;
    for (i = 0; i < b; i++) {
        j[i].display1();
		cout<<"�Ƿ񱣴���Ϣ(y(Y)/n(N))"<<endl;
		char c;
		cin>>c;
		if(c=='Y'||c=='y')
        {
			outfile << j[i].Teacher::num << "    " << j[i].Teacher::name << "   "
                << j[i].Leader::wage << "    " << j[i].butie << "    "
                << j[i].Teacher::time << endl;
		}
    }
}
void wenjianluru()//�ļ�¼��
{
    int c;
    for (i = 0;; i++) 
	{
        show();
        cin >> c;
        if (c == 4)
		{
            cout << "�˳�¼��ɹ���" << endl;
        system("cls");
            break;
        } else
            switch (c) 
		{
            case 1:
                jiaoshiluru();
                break;
            
            case 2:
                Leaderluru();
                break;
            
            case 3:
                jianzhiluru();
                break;
            default: 
				{
                cout << "��һ���������" << endl;
            }
                break;
            }
    }
}
void jiaoshishuchu()//��ʦ�����ʾ
{
    ifstream infile("��ʦ.txt", ios::in);
	
    int m;
	
    for (i = 0; i < 100; i++) 
	{	t[i].num=0;
        infile >> t[i].num >> t[i].name >> t[i].wage >> t[i].time;
		if (t[i].num == 0)
            break;
	   int jintie1;
       jintie1=t[i].time*30;
        m = t[i].wage + jintie1;
cout << "\t��ʦ: " <<setw(8)<< t[i].num <<setfill(' ')<<setw(10)<< t[i].name <<setfill(' ')<<setw(10)<<t[i].wage
			<<setfill(' ')<<setw(14)<<jintie1<<setfill(' ')<<setw(12)<<t[i].butie1<<setfill(' ')<<setw(10)<< m<< endl;    
	}
    infile.close();
}

void leadershuchu()//�쵼���
{
    ifstream infile("�쵼.txt", ios::in);
    int m;
    for (i = 0; i < 100; i++) 
	{    x[i].num =0;
		
        infile >> x[i].num >> x[i].name >> x[i].wage >> x[i].butie;
        if (x[i].num == 0)
            break;
        m = x[i].wage + x[i].butie;
        cout << "\t�쵼��" <<setfill(' ')<<setw(8)<<x[i].num <<setfill(' ')<<setw(10)<< x[i].name <<setfill(' ')<<setw(10)<<x[i].wage<<setfill(' ')<<setw(14)<<x[i].jintie<<setfill(' ')<<setw(12)<<x[i].butie<<setfill(' ')
			<<setw(10)<< m<< endl;
    }
    infile.close();
}

void jianzhishuchu()//��ʦ��ְ�쵼���
{
    ifstream infile("��ʦ��ְ�쵼.txt", ios::in);
    int m;
    for (i = 0; i < 100; i++) 
	{   j[i].Teacher::num=0;
		
        infile >> j[i].Teacher::num >> j[i].Teacher::name
                >> j[i].Leader::wage >> j[i].butie >> j[i].Teacher::time;
        if (j[i].Teacher::num == 0)
            break;
		int jintie1;
		jintie1=t[i].time*30;
        m = j[i].Leader::wage + j[i].butie +jintie1 ;
        cout << "\t��ʦ���쵼��" <<setfill(' ')<<setw(2)<< j[i].Teacher::num <<setfill(' ')<<setw(10)
			<< j[i].Teacher::name<<setfill(' ')<<setw(10)<<j[i].Leader::wage<<setfill(' ')<<setw(14)<<jintie1<<setfill(' ')<<setw(12)<<j[i].butie<< setfill(' ')<<setw(10) << m << endl;
    }
}
void shuchu()//�����ʾ
{
    cout <<"\t\t    ����     ����     ��������      ��ʱ����     ����     �ܹ���    " << endl;
    jiaoshishuchu();
    leadershuchu();
    jianzhishuchu();
}
void show3()
{
    cout << "\t��������Ҫ��ѯ�Ķ���" << endl;
    cout << "\t\t 1����ʦ��ѯ" << endl;
    cout << "\t\t 2���쵼��ѯ" << endl;
    cout << "\t\t 3����ʦ��ְ�쵼��ѯ" << endl;
    cout << "\t\t 4���˳���ѯ" << endl;
    cout << " ��ѡ��һ��������";
    
}
void jiaoshichaxun()
{
    ifstream infile("��ʦ.txt", ios::in);
    string nam;
    int num;
    int m, n,x;
    cout<<"\t\t1.����ʦ����������\n\t\t2.����ʦ�Ĺ��Ų���";
    cout<<"\n\t\t ��ѡ��";
    cin>>x;
 switch(x)
 {
 case 1:{cout<<"\t\t������Ҫ���ҵĽ�ʦ��������";
     cin>>nam;
     for (i = 0, n = 0; i < 100; i++) {
        infile >> t[i].num >> t[i].name >> t[i].wage >> t[i].time;
        if (t[i].num == 0)
            break;
        if (t[i].name==nam) {
            n++;
            m = t[i].wage + (t[i].time - 24) * 30;
			cout<<"\t\t����        ����        ����"<<endl;
            cout << "\t��ʦ��  " <<"  "<<t[i].num <<  "         " <<t[i].name << "            " <<m
                    << endl;
        }
    }
    if (n ==0)
	 cout << "û����Ҫ��ѯ�Ľ�ʦ��" << endl;
    infile.close();
	}break;

case 2:
  {
   cout<<"\t\t������Ҫ���ҵĽ�ʦ�Ĺ��ţ�";
   cin>>num; 
for (i = 0, n = 0; i < 100; i++) {
        infile >> t[i].num >> t[i].name >> t[i].wage >> t[i].time;
        if (t[i].num == 0)
            break;
        if (t[i].num==num) {
            n++;
            m = t[i].wage + (t[i].time - 24) * 30;
			cout<<"\t\t����        ����        ����"<<endl;
            cout << "\t��ʦ��  " <<"  "<<t[i].num <<  "         " <<t[i].name << "            " <<m
                    << endl;
        }
    }
    if (n ==0)
	 cout << "û����Ҫ��ѯ�Ľ�ʦ��" << endl;
    infile.close();
	}break;
default:{cout<<"����ѡ�����!"<<endl;}break;

 }

}
		

void leaderxhaxun()//�쵼��ѯ
{
    ifstream infile("�쵼.txt", ios::in);
    string nam;
    int num;
    int m, n,y;
    cout<<"\t\t1.���쵼����������\n\t\t2.���쵼�Ĺ��Ų���";
    cout<<"\n\t\t ��ѡ��";
    cin>>y;
 switch(y)
 {
 case 1:{cout<<"\t\t������Ҫ���ҵ��쵼��������";
     cin>>nam;
     for (i = 0, n = 0; i < 100; i++) {
       infile >> x[i].num >> x[i].name >> x[i].wage >> x[i].butie;
        if (x[i].num == 0)
            break;
        if (x[i].name==nam) {
            n++;
            m = x[i].wage + x[i].butie;
	cout<<"\t\t����        ����        ����"<<endl;
            cout << "\t�쵼��" <<"    "<< x[i].num << "          " << x[i].name << "          " << m
                    << endl;

        }
    }
    if (n ==0)
	 cout << "û����Ҫ��ѯ���쵼��" << endl;
    infile.close();
	}break;

case 2:
  {
   cout<<"\t\t������Ҫ���ҵ��쵼�Ĺ��ţ�";
   cin>>num; 
for (i = 0, n = 0; i < 100; i++) {
        infile >> x[i].num >> x[i].name >> x[i].wage >> x[i].butie;
        if (x[i].num == 0)
            break;
        if (x[i].num==num) {
            n++;
            m = x[i].wage + x[i].butie;
	cout<<"\t\t����        ����        ����"<<endl;
            cout << "\t�쵼��" <<"    "<< x[i].num << "          " << x[i].name << "          " << m
                    << endl;

        }
    }
    if (n ==0)
	 cout << "û����Ҫ��ѯ���쵼��" << endl;
    infile.close();
	}break;
default:{cout<<"����ѡ�����!"<<endl;}break;

 }

}
void jianzhichaxun()//��ʦ��ְ�쵼��ѯ
{
    ifstream infile("��ʦ��ְ�쵼.txt", ios::in);
     string nam;
     int num;
     int m, n,x;
cout<<"\t\t1.����ʦ��ְ�쵼����������\n\t\t2.����ʦ��ְ�쵼�Ĺ��Ų���";
cout<<"\n\t\t ��ѡ��";
 cin>>x;
 switch(x)
 {
 case 1:{cout<<"\t\t������Ҫ���ҵĽ�ʦ��ְ�쵼��������";
cin>>nam;
     for (i = 0, n = 0; i < 100; i++) {
        infile >> j[i].Teacher::num >> j[i].Teacher::name
                >> j[i].Leader::wage >> j[i].butie >> j[i].Teacher::time;
        if (j[i].Teacher::num == 0)
            break;
        if (j[i].Teacher::name==nam) {
            n++;
            m = j[i].Leader::wage + j[i].butie + j[i].Teacher::time * 30;
	cout<<"\t\t����        ����        ����"<<endl;

            cout << "��ʦ��ְ�쵼��" << "    "<<j[i].Teacher::num << "          "
                    << j[i].Teacher::name << "         " << m << endl;


        }
    }
    if (n ==0)
	 cout << "û����Ҫ��ѯ�Ľ�ʦ��ְ�쵼��" << endl;
    infile.close();
	}break;

case 2:
  {
   cout<<"\t\t������Ҫ���ҵĽ�ʦ��ְ�쵼�Ĺ��ţ�";
cin>>num; 
for (i = 0, n = 0; i < 100; i++) {
        infile >> j[i].Teacher::num >> j[i].Teacher::name
                >> j[i].Leader::wage >> j[i].butie >> j[i].Teacher::time;
        if (j[i].Teacher::num == 0)
            break;
        if (j[i].Teacher::num==num) {
            n++;
            m = j[i].Leader::wage + j[i].butie + j[i].Teacher::time * 30;
	cout<<"\t\t����        ����        ����"<<endl;

            cout << "��ʦ��ְ�쵼��" << "    "<<j[i].Teacher::num << "          "
                    << j[i].Teacher::name << "         " << m << endl;


        }
    }
    if (n ==0)
	 cout << "û����Ҫ��ѯ�Ľ�ʦ��ְ�쵼��" << endl;
    infile.close();
	}break;
default:{cout<<"����ѡ�����!"<<endl;}break;

 }

}
void wenjianchaxun()//�ļ���ѯ
{   
    int c;
    for (i = 0;; i++) {
        show3();
        cin >> c;

        if (c == 4) {
            cout << "�˳���ѯ�ɹ���" << endl;
            system("cls");
            break; ;
        } else 

     
           switch (c) {
            case 1:
                jiaoshichaxun();
                break;
          
            case 2:
                leaderxhaxun();
                break;
          
            case 3:
                jianzhichaxun();
                break;
            default: {
                cout << "��һ���������" << endl;
            }
                break;
            }
    }
}



void show5()
{
    cout << "\t��������Ҫ�޸ĵĶ���" << endl;
    cout << "\t\t 1����ʦ�޸�" << endl;
    cout << "\t\t 2����ʦ��ְ�쵼�޸�" << endl;
    cout << "\t\t 3���˳��޸�" << endl;
    cout << " ��ѡ��һ��������";
}
void jiaoshixiugai()//��ʦ�޸�
{
    ifstream infile("��ʦ.txt", ios::in);
    string nam;
    int n, n1, m1 = 0;
    cout << "��������Ҫ�޸Ľ�ʦ�����֣� ";
    cin >> nam;
    cout << "��������Ҫ�޸ĵĿ�ʱ��";
    cin >> n;
    for (i = 0; i < 100; i++) {
        infile >> t[i].num >> t[i].name >> t[i].wage >> t[i].time;
        if (t[i].num == 0)
            break;
        m1++;
        if (t[i].name ==nam) {
            n1 = t[i].time;
            t[i].time = n;
            n = n1;
        }
    }
    infile.close();
    ofstream outfile("��ʦ.txt", ios::out);
    for (i = 0; i < m1; i++) {
        outfile << t[i].num << "    " << t[i].name << "    " << t[i].wage
                << "    " << t[i].time << endl;
    }
    outfile.close();
}

void janzhi2xiugai()//��ʦ��ְ�쵼�޸�
{
    ifstream infile("��ʦ��ְ�쵼.txt", ios::in);
    int n, n1, n2;
    string nam;
    cout << "��������Ҫ�޸ĵĽ�ʦ��ְ�쵼�����֣� ";
    cin >> nam;
    cout << "��������Ҫ�޸ĵĽ�ʦ��ְ�쵼�Ŀ�ʱ��";
    cin >> n2;
    for (i = 0, n = 0; i < 100; i++) {
        infile >> j[i].Teacher::num >> j[i].Teacher::name
                >> j[i].Leader::wage >> j[i].butie >> j[i].Teacher::time;
        if (j[i].Teacher::num == 0)
            break;
        n++;
        if (j[i].Teacher::name==nam) {
            n1 = j[i].Teacher::time;
            j[i].Teacher::time = n2;
            n2 = n1;
        }
    }
    infile.close();
    ofstream outfile("��ʦ��ְ�쵼.txt", ios::out);
    for (i = 0; i < n; i++) {
        outfile << j[i].Teacher::num << "    " << j[i].Teacher::name << "   "
                << j[i].Leader::wage << "    " << j[i].butie << "    "
                << j[i].Teacher::time << endl;
    }
    outfile.close();
}
void xiugai()//�޸�
{
    int c;
    for (i = 0;; i++) { 
        show5();
        cin >> c;
        if (c == 3) {
            cout << "\t\t\t�˳��޸ĳɹ���" << endl;
    system("cls");
            break;
        } else
    
            switch (c) {
            case 1:
                jiaoshixiugai();
                break;
            
            case 2:
                janzhi2xiugai();
                break;
            default: {
                cout << "��һ���������" << endl;
            }
                break;
            }
    }
}
void show6()
{
    cout << "\t��ѡ�����²�����" << endl;
    cout << "\t1����ʦɾ��" << endl;
    cout << "\t2���쵼ɾ��" << endl;
    cout << "\t3����ʦ��ְ�쵼ɾ��" << endl;
    cout << "\t4���˳�ɾ��" << endl;
    cout << "��ѡ�����һ��������  ";
}
void jiaoshidel()//��ʦɾ��
{
    ifstream infile("��ʦ.txt", ios::in);
    string nam;
	int num;
    int n,x;
    cout<<"\t\t1.����ʦ������ɾ��\n\t\t2.����ʦ�Ĺ���ɾ��";
    cout<<"\n\t\t ��ѡ��";
    cin>>x;
 switch(x)
 {
 case 1:{cout<<"\t\t������Ҫɾ���Ľ�ʦ��������";
cin>>nam;
     for (i = 0, n = 0; i < 100; i++) {
        infile >> t[i].num >> t[i].name >> t[i].wage >> t[i].time;
        if (t[i].num == 0)
            break;
        if (t[i].name==nam) {
        n++;
		t[i].num=0;break;
				
        }
		
	 }
    if (n ==0)
	cout << "û����Ҫɾ���Ľ�ʦ��" << endl;
	else
		cout<<"ɾ���ɹ�!"<<endl;
    infile.close();
	}break;

case 2:
  {
   cout<<"\t\t������Ҫɾ���Ľ�ʦ�Ĺ��ţ�";
cin>>num; 
for (i = 0, n = 0; i < 100; i++) {
        infile >> t[i].num >> t[i].name >> t[i].wage >> t[i].time;
        if (t[i].num == 0)
            break;
        if (t[i].num==num) {
            n++;
            t[i].num=0;break;
				
        }
        }
    
    if (n ==0)
	 cout << "û����Ҫɾ���Ľ�ʦ��" << endl;
	else
		cout<<"ɾ���ɹ�"<<endl;
    infile.close();
	}break;
default:{cout<<"����ѡ�����!"<<endl;}break;

 }
    infile.close();
    ofstream outfile("��ʦ.txt", ios::out);
    for (i = 0; i < 100; i++) {
        if (t[i].num != 0)
            outfile << t[i].num << "    " << t[i].name << "    " << t[i].wage
                    << "    " << t[i].time << endl;
    }
    outfile.close();
}

void leaderdel()//�쵼ɾ��
{
    ifstream infile("�쵼.txt", ios::in);
   string nam;
	int num;
    int n,y;
    cout<<"\t\t1.���쵼������ɾ��\n\t\t2.���쵼�Ĺ���ɾ��";
    cout<<"\n\t\t ��ѡ��";
    cin>>y;
 switch(y)
 {
 case 1:{cout<<"\t\t������Ҫɾ�����쵼��������";
cin>>nam;
     for (i = 0, n = 0; i < 100; i++) {
       infile >> x[i].num >> x[i].name >> x[i].wage >> x[i].butie;
        if (x[i].num == 0)
            break;
        if (x[i].name==nam) {
            n++;
      x[i].num=0;break;
				
		}
	 }
    if (n ==0)
	 cout << "û����Ҫɾ�����쵼��" << endl;
	else
    cout<<"ɾ���ɹ�"<<endl;
    infile.close();
	}break;

case 2:
  {
   cout<<"\t\t������Ҫɾ�����쵼�Ĺ��ţ�";
cin>>num; 
for (i = 0, n = 0; i < 100; i++) {
        infile >> x[i].num >> x[i].name >> x[i].wage >> x[i].butie;
        if (x[i].num == 0)
            break;
        if (x[i].num==num) {
            n++;
            x[i].num=0;break;
				
        }
        }
    
    if (n ==0)
	 cout << "û����Ҫɾ�����쵼��" << endl;
	else
		cout<<"ɾ���ɹ�"<<endl;
    infile.close();
	}break;
default:{cout<<"����ѡ�����!"<<endl;}break;

 }
    infile.close();
    ofstream outfile("�쵼.txt", ios::out);
    for (i = 0; i < 100; i++) {
        if (x[i].num != 0)
            outfile << x[i].num << "    " << x[i].name << "    " << x[i].wage
                    << "     " << x[i].butie << endl;
    }
    outfile.close();
}

void jianzhidel()       //��ʦ��ְ�쵼ɾ��
{
    ifstream infile("��ʦ��ְ�쵼.txt", ios::in);
    string nam;
	int num;
    int n,y;
    cout<<"\t\t1.����ʦ��ְ�쵼������ɾ��\n\t\t2.����ʦ��ְ�쵼�Ĺ���ɾ��";
    cout<<"\n\t\t ��ѡ��";
    cin>>y;
 switch(y)
 {
 case 1:{cout<<"\t\t������Ҫɾ���Ľ�ʦ��ְ�쵼��������";
cin>>nam;
     for (i = 0, n = 0; i < 100; i++) {
        infile >> j[i].Teacher::num >> j[i].Teacher::name
                >> j[i].Leader::wage >> j[i].butie >> j[i].Teacher::time;

        if (j[i].Teacher::num == 0)
            break;
        if (j[i].Teacher::name==nam) {
            n++;
        j[i].Teacher::num=0;break;
			
		}
	 }
    if (n ==0)
	 cout << "û����Ҫɾ���Ľ�ʦ��ְ�쵼��" << endl;
	else
		cout<<"ɾ���ɹ�"<<endl;
    infile.close();
	}break;

case 2:
  {
   cout<<"\t\t������Ҫɾ���Ľ�ʦ��ְ�쵼�Ĺ��ţ�";
cin>>num; 
for (i = 0, n = 0; i < 100; i++) {
        infile >> j[i].Teacher::num >> j[i].Teacher::name
                >> j[i].Leader::wage >> j[i].butie >> j[i].Teacher::time;
        if (j[i].Teacher::num == 0)
            break;
        if (j[i].Teacher::num==num) {
            n++;
           j[i].Teacher::num=0;
					break;
				}
        }
    
    if (n ==0)
	 cout << "û����Ҫɾ���Ľ�ʦ��ְ�쵼��" << endl;
	else
		cout<<"ɾ���ɹ�"<<endl;
    infile.close();
	}break;
default:{cout<<"����ѡ�����!"<<endl;}break;

 }
    infile.close();
    ofstream outfile("��ʦ��ְ�쵼.txt", ios::out);
    for (i = 0; i < 100; i++) {
        if (j[i].Teacher::num != 0)
            outfile << j[i].Teacher::num << "    " << j[i].Teacher::name
                    << "   " << j[i].Leader::wage << "    " << j[i].butie
                    << "    " << j[i].Teacher::time << endl;
    }
    outfile.close();

}
void del()//ɾ��
{
    int c;
    for (i = 0;; i++) {
        show6();
        cin >> c;
        if (c == 4) {
        cout << "�˳�ɾ���ɹ���" << endl;
        system("cls");

            break;
   
        } else
            switch (c) {
            case 1:
                jiaoshidel();
                break;
            
            case 2:
                leaderdel();
                break;
            
            case 3:
                jianzhidel();
                break;
            default: {
                cout << "��һ���������" << endl;
            }
                break;
            }
    }
}


void show_sort()
{
    cout << "��ѡ�����²�����" << endl;
    cout << "\t\t 1����ʦ����" << endl;
    cout << "\t\t 2����ʦ��ְ�쵼����" << endl;
    cout << "\t\t 3���˳�����" << endl;
    cout << "��ѡ�����һ��������  ";
}
void jiaoshi_sort()      //��ʦ����
{
    ifstream infile("��ʦ.txt", ios::in);
    int m[100];
    for (i = 0; i < 100; i++) {
        infile >> t[i].num >> t[i].name >> t[i].wage >> t[i].time;
        if (t[i].num == 0)
            break;
        m[i] = t[i].wage + t[i].time  * 30;
    }
    infile.close();
    int count = i;
    Teacher teacher;
    int tmp;
    for (int x = 0; x < count - 1; ++x)
        for (int y = x + 1; y < count; ++y) {
            if (m[x] < m[y]) {
                teacher = t[x];
                t[x] = t[y];
                t[y] = teacher;

                tmp = m[x];
                m[x] = m[y];
                m[y] = tmp;
            }
        }
       cout <<"\t\t ����     ����     �ܹ���    " << endl;
    for (i = 0; i < count; ++i)
     cout << "\t��ʦ: " <<setfill(' ')<<setw(6)<< t[i].num <<setfill(' ')<<setw(10)<< t[i].name <<setfill(' ')<<setw(10)<< m[i]<< endl;    


}



void jianzhi_sort()     //��ʦ��ְ�쵼����
{
    ifstream infile("��ʦ��ְ�쵼.txt", ios::in);
    int m[100];
    for (i = 0; i < 100; i++) {
        infile >> j[i].Teacher::num >> j[i].Teacher::name
                >> j[i].Leader::wage >> j[i].butie >> j[i].Teacher::time;
        if (j[i].Teacher::num == 0)
            break;
        m[i] = j[i].Leader::wage + j[i].butie + j[i].Teacher::time * 30;
    }
    infile.close();
    int count = i;
    Jianzhi jz2;
    int tmp;
    for (int x = 0; x < count - 1; ++x)
        for (int y = x + 1; y < count; ++y) {
            if (m[x] < m[y]) {
                jz2 = j[x];
                j[x] = j[y];
                j[y] = jz2;

                tmp = m[x];
                m[x] = m[y];
                m[y] = tmp;
            }
        }
      cout <<"\t\t\t����       ����      �ܹ���    " << endl;
    for (i = 0; i < count; ++i)
        cout << "\t��ʦ��ְ�쵼��" <<setfill(' ')<<setw(6)<< j[i].Teacher::num <<setfill(' ')<<setw(10)
			<< j[i].Teacher::name<<setfill(' ')<<setw(11) << m[i] << endl;

}


void sort()
{
    int c;
    for (i = 0;; i++) {
        show_sort();
        cin >> c;
        if (c == 3) {
            cout << "�˳�����ɹ���" << endl;
         system("cls");
            break;
        } else
     
            switch (c) {
            case 1:
                jiaoshi_sort();
                break;
            
            case 2:
                jianzhi_sort();
                break;
            default: {
                cout << "��һ���������" << endl;
            }
                break;
            }
    }
}
void show7()
{
    cout << " \t\t\t\t ��У���ʹ���ϵͳ    " << endl;
    cout << " \t\t\t\t1��ְ����Ϣ���" << endl;
    cout << " \t\t\t\t2��ְ����Ϣ�����ʾ" << endl;
    cout << " \t\t\t\t3��ְ����Ϣ�޸�" << endl;
    cout << " \t\t\t\t4��ְ����Ϣɾ��" << endl;
    cout << " \t\t\t\t5��ְ����Ϣ��ѯ" << endl;
    cout << " \t\t\t\t6��ְ�������ɸߵ�������" << endl;
    cout << " \t\t\t\t7���˳�" << endl;
    cout << "��ѡ�����һ��������  ";
}
int main()
{
    int c;
    for (i = 0;; i++) {
        show7();
        cin >> c;
        if (c == 7) {
            cout << "�˳��ɹ���" << endl;
            break;
        } else
            switch (c) {
            case 1:
                wenjianluru();
                break;
            case 2:
                shuchu();
                break;
            
            case 3:
                xiugai();
                break;
            case 4:
                del();
                break;
            case 5:
                wenjianchaxun();
                break;
            case 6:
                sort();
                break;
            default: {
                cout << "��һ���������" << endl;
            }
                break;
            }
    }
    return 0;
}
