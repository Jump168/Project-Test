#pragma once


// FixDlog 对话框

class FixDlog : public CDialogEx
{
	DECLARE_DYNAMIC(FixDlog)

public:
	FixDlog(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~FixDlog();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
