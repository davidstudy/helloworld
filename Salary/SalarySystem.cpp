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
    cout << "请输入";
    Person::display();
    cout << "请输入教师的课时（小时）：  ";
    cin >> time;
	while(time<=0)
		{
		cout<<"请重新输入课时大于0的数:"<<endl;
		cin>>time;
		}
}


class Jianzhi: public Teacher, public Leader//教师兼职领导
{
public:
    Jianzhi( int b = 500) :
        Leader()
    {
        butie = b;
    }
    void display1()
    {
        cout << "请输入教师兼职领导的";
        Teacher::display();
        cout << "请输入教师兼职领导的课时(小时)：";
        cin >> time;
		while(time<=0)
		{
		cout<<"请重新输入课时大于0的数:"<<endl;
		cin>>time;
		}
    }
    int butie;
};//补贴
Teacher t[100];

Leader x[100];
Jianzhi j[100];
void show()
{
    cout << "\t请输入你要录入的对象 ：" << endl;
    cout << "\t\t 1：教师" << endl;
    cout << "\t\t 2：领导" << endl;
    cout << "\t\t 3：教师兼职领导" << endl;
    cout << "\t\t 4：退出录入" << endl;
    cout << "请选择：   ";
}
void jiaoshiluru()//教师录入
{
    ofstream outfile("教师.txt", ios::app);
    if (!outfile) {
        cerr << "open error!" << endl;
        exit(0);
    }
    int b;
    cout << "请选择你要录入教师的个数：";
    cin >> b;
    for (i = 0; i < b; i++) {
        t[i].display1();
		cout<<"是否保存信息(y(Y)/n(N))"<<endl;
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

void Leaderluru()//领导录入
{
    ofstream outfile("领导.txt", ios::app);
    if (!outfile) {
        cerr << "open error!" << endl;
        exit(0);
    }
    int b;
    cout << "请输入你要录入领导的个数：";
    cin >> b;
    for (i = 0; i < b; i++) {
        x[i].display1();
        cout<<"是否保存信息(y(Y)/n(N))"<<endl;
		char c;
		cin>>c;
		if(c=='Y'||c=='y')
        {
			outfile << x[i].num << "    " << x[i].name << "     " << x[i].wage
                << "     " << x[i].butie << endl;
		}
    }
}

void jianzhiluru()//教师兼职领导录入
{
    ofstream outfile("教师兼职领导.txt", ios::app);
    if (!outfile) {
        cerr << "open error!" << endl;
        exit(0);
    }
    int b;
    cout << "请输入你要教师兼职领导的个数:";
    cin >> b;
    for (i = 0; i < b; i++) {
        j[i].display1();
		cout<<"是否保存信息(y(Y)/n(N))"<<endl;
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
void wenjianluru()//文件录入
{
    int c;
    for (i = 0;; i++) 
	{
        show();
        cin >> c;
        if (c == 4)
		{
            cout << "退出录入成功。" << endl;
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
                cout << "上一次输入错误。" << endl;
            }
                break;
            }
    }
}
void jiaoshishuchu()//教师输出显示
{
    ifstream infile("教师.txt", ios::in);
	
    int m;
	
    for (i = 0; i < 100; i++) 
	{	t[i].num=0;
        infile >> t[i].num >> t[i].name >> t[i].wage >> t[i].time;
		if (t[i].num == 0)
            break;
	   int jintie1;
       jintie1=t[i].time*30;
        m = t[i].wage + jintie1;
cout << "\t教师: " <<setw(8)<< t[i].num <<setfill(' ')<<setw(10)<< t[i].name <<setfill(' ')<<setw(10)<<t[i].wage
			<<setfill(' ')<<setw(14)<<jintie1<<setfill(' ')<<setw(12)<<t[i].butie1<<setfill(' ')<<setw(10)<< m<< endl;    
	}
    infile.close();
}

void leadershuchu()//领导输出
{
    ifstream infile("领导.txt", ios::in);
    int m;
    for (i = 0; i < 100; i++) 
	{    x[i].num =0;
		
        infile >> x[i].num >> x[i].name >> x[i].wage >> x[i].butie;
        if (x[i].num == 0)
            break;
        m = x[i].wage + x[i].butie;
        cout << "\t领导：" <<setfill(' ')<<setw(8)<<x[i].num <<setfill(' ')<<setw(10)<< x[i].name <<setfill(' ')<<setw(10)<<x[i].wage<<setfill(' ')<<setw(14)<<x[i].jintie<<setfill(' ')<<setw(12)<<x[i].butie<<setfill(' ')
			<<setw(10)<< m<< endl;
    }
    infile.close();
}

void jianzhishuchu()//教师兼职领导输出
{
    ifstream infile("教师兼职领导.txt", ios::in);
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
        cout << "\t教师兼领导：" <<setfill(' ')<<setw(2)<< j[i].Teacher::num <<setfill(' ')<<setw(10)
			<< j[i].Teacher::name<<setfill(' ')<<setw(10)<<j[i].Leader::wage<<setfill(' ')<<setw(14)<<jintie1<<setfill(' ')<<setw(12)<<j[i].butie<< setfill(' ')<<setw(10) << m << endl;
    }
}
void shuchu()//输出显示
{
    cout <<"\t\t    工号     名字     基本工资      课时津贴     补贴     总工资    " << endl;
    jiaoshishuchu();
    leadershuchu();
    jianzhishuchu();
}
void show3()
{
    cout << "\t请输入你要查询的对象：" << endl;
    cout << "\t\t 1：教师查询" << endl;
    cout << "\t\t 2：领导查询" << endl;
    cout << "\t\t 3：教师兼职领导查询" << endl;
    cout << "\t\t 4：退出查询" << endl;
    cout << " 请选择一个操作：";
    
}
void jiaoshichaxun()
{
    ifstream infile("教师.txt", ios::in);
    string nam;
    int num;
    int m, n,x;
    cout<<"\t\t1.按教师的姓名查找\n\t\t2.按教师的工号查找";
    cout<<"\n\t\t 请选择";
    cin>>x;
 switch(x)
 {
 case 1:{cout<<"\t\t请输入要查找的教师的姓名：";
     cin>>nam;
     for (i = 0, n = 0; i < 100; i++) {
        infile >> t[i].num >> t[i].name >> t[i].wage >> t[i].time;
        if (t[i].num == 0)
            break;
        if (t[i].name==nam) {
            n++;
            m = t[i].wage + (t[i].time - 24) * 30;
			cout<<"\t\t工号        姓名        工资"<<endl;
            cout << "\t教师：  " <<"  "<<t[i].num <<  "         " <<t[i].name << "            " <<m
                    << endl;
        }
    }
    if (n ==0)
	 cout << "没有你要查询的教师。" << endl;
    infile.close();
	}break;

case 2:
  {
   cout<<"\t\t请输入要查找的教师的工号：";
   cin>>num; 
for (i = 0, n = 0; i < 100; i++) {
        infile >> t[i].num >> t[i].name >> t[i].wage >> t[i].time;
        if (t[i].num == 0)
            break;
        if (t[i].num==num) {
            n++;
            m = t[i].wage + (t[i].time - 24) * 30;
			cout<<"\t\t工号        姓名        工资"<<endl;
            cout << "\t教师：  " <<"  "<<t[i].num <<  "         " <<t[i].name << "            " <<m
                    << endl;
        }
    }
    if (n ==0)
	 cout << "没有你要查询的教师。" << endl;
    infile.close();
	}break;
default:{cout<<"操作选择错误!"<<endl;}break;

 }

}
		

void leaderxhaxun()//领导查询
{
    ifstream infile("领导.txt", ios::in);
    string nam;
    int num;
    int m, n,y;
    cout<<"\t\t1.按领导的姓名查找\n\t\t2.按领导的工号查找";
    cout<<"\n\t\t 请选择";
    cin>>y;
 switch(y)
 {
 case 1:{cout<<"\t\t请输入要查找的领导的姓名：";
     cin>>nam;
     for (i = 0, n = 0; i < 100; i++) {
       infile >> x[i].num >> x[i].name >> x[i].wage >> x[i].butie;
        if (x[i].num == 0)
            break;
        if (x[i].name==nam) {
            n++;
            m = x[i].wage + x[i].butie;
	cout<<"\t\t工号        姓名        工资"<<endl;
            cout << "\t领导：" <<"    "<< x[i].num << "          " << x[i].name << "          " << m
                    << endl;

        }
    }
    if (n ==0)
	 cout << "没有你要查询的领导。" << endl;
    infile.close();
	}break;

case 2:
  {
   cout<<"\t\t请输入要查找的领导的工号：";
   cin>>num; 
for (i = 0, n = 0; i < 100; i++) {
        infile >> x[i].num >> x[i].name >> x[i].wage >> x[i].butie;
        if (x[i].num == 0)
            break;
        if (x[i].num==num) {
            n++;
            m = x[i].wage + x[i].butie;
	cout<<"\t\t工号        姓名        工资"<<endl;
            cout << "\t领导：" <<"    "<< x[i].num << "          " << x[i].name << "          " << m
                    << endl;

        }
    }
    if (n ==0)
	 cout << "没有你要查询的领导。" << endl;
    infile.close();
	}break;
default:{cout<<"操作选择错误!"<<endl;}break;

 }

}
void jianzhichaxun()//教师兼职领导查询
{
    ifstream infile("教师兼职领导.txt", ios::in);
     string nam;
     int num;
     int m, n,x;
cout<<"\t\t1.按教师兼职领导的姓名查找\n\t\t2.按教师兼职领导的工号查找";
cout<<"\n\t\t 请选择";
 cin>>x;
 switch(x)
 {
 case 1:{cout<<"\t\t请输入要查找的教师兼职领导的姓名：";
cin>>nam;
     for (i = 0, n = 0; i < 100; i++) {
        infile >> j[i].Teacher::num >> j[i].Teacher::name
                >> j[i].Leader::wage >> j[i].butie >> j[i].Teacher::time;
        if (j[i].Teacher::num == 0)
            break;
        if (j[i].Teacher::name==nam) {
            n++;
            m = j[i].Leader::wage + j[i].butie + j[i].Teacher::time * 30;
	cout<<"\t\t工号        姓名        工资"<<endl;

            cout << "教师兼职领导：" << "    "<<j[i].Teacher::num << "          "
                    << j[i].Teacher::name << "         " << m << endl;


        }
    }
    if (n ==0)
	 cout << "没有你要查询的教师兼职领导。" << endl;
    infile.close();
	}break;

case 2:
  {
   cout<<"\t\t请输入要查找的教师兼职领导的工号：";
cin>>num; 
for (i = 0, n = 0; i < 100; i++) {
        infile >> j[i].Teacher::num >> j[i].Teacher::name
                >> j[i].Leader::wage >> j[i].butie >> j[i].Teacher::time;
        if (j[i].Teacher::num == 0)
            break;
        if (j[i].Teacher::num==num) {
            n++;
            m = j[i].Leader::wage + j[i].butie + j[i].Teacher::time * 30;
	cout<<"\t\t工号        姓名        工资"<<endl;

            cout << "教师兼职领导：" << "    "<<j[i].Teacher::num << "          "
                    << j[i].Teacher::name << "         " << m << endl;


        }
    }
    if (n ==0)
	 cout << "没有你要查询的教师兼职领导。" << endl;
    infile.close();
	}break;
default:{cout<<"操作选择错误!"<<endl;}break;

 }

}
void wenjianchaxun()//文件查询
{   
    int c;
    for (i = 0;; i++) {
        show3();
        cin >> c;

        if (c == 4) {
            cout << "退出查询成功。" << endl;
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
                cout << "上一次输入错误。" << endl;
            }
                break;
            }
    }
}



void show5()
{
    cout << "\t请输入你要修改的对象：" << endl;
    cout << "\t\t 1：教师修改" << endl;
    cout << "\t\t 2：教师兼职领导修改" << endl;
    cout << "\t\t 3：退出修改" << endl;
    cout << " 请选择一个操作：";
}
void jiaoshixiugai()//教师修改
{
    ifstream infile("教师.txt", ios::in);
    string nam;
    int n, n1, m1 = 0;
    cout << "请输入你要修改教师的名字： ";
    cin >> nam;
    cout << "请输入你要修改的课时：";
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
    ofstream outfile("教师.txt", ios::out);
    for (i = 0; i < m1; i++) {
        outfile << t[i].num << "    " << t[i].name << "    " << t[i].wage
                << "    " << t[i].time << endl;
    }
    outfile.close();
}

void janzhi2xiugai()//教师兼职领导修改
{
    ifstream infile("教师兼职领导.txt", ios::in);
    int n, n1, n2;
    string nam;
    cout << "请输入你要修改的教师兼职领导的名字： ";
    cin >> nam;
    cout << "请输入你要修改的教师兼职领导的课时：";
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
    ofstream outfile("教师兼职领导.txt", ios::out);
    for (i = 0; i < n; i++) {
        outfile << j[i].Teacher::num << "    " << j[i].Teacher::name << "   "
                << j[i].Leader::wage << "    " << j[i].butie << "    "
                << j[i].Teacher::time << endl;
    }
    outfile.close();
}
void xiugai()//修改
{
    int c;
    for (i = 0;; i++) { 
        show5();
        cin >> c;
        if (c == 3) {
            cout << "\t\t\t退出修改成功。" << endl;
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
                cout << "上一次输入错误。" << endl;
            }
                break;
            }
    }
}
void show6()
{
    cout << "\t请选择如下操作：" << endl;
    cout << "\t1：教师删除" << endl;
    cout << "\t2：领导删除" << endl;
    cout << "\t3：教师兼职领导删除" << endl;
    cout << "\t4：退出删除" << endl;
    cout << "请选择你的一个操作：  ";
}
void jiaoshidel()//教师删除
{
    ifstream infile("教师.txt", ios::in);
    string nam;
	int num;
    int n,x;
    cout<<"\t\t1.按教师的姓名删除\n\t\t2.按教师的工号删除";
    cout<<"\n\t\t 请选择";
    cin>>x;
 switch(x)
 {
 case 1:{cout<<"\t\t请输入要删除的教师的姓名：";
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
	cout << "没有你要删除的教师。" << endl;
	else
		cout<<"删除成功!"<<endl;
    infile.close();
	}break;

case 2:
  {
   cout<<"\t\t请输入要删除的教师的工号：";
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
	 cout << "没有你要删除的教师。" << endl;
	else
		cout<<"删除成功"<<endl;
    infile.close();
	}break;
default:{cout<<"操作选择错误!"<<endl;}break;

 }
    infile.close();
    ofstream outfile("教师.txt", ios::out);
    for (i = 0; i < 100; i++) {
        if (t[i].num != 0)
            outfile << t[i].num << "    " << t[i].name << "    " << t[i].wage
                    << "    " << t[i].time << endl;
    }
    outfile.close();
}

