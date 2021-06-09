// TestPdfTronHelper.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "TestPdfTronHelper.h"
#include "../PdfTronHelper/PdfTronHelper.h"



#pragma comment(lib,"../Release/PdfTronHelper.lib")
#pragma comment(lib,"../PdfTronHelper/Lib/PDFNetC.lib");


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ψһ��Ӧ�ó������

CWinApp theApp;

using namespace std;



int _tmain(int argc, TCHAR* argv[], TCHAR* envp[])
{
	int nRetCode = 0;

	setlocale(LC_ALL, "chs");
	// ��ʼ�� MFC ����ʧ��ʱ��ʾ����
	if (!AfxWinInit(::GetModuleHandle(NULL), NULL, ::GetCommandLine(), 0))
	{
		// TODO: ���Ĵ�������Է���������Ҫ
		_tprintf(_T("����: MFC ��ʼ��ʧ��\n"));
		nRetCode = 1;
	}
	else
	{
		// TODO: �ڴ˴�ΪӦ�ó������Ϊ��д���롣

		CPdfTronHelper::InitLib();
		CPdfTronHelper helper;

		//if (helper.Open("E:\\MyProject\\vs2015TestPrj\\PDFNetC\\Samples\\Release\\fff.pdf"))
		if (helper.Open(argv[1]))
		{
			printf("======open suc\n");
			//string sOutPdf = "E:\\MyProject\\vs2015TestPrj\\PDFNetC\\Samples\\Release\\ori_edit.pdf";
			string sOutPdf = argv[2];
			BOOL bRet = helper.Pdf2EmbeddedFontPdf(sOutPdf);
			printf("========bRet=%d\n", bRet);
			helper.Close();
		}
		CPdfTronHelper::ReleaseLib();
	}

	return nRetCode;
}
