
#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"

#include "wx/stattext.h"


wxClassInfo wxStaticText::ms_classInfo(NULL, NULL, NULL, 0, NULL);

const wxChar wxStaticTextNameStr[100] = L"";

wxClassInfo *wxStaticText::GetClassInfo() const
{
	FAIL("wxStaticText::GetClassInfo");
	return NULL;
}

wxSize wxStaticText::DoGetBestSize() const
{
	FAIL("wxStaticText::DoGetBestSize");
	return wxSize();
}

bool wxStaticText::Create(wxWindow *parent, wxWindowID id,  const wxString& label,
		const wxPoint& pos, const wxSize& size, long style, const wxString& name)
{
	FAIL("wxStaticText::Create");
	return true;
}

void wxStaticText::SetLabel( const wxString &str )
{
	FAIL("wxStaticText::SetLabel");
}

bool wxStaticText::SetFont( const wxFont &font )
{
	FAIL("wxStaticText::SetFont");
	return true;
}
