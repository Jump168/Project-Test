#pragma once


// CNewDlog �Ի���

class CNewDlog : public CDialogEx
{
	DECLARE_DYNAMIC(CNewDlog)

public:
	CNewDlog(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CNewDlog();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
