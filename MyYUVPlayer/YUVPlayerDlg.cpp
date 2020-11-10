// YUVPlayerDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "MyYUVPlayer.h"
#include "YUVPlayerDlg.h"
#include "afxdialogex.h"


// CYUVPlayerDlg 对话框

IMPLEMENT_DYNAMIC(CYUVPlayerDlg, CDialogEx)

CYUVPlayerDlg::CYUVPlayerDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_MYYUVPLAYER_DIALOG, pParent)
{

}

CYUVPlayerDlg::~CYUVPlayerDlg()
{
}

void CYUVPlayerDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CYUVPlayerDlg, CDialogEx)
END_MESSAGE_MAP()


// CYUVPlayerDlg 消息处理程序
