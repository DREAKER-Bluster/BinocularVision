// NewProject.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "SkyEyes.h"
#include "NewProject.h"
#include "afxdialogex.h"


// CNewProject �Ի���

IMPLEMENT_DYNAMIC(CNewProject, CDialogEx)

CNewProject::CNewProject(CWnd* pParent /*=NULL*/)
	: CDialogEx(CNewProject::IDD, pParent)
	, ProjectName(_T(""))
{

}

CNewProject::~CNewProject()
{
}

void CNewProject::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_ProjectName, ProjectName);
}


BEGIN_MESSAGE_MAP(CNewProject, CDialogEx)
END_MESSAGE_MAP()


// CNewProject ��Ϣ��������