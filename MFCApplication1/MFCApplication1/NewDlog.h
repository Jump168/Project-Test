#pragma once


// CNewDlog 对话框

class CNewDlog : public CDialogEx
{
	DECLARE_DYNAMIC(CNewDlog)

public:
	CNewDlog(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CNewDlog();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
