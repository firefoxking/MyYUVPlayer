
// MyYUVPlayer.h : MyYUVPlayer Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMyYUVPlayerApp:
// �йش����ʵ�֣������ MyYUVPlayer.cpp
//

class CMyYUVPlayerApp : public CWinApp
{
public:
	CMyYUVPlayerApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMyYUVPlayerApp theApp;
