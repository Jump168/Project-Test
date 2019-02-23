// NewDlog.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "NewDlog.h"
#include "afxdialogex.h"


// CNewDlog 对话框

IMPLEMENT_DYNAMIC(CNewDlog, CDialogEx)

CNewDlog::CNewDlog(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG2, pParent)
{

}

CNewDlog::~CNewDlog()
{
}

void CNewDlog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_BUTTON1, m_Button1);
}


BEGIN_MESSAGE_MAP(CNewDlog, CDialogEx)
END_MESSAGE_MAP()


// CNewDlog 消息处理程序
