
// db201800View.h : Cdb201800View 类的接口
//

#pragma once

class Cdb201800Set;

class Cdb201800View : public CRecordView
{
protected: // 仅从序列化创建
	Cdb201800View();
	DECLARE_DYNCREATE(Cdb201800View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_DB201800_FORM };
#endif
	Cdb201800Set* m_pSet;

// 特性
public:
	Cdb201800Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~Cdb201800View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	long ID;
	CString name;
	CString number;
	CString age;
	CString phoneNum;
};

#ifndef _DEBUG  // db201800View.cpp 中的调试版本
inline Cdb201800Doc* Cdb201800View::GetDocument() const
   { return reinterpret_cast<Cdb201800Doc*>(m_pDocument); }
#endif

