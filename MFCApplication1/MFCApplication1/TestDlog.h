#pragma once


// CTestDlog �Ի���

class CTestDlog : public CDialogEx
{
	DECLARE_DYNAMIC(CTestDlog)

public:
	CTestDlog(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CTestDlog();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
