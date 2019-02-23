// TestDlog.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "TestDlog.h"
#include "afxdialogex.h"


// CTestDlog 对话框

IMPLEMENT_DYNAMIC(CTestDlog, CDialogEx)

CTestDlog::CTestDlog(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

CTestDlog::~CTestDlog()
{
}

void CTestDlog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CTestDlog, CDialogEx)
END_MESSAGE_MAP()


// CTestDlog 消息处理程序
