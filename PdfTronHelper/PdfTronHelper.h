#pragma once
class CPdfTronPrivate;

class  CPdfTronHelper
{

public:
	CPdfTronHelper();
	~CPdfTronHelper();

	static BOOL InitLib();
	static BOOL ReleaseLib();
	BOOL Open(std::string sPdfPath);
	BOOL Close();
	BOOL IsPdfA();
	BOOL Pdf2EmbeddedFontPdf(const std::string sOutPdfPath,bool bDelOri = false);
	BOOL GetSysFontNameInfoByName(std::wstring& wsFontNameZh, std::wstring& wsFontNameEn, const std::wstring wsFontName);
private:
	CPdfTronPrivate* d_ptr;
};

