#pragma once


// CYUVPlayerDlg �Ի���

class CYUVPlayerDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CYUVPlayerDlg)

public:
	CYUVPlayerDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CYUVPlayerDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MYYUVPLAYER_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
