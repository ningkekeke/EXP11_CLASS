
// db201800View.cpp : Cdb201800View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "db201800.h"
#endif

#include "db201800Set.h"
#include "db201800Doc.h"
#include "db201800View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cdb201800View

IMPLEMENT_DYNCREATE(Cdb201800View, CRecordView)

BEGIN_MESSAGE_MAP(Cdb201800View, CRecordView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CRecordView::OnFilePrintPreview)
END_MESSAGE_MAP()

// Cdb201800View ����/����

Cdb201800View::Cdb201800View()
	: CRecordView(IDD_DB201800_FORM)
	, ID(0)
	, name(_T(""))
	, number(_T(""))
	, age(_T(""))
	, phoneNum(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

Cdb201800View::~Cdb201800View()
{
}

void Cdb201800View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column2);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->column3);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->column4);
}

BOOL Cdb201800View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void Cdb201800View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_db201800Set;
	CRecordView::OnInitialUpdate();

}


// Cdb201800View ��ӡ

BOOL Cdb201800View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void Cdb201800View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void Cdb201800View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// Cdb201800View ���

#ifdef _DEBUG
void Cdb201800View::AssertValid() const
{
	CRecordView::AssertValid();
}

void Cdb201800View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

Cdb201800Doc* Cdb201800View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cdb201800Doc)));
	return (Cdb201800Doc*)m_pDocument;
}
#endif //_DEBUG


// Cdb201800View ���ݿ�֧��
CRecordset* Cdb201800View::OnGetRecordset()
{
	return m_pSet;
}



// Cdb201800View ��Ϣ�������
