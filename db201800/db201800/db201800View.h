
// db201800View.h : Cdb201800View ��Ľӿ�
//

#pragma once

class Cdb201800Set;

class Cdb201800View : public CRecordView
{
protected: // �������л�����
	Cdb201800View();
	DECLARE_DYNCREATE(Cdb201800View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_DB201800_FORM };
#endif
	Cdb201800Set* m_pSet;

// ����
public:
	Cdb201800Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~Cdb201800View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	long ID;
	CString name;
	CString number;
	CString age;
	CString phoneNum;
};

#ifndef _DEBUG  // db201800View.cpp �еĵ��԰汾
inline Cdb201800Doc* Cdb201800View::GetDocument() const
   { return reinterpret_cast<Cdb201800Doc*>(m_pDocument); }
#endif

