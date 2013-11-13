
/*******************************************************************************

	@file 

*******************************************************************************/

#pragma once

#include "lib/HTMLayoutCtrl/HTMLayoutCtrl.h"

class CVisioFrameWnd 
	: public CWnd
	, public IHTMLayoutControlManager
{
public:
	CVisioFrameWnd();

	void Create(IVWindowPtr app);
	void Destroy();

protected:
	BOOL OnEraseBkgnd(CDC* pDC);
	void OnSize(UINT nType, int cx, int cy);
	BOOL OnMouseWheel(UINT nFlags, short zDelta, CPoint pt);
	void PostNcDestroy();

	DECLARE_MESSAGE_MAP()

	virtual CWnd* CreateControl(const CString& type);
	virtual bool DestroyControl(const CString& type, CWnd* wnd);

	IVWindowPtr m_window;
	CHTMLayoutCtrl m_html;
};
