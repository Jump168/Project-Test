// NewDlog.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "NewDlog.h"
#include "afxdialogex.h"


// CNewDlog �Ի���

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
}


BEGIN_MESSAGE_MAP(CNewDlog, CDialogEx)
END_MESSAGE_MAP()


// CNewDlog ��Ϣ�������
