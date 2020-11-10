
// MyYUVPlayerView.cpp : CMyYUVPlayerView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MyYUVPlayer.h"
#endif

#include "MyYUVPlayerDoc.h"
#include "MyYUVPlayerView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMyYUVPlayerView

IMPLEMENT_DYNCREATE(CMyYUVPlayerView, CView)

BEGIN_MESSAGE_MAP(CMyYUVPlayerView, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CMyYUVPlayerView ����/����

CMyYUVPlayerView::CMyYUVPlayerView()
{
	// TODO: �ڴ˴���ӹ������

}

CMyYUVPlayerView::~CMyYUVPlayerView()
{
}

BOOL CMyYUVPlayerView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMyYUVPlayerView ����

void CMyYUVPlayerView::OnDraw(CDC* /*pDC*/)
{
	CMyYUVPlayerDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMyYUVPlayerView ��ӡ

BOOL CMyYUVPlayerView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMyYUVPlayerView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMyYUVPlayerView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMyYUVPlayerView ���

#ifdef _DEBUG
void CMyYUVPlayerView::AssertValid() const
{
	CView::AssertValid();
}

void CMyYUVPlayerView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMyYUVPlayerDoc* CMyYUVPlayerView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMyYUVPlayerDoc)));
	return (CMyYUVPlayerDoc*)m_pDocument;
}
#endif //_DEBUG


// CMyYUVPlayerView ��Ϣ�������
