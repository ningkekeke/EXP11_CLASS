
// db201800Doc.h : Cdb201800Doc ��Ľӿ�
//


#pragma once
#include "db201800Set.h"


class Cdb201800Doc : public CDocument
{
protected: // �������л�����
	Cdb201800Doc();
	DECLARE_DYNCREATE(Cdb201800Doc)

// ����
public:
	Cdb201800Set m_db201800Set;

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~Cdb201800Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
