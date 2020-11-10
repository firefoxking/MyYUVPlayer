
// MyYUVPlayerView.h : CMyYUVPlayerView ��Ľӿ�
//

#pragma once


class CMyYUVPlayerView : public CView
{
protected: // �������л�����
	CMyYUVPlayerView();
	DECLARE_DYNCREATE(CMyYUVPlayerView)

// ����
public:
	CMyYUVPlayerDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CMyYUVPlayerView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MyYUVPlayerView.cpp �еĵ��԰汾
inline CMyYUVPlayerDoc* CMyYUVPlayerView::GetDocument() const
   { return reinterpret_cast<CMyYUVPlayerDoc*>(m_pDocument); }
#endif

