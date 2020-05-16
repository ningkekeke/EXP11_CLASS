
// db201800Set.cpp : Cdb201800Set ���ʵ��
//

#include "stdafx.h"
#include "db201800.h"
#include "db201800Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cdb201800Set ʵ��

// ���������� 2020��5��16��, ���� 11:40

IMPLEMENT_DYNAMIC(Cdb201800Set, CRecordset)

Cdb201800Set::Cdb201800Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0.0;
	column1 = L"";
	column2 = L"";
	column3 = L"";
	column4 = L"";
	m_nFields = 5;
	m_nDefaultType = snapshot;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString Cdb201800Set::GetDefaultConnect()
{
	return _T("DSN=\x6570\x636e\x6e90_\x5b66\x751f\x4fe1\x606f\x8868;DBQ=D:\\\x5b66\x751f\x4fe1\x606f\x8868.xls;DefaultDir=D:;DriverId=790;FIL=excel 8.0;MaxBufferSize=2048;PageTimeout=5;");
}

CString Cdb201800Set::GetDefaultSQL()
{
	return _T("[Sheet1$]");
}

void Cdb201800Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[����]"), column1);
	RFX_Text(pFX, _T("[ѧ��]"), column2);
	RFX_Text(pFX, _T("[����]"), column3);
	RFX_Text(pFX, _T("[�ֻ�����]"), column4);

}
/////////////////////////////////////////////////////////////////////////////
// Cdb201800Set ���

#ifdef _DEBUG
void Cdb201800Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void Cdb201800Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

