#pragma once


// FixDlog �Ի���

class FixDlog : public CDialogEx
{
	DECLARE_DYNAMIC(FixDlog)

public:
	FixDlog(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~FixDlog();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
