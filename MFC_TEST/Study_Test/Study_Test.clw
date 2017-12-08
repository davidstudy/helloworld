; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CListDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "Study_Test.h"

ClassCount=4
Class1=CStudy_TestApp
Class2=CStudy_TestDlg
Class3=CAboutDlg

ResourceCount=4
Resource1=IDD_DIALOG_LIST
Resource2=IDR_MAINFRAME
Resource3=IDD_ABOUTBOX
Class4=CListDlg
Resource4=IDD_STUDY_TEST_DIALOG

[CLS:CStudy_TestApp]
Type=0
HeaderFile=Study_Test.h
ImplementationFile=Study_Test.cpp
Filter=N

[CLS:CStudy_TestDlg]
Type=0
HeaderFile=Study_TestDlg.h
ImplementationFile=Study_TestDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=CStudy_TestDlg

[CLS:CAboutDlg]
Type=0
HeaderFile=Study_TestDlg.h
ImplementationFile=Study_TestDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_STUDY_TEST_DIALOG]
Type=1
Class=CStudy_TestDlg
ControlCount=4
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_BUTTON_LIST_TEST,button,1342242816
Control4=IDC_STATIC,static,1342177294

[DLG:IDD_DIALOG_LIST]
Type=1
Class=CListDlg
ControlCount=2
Control1=IDC_LIST1,SysListView32,1350631425
Control2=IDC_BUTTON_TEST1,button,1342242816

[CLS:CListDlg]
Type=0
HeaderFile=ListDlg.h
ImplementationFile=ListDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=CListDlg
VirtualFilter=dWC