void leaderdel()//领导删除
{
    ifstream infile("领导.txt", ios::in);
   string nam;
	int num;
    int n,y;
    cout<<"\t\t1.按领导的姓名删除\n\t\t2.按领导的工号删除";
    cout<<"\n\t\t 请选择";
    cin>>y;
 switch(y)
 {
 case 1:{cout<<"\t\t请输入要删除的领导的姓名：";
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
	 cout << "没有你要删除的领导。" << endl;
	else
    cout<<"删除成功"<<endl;
    infile.close();
	}break;

case 2:
  {
   cout<<"\t\t请输入要删除的领导的工号：";
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
	 cout << "没有你要删除的领导。" << endl;
	else
		cout<<"删除成功"<<endl;
    infile.close();
	}break;
default:{cout<<"操作选择错误!"<<endl;}break;

 }
    infile.close();
    ofstream outfile("领导.txt", ios::out);
    for (i = 0; i < 100; i++) {
        if (x[i].num != 0)
            outfile << x[i].num << "    " << x[i].name << "    " << x[i].wage
                    << "     " << x[i].butie << endl;
    }
    outfile.close();
}

void jianzhidel()       //教师兼职领导删除
{
    ifstream infile("教师兼职领导.txt", ios::in);
    string nam;
	int num;
    int n,y;
    cout<<"\t\t1.按教师兼职领导的姓名删除\n\t\t2.按教师兼职领导的工号删除";
    cout<<"\n\t\t 请选择";
    cin>>y;
 switch(y)
 {
 case 1:{cout<<"\t\t请输入要删除的教师兼职领导的姓名：";
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
	 cout << "没有你要删除的教师兼职领导。" << endl;
	else
		cout<<"删除成功"<<endl;
    infile.close();
	}break;

case 2:
  {
   cout<<"\t\t请输入要删除的教师兼职领导的工号：";
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
	 cout << "没有你要删除的教师兼职领导。" << endl;
	else
		cout<<"删除成功"<<endl;
    infile.close();
	}break;
default:{cout<<"操作选择错误!"<<endl;}break;

 }
    infile.close();
    ofstream outfile("教师兼职领导.txt", ios::out);
    for (i = 0; i < 100; i++) {
        if (j[i].Teacher::num != 0)
            outfile << j[i].Teacher::num << "    " << j[i].Teacher::name
                    << "   " << j[i].Leader::wage << "    " << j[i].butie
                    << "    " << j[i].Teacher::time << endl;
    }
    outfile.close();

}
void del()//删除
{
    int c;
    for (i = 0;; i++) {
        show6();
        cin >> c;
        if (c == 4) {
        cout << "退出删除成功。" << endl;
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
                cout << "上一次输入错误。" << endl;
            }
                break;
            }
    }
}


