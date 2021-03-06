// CardReaderServerDlg.h : header file
//

#if !defined(AFX_CARDREADERSERVERDLG_H__06CF32EA_CDCE_4467_B645_AF9566DF8BB4__INCLUDED_)
#define AFX_CARDREADERSERVERDLG_H__06CF32EA_CDCE_4467_B645_AF9566DF8BB4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "ServerSetting.h"

/////////////////////////////////////////////////////////////////////////////
// CCardReaderServerDlg dialog

class CCardReaderServerDlg : public CDialog
{
// Construction
public:
	CCardReaderServerDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CCardReaderServerDlg)
	enum { IDD = IDD_CARDREADERSERVER_DIALOG };
	CEdit	m_logWindow;
	CTreeCtrl	m_Tree;
	int		m_errors;
	int		m_warns;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCardReaderServerDlg)
	public:
	virtual BOOL DestroyWindow();
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;
	ServerSetting* settingDlg; // 设置对话框
	LRESULT UpdateLog(WPARAM wparam,LPARAM lparam); // 更新日志
	void ToTray();
	LRESULT OnShowTask(WPARAM wparam,LPARAM lparam); // 最小化图标响应函数

	// Generated message map functions
	//{{AFX_MSG(CCardReaderServerDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButtonStart();
	afx_msg void OnButtonStop();
	afx_msg void OnButtonRestart();
	afx_msg void OnButtonSetting();
	afx_msg void OnButtonClear();
	afx_msg void OnButtonLog();
	afx_msg void OnDestroy();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
		void DeleteTray();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CARDREADERSERVERDLG_H__06CF32EA_CDCE_4467_B645_AF9566DF8BB4__INCLUDED_)
