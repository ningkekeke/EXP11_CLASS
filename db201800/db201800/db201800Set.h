
// db201800Set.h: Cdb201800Set ��Ľӿ�
//


#pragma once

// ���������� 2020��5��16��, ���� 11:40

class Cdb201800Set : public CRecordset
{
public:
	Cdb201800Set(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(Cdb201800Set)

// �ֶ�/��������

// �����ַ�������(�������)��ӳ���ݿ��ֶ�(ANSI �������͵� CStringA �� Unicode
// �������͵� CStringW)��ʵ���������͡�
//  ����Ϊ��ֹ ODBC ��������ִ�п���
// ����Ҫ��ת�������ϣ�������Խ���Щ��Ա����Ϊ
// CString ���ͣ�ODBC ��������ִ�����б�Ҫ��ת����
// (ע��: ����ʹ�� 3.5 �����߰汾�� ODBC ��������
// ��ͬʱ֧�� Unicode ����Щת��)��

	long	m_ID;
	CStringW	column1;
	CStringW	column2;
	CStringW	column3;
	CStringW	column4;

// ��д
	// �����ɵ��麯����д
	public:
	virtual CString GetDefaultConnect();	// Ĭ�������ַ���

	virtual CString GetDefaultSQL(); 	// ��¼����Ĭ�� SQL
	virtual void DoFieldExchange(CFieldExchange* pFX);	// RFX ֧��

// ʵ��
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

};