void show_sort()
{
    cout << "请选择如下操作：" << endl;
    cout << "\t\t 1：教师排序" << endl;
    cout << "\t\t 2：教师兼职领导排序" << endl;
    cout << "\t\t 3：退出排序" << endl;
    cout << "请选择你的一个操作：  ";
}
void jiaoshi_sort()      //教师排序
{
    ifstream infile("教师.txt", ios::in);
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
       cout <<"\t\t 工号     名字     总工资    " << endl;
    for (i = 0; i < count; ++i)
     cout << "\t教师: " <<setfill(' ')<<setw(6)<< t[i].num <<setfill(' ')<<setw(10)<< t[i].name <<setfill(' ')<<setw(10)<< m[i]<< endl;    


}



void jianzhi_sort()     //教师兼职领导排序
{
    ifstream infile("教师兼职领导.txt", ios::in);
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
      cout <<"\t\t\t工号       名字      总工资    " << endl;
    for (i = 0; i < count; ++i)
        cout << "\t教师兼职领导：" <<setfill(' ')<<setw(6)<< j[i].Teacher::num <<setfill(' ')<<setw(10)
			<< j[i].Teacher::name<<setfill(' ')<<setw(11) << m[i] << endl;

}


void sort()
{
    int c;
    for (i = 0;; i++) {
        show_sort();
        cin >> c;
        if (c == 3) {
            cout << "退出排序成功。" << endl;
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
                cout << "上一次输入错误。" << endl;
            }
                break;
            }
    }
}
void show7()
{
    cout << " \t\t\t\t 高校工资管理系统    " << endl;
    cout << " \t\t\t\t1：职工信息添加" << endl;
    cout << " \t\t\t\t2：职工信息输出显示" << endl;
    cout << " \t\t\t\t3：职工信息修改" << endl;
    cout << " \t\t\t\t4：职工信息删除" << endl;
    cout << " \t\t\t\t5：职工信息查询" << endl;
    cout << " \t\t\t\t6：职工工资由高到低排序" << endl;
    cout << " \t\t\t\t7：退出" << endl;
    cout << "请选择你的一个操作：  ";
}
int main()
{
    int c;
    for (i = 0;; i++) {
        show7();
        cin >> c;
        if (c == 7) {
            cout << "退出成功。" << endl;
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
                cout << "上一次输入错误。" << endl;
            }
                break;
            }
    }
    return 0;
}
