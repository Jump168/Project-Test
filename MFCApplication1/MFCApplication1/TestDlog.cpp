// TestDlog.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "TestDlog.h"
#include "afxdialogex.h"


// CTestDlog �Ի���

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


// CTestDlog ��Ϣ�������
