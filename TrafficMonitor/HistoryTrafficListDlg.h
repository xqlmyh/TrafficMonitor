#pragma once
#include "ListCtrlEx.h"
#include "TabDlg.h"

// CHistoryTrafficListDlg 对话框

class CHistoryTrafficListDlg : public CTabDlg
{
	DECLARE_DYNAMIC(CHistoryTrafficListDlg)

public:
	CHistoryTrafficListDlg(deque<HistoryTraffic>& history_traffics, CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CHistoryTrafficListDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_HISTORY_TRAFFIC_LIST_DIALOG };
#endif

protected:
	CListCtrlEx m_history_list;
	CMenu m_menu;

	deque<HistoryTraffic>& m_history_traffics;

protected:
    bool CalculateColumeWidth(std::vector<int>& widths);

	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()

public:
	virtual BOOL OnNotify(WPARAM wParam, LPARAM lParam, LRESULT* pResult);
	afx_msg void OnInitMenu(CMenu* pMenu);
	afx_msg void OnUseLinearScale();
	afx_msg void OnUseLogScale();

	virtual BOOL OnInitDialog();
    afx_msg void OnSize(UINT nType, int cx, int cy);
};
