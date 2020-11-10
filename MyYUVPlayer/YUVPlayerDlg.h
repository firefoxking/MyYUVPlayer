#pragma once


// CYUVPlayerDlg 对话框

class CYUVPlayerDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CYUVPlayerDlg)

public:
	CYUVPlayerDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CYUVPlayerDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MYYUVPLAYER_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
