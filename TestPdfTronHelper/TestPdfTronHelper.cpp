// TestPdfTronHelper.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "TestPdfTronHelper.h"
#include "../PdfTronHelper/PdfTronHelper.h"



#pragma comment(lib,"../Release/PdfTronHelper.lib")
#pragma comment(lib,"../PdfTronHelper/Lib/PDFNetC.lib");


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 唯一的应用程序对象

CWinApp theApp;

using namespace std;



int _tmain(int argc, TCHAR* argv[], TCHAR* envp[])
{
	int nRetCode = 0;

	setlocale(LC_ALL, "chs");
	// 初始化 MFC 并在失败时显示错误
	if (!AfxWinInit(::GetModuleHandle(NULL), NULL, ::GetCommandLine(), 0))
	{
		// TODO: 更改错误代码以符合您的需要
		_tprintf(_T("错误: MFC 初始化失败\n"));
		nRetCode = 1;
	}
	else
	{
		// TODO: 在此处为应用程序的行为编写代码。

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
