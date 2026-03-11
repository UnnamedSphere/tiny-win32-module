// win32.ixx
// Minimal Win32 C++20 module
// Provides a clean `win32::` namespace for commonly used Win32 APIs
// License: MIT

module;

#define WIN32_LEAN_AND_MEAN
#define NOMINMAX

#include <windows.h>

export module win32;

export namespace win32 {

    // ================================================================
    // TYPES
    // ================================================================

    using ::ATOM;
    using ::BOOL;
    using ::BYTE;
    using ::COLORREF;
    using ::DWORD;
    using ::WORD;
    using ::LONG;
    using ::UINT;

    using ::HWND;
    using ::HMODULE;
    using ::HINSTANCE;
    using ::HMENU;
    using ::HBRUSH;
    using ::HICON;
    using ::HCURSOR;
    using ::HDC;
    using ::HGDIOBJ;

    using ::HMONITOR;
    using ::HRAWINPUT;

    using ::LPARAM;
    using ::WPARAM;
    using ::LRESULT;

    using ::LPVOID;
    using ::LPCVOID;

    using ::LPWSTR;
    using ::LPCWSTR;

    using ::POINT;
    using ::RECT;
    using ::SIZE;

    using ::MSG;
    using ::LPMSG;
    using ::PAINTSTRUCT;

    using ::WNDPROC;
    using ::WNDCLASSW;
    using ::WNDCLASSEXW;

    using ::INT;
    using ::INT_PTR;
    using ::ULONG_PTR;

    using ::HRESULT;

    using ::HANDLE;
    using ::HCOLORSPACE;
    using ::HBITMAP;
    using ::HFONT;
    using ::HPEN;
    using ::HACCEL;
    using ::HGLOBAL;
    using ::MONITORINFO;
    using ::MINMAXINFO;
    using ::RAWINPUT;
    using ::RAWINPUTHEADER;
    using ::RAWMOUSE;
    using ::RAWKEYBOARD;
    using ::TRACKMOUSEEVENT;
    using ::WINDOWPLACEMENT;
    using ::CREATESTRUCTW;

    // ================================================================
    // STANDARD RESOURCE IDS
    // ================================================================

    inline const auto idc_arrow       = IDC_ARROW;
    inline const auto idc_ibeam       = IDC_IBEAM;
    inline const auto idc_wait        = IDC_WAIT;
    inline const auto idc_cross       = IDC_CROSS;
    inline const auto idc_hand        = IDC_HAND;
    inline const auto idc_sizewe      = IDC_SIZEWE;
    inline const auto idc_sizens      = IDC_SIZENS;
    inline const auto idc_sizeall     = IDC_SIZEALL;
    inline const auto idc_no          = IDC_NO;
    inline const auto idc_help        = IDC_HELP;

    inline const auto idi_application = IDI_APPLICATION;
    inline const auto idi_error       = IDI_ERROR;
    inline const auto idi_warning     = IDI_WARNING;
    inline const auto idi_information = IDI_INFORMATION;
    inline const auto idi_question    = IDI_QUESTION;

    // ================================================================
    // MESSAGE BOX FLAGS
    // ================================================================

    inline constexpr UINT mb_ok               = MB_OK;
    inline constexpr UINT mb_okcancel         = MB_OKCANCEL;
    inline constexpr UINT mb_yesno            = MB_YESNO;
    inline constexpr UINT mb_yesnocancel      = MB_YESNOCANCEL;
    inline constexpr UINT mb_retrycancel      = MB_RETRYCANCEL;
    inline constexpr UINT mb_abortretryignore = MB_ABORTRETRYIGNORE;

    inline constexpr UINT mb_iconinformation  = MB_ICONINFORMATION;
    inline constexpr UINT mb_iconwarning      = MB_ICONWARNING;
    inline constexpr UINT mb_iconerror        = MB_ICONERROR;
    inline constexpr UINT mb_iconquestion     = MB_ICONQUESTION;
    inline constexpr UINT mb_iconasterisk     = MB_ICONASTERISK;
    inline constexpr UINT mb_iconexclamation  = MB_ICONEXCLAMATION;
    inline constexpr UINT mb_iconstop         = MB_ICONSTOP;

    inline constexpr UINT mb_systemmodal      = MB_SYSTEMMODAL;
    inline constexpr UINT mb_taskmodal        = MB_TASKMODAL;

    // ================================================================
    // WINDOW STYLES
    // ================================================================

    inline constexpr DWORD ws_overlapped       = WS_OVERLAPPED;
    inline constexpr DWORD ws_caption          = WS_CAPTION;
    inline constexpr DWORD ws_sysmenu          = WS_SYSMENU;
    inline constexpr DWORD ws_thickframe       = WS_THICKFRAME;
    inline constexpr DWORD ws_minimizebox      = WS_MINIMIZEBOX;
    inline constexpr DWORD ws_maximizebox      = WS_MAXIMIZEBOX;
    inline constexpr DWORD ws_overlappedwindow = WS_OVERLAPPEDWINDOW;

    inline constexpr DWORD ws_visible      = WS_VISIBLE;
    inline constexpr DWORD ws_child        = WS_CHILD;
    inline constexpr DWORD ws_popup        = WS_POPUP;
    inline constexpr DWORD ws_border       = WS_BORDER;
    inline constexpr DWORD ws_disabled     = WS_DISABLED;
    inline constexpr DWORD ws_clipchildren = WS_CLIPCHILDREN;
    inline constexpr DWORD ws_clipsiblings = WS_CLIPSIBLINGS;

    inline constexpr DWORD ws_hscroll   = WS_HSCROLL;
    inline constexpr DWORD ws_vscroll   = WS_VSCROLL;
    inline constexpr DWORD ws_tabstop   = WS_TABSTOP;
    inline constexpr DWORD ws_group     = WS_GROUP;
    inline constexpr DWORD ws_minimize  = WS_MINIMIZE;
    inline constexpr DWORD ws_maximize  = WS_MAXIMIZE;
    inline constexpr DWORD ws_dlgframe  = WS_DLGFRAME;

    // ================================================================
    // EXTENDED WINDOW STYLES
    // ================================================================

    inline constexpr DWORD ws_ex_appwindow      = WS_EX_APPWINDOW;
    inline constexpr DWORD ws_ex_clientedge     = WS_EX_CLIENTEDGE;
    inline constexpr DWORD ws_ex_topmost        = WS_EX_TOPMOST;
    inline constexpr DWORD ws_ex_windowedge     = WS_EX_WINDOWEDGE;
    inline constexpr DWORD ws_ex_toolwindow     = WS_EX_TOOLWINDOW;
    inline constexpr DWORD ws_ex_layered        = WS_EX_LAYERED;
    inline constexpr DWORD ws_ex_transparent    = WS_EX_TRANSPARENT;
    inline constexpr DWORD ws_ex_noactivate     = WS_EX_NOACTIVATE;
    inline constexpr DWORD ws_ex_acceptfiles    = WS_EX_ACCEPTFILES;

    // ================================================================
    // WINDOW MESSAGES
    // ================================================================

    inline constexpr UINT wm_null          = WM_NULL;
    inline constexpr UINT wm_create        = WM_CREATE;
    inline constexpr UINT wm_destroy       = WM_DESTROY;
    inline constexpr UINT wm_move          = WM_MOVE;
    inline constexpr UINT wm_size          = WM_SIZE;
    inline constexpr UINT wm_paint         = WM_PAINT;
    inline constexpr UINT wm_close         = WM_CLOSE;
    inline constexpr UINT wm_quit          = WM_QUIT;
    inline constexpr UINT wm_command       = WM_COMMAND;
    inline constexpr UINT wm_timer         = WM_TIMER;

    inline constexpr UINT wm_setfocus      = WM_SETFOCUS;
    inline constexpr UINT wm_killfocus     = WM_KILLFOCUS;
    inline constexpr UINT wm_enable        = WM_ENABLE;
    inline constexpr UINT wm_erasebkgnd    = WM_ERASEBKGND;
    inline constexpr UINT wm_showwindow    = WM_SHOWWINDOW;
    inline constexpr UINT wm_setcursor     = WM_SETCURSOR;

    inline constexpr UINT wm_mousemove     = WM_MOUSEMOVE;
    inline constexpr UINT wm_lbuttondown   = WM_LBUTTONDOWN;
    inline constexpr UINT wm_lbuttonup     = WM_LBUTTONUP;
    inline constexpr UINT wm_rbuttondown   = WM_RBUTTONDOWN;
    inline constexpr UINT wm_rbuttonup     = WM_RBUTTONUP;
    inline constexpr UINT wm_mousewheel    = WM_MOUSEWHEEL;
    inline constexpr UINT wm_mouseleave    = WM_MOUSELEAVE;

    inline constexpr UINT wm_keydown       = WM_KEYDOWN;
    inline constexpr UINT wm_keyup         = WM_KEYUP;
    inline constexpr UINT wm_char          = WM_CHAR;
    inline constexpr UINT wm_syskeydown    = WM_SYSKEYDOWN;
    inline constexpr UINT wm_syskeyup      = WM_SYSKEYUP;
    inline constexpr UINT wm_unichar       = WM_UNICHAR;

    inline constexpr UINT wm_initdialog    = WM_INITDIALOG;
    inline constexpr UINT wm_getminmaxinfo = WM_GETMINMAXINFO;
    inline constexpr UINT wm_notify        = WM_NOTIFY;
    inline constexpr UINT wm_input         = WM_INPUT;
    inline constexpr UINT wm_nccreate      = WM_NCCREATE;
    inline constexpr UINT wm_ncdestroy     = WM_NCDESTROY;

    // ================================================================
    // CLASS STYLES
    // ================================================================

    inline constexpr UINT cs_hredraw = CS_HREDRAW;
    inline constexpr UINT cs_vredraw = CS_VREDRAW;
    inline constexpr UINT cs_owndc   = CS_OWNDC;
    inline constexpr UINT cs_dblclks = CS_DBLCLKS;

    // ================================================================
    // SHOW WINDOW
    // ================================================================

    inline constexpr int sw_hide          = SW_HIDE;
    inline constexpr int sw_show          = SW_SHOW;
    inline constexpr int sw_shownormal    = SW_SHOWNORMAL;
    inline constexpr int sw_showminimized = SW_SHOWMINIMIZED;
    inline constexpr int sw_showmaximized = SW_SHOWMAXIMIZED;
    inline constexpr int sw_showdefault   = SW_SHOWDEFAULT;

    // ================================================================
    // SETWINDOWPOS FLAGS
    // ================================================================

    inline constexpr UINT swp_nosize       = SWP_NOSIZE;
    inline constexpr UINT swp_nomove       = SWP_NOMOVE;
    inline constexpr UINT swp_nozorder     = SWP_NOZORDER;
    inline constexpr UINT swp_noactivate   = SWP_NOACTIVATE;
    inline constexpr UINT swp_showwindow   = SWP_SHOWWINDOW;
    inline constexpr UINT swp_hidewindow   = SWP_HIDEWINDOW;
    inline constexpr UINT swp_framechanged = SWP_FRAMECHANGED;

    // ================================================================
    // SYSTEM METRICS
    // ================================================================

    inline constexpr int sm_cxscreen = SM_CXSCREEN;
    inline constexpr int sm_cyscreen = SM_CYSCREEN;
    inline constexpr int sm_cxframe  = SM_CXFRAME;
    inline constexpr int sm_cyframe  = SM_CYFRAME;
    inline constexpr int sm_cxicon   = SM_CXICON;
    inline constexpr int sm_cyicon   = SM_CYICON;
    inline constexpr int sm_cxcursor = SM_CXCURSOR;
    inline constexpr int sm_cycursor = SM_CYCURSOR;

    // ================================================================
    // SPECIAL VALUES
    // ================================================================

    inline constexpr int cw_usedefault = CW_USEDEFAULT;

    // ================================================================
    // PEEKMESSAGE FLAGS
    // ================================================================

    inline constexpr UINT pm_noremove = PM_NOREMOVE;
    inline constexpr UINT pm_remove   = PM_REMOVE;

    // ================================================================
    // SYSTEM COLORS
    // ================================================================

    inline constexpr int color_window      = COLOR_WINDOW;
    inline constexpr int color_windowframe = COLOR_WINDOWFRAME;
    inline constexpr int color_btnface     = COLOR_BTNFACE;
    inline constexpr int color_btntext     = COLOR_BTNTEXT;

    // ================================================================
    // DRAWING / TEXT
    // ================================================================

    inline constexpr int transparent = TRANSPARENT;
    inline constexpr int opaque      = OPAQUE;

    inline constexpr UINT dt_left       = DT_LEFT;
    inline constexpr UINT dt_center     = DT_CENTER;
    inline constexpr UINT dt_right      = DT_RIGHT;
    inline constexpr UINT dt_top        = DT_TOP;
    inline constexpr UINT dt_vcenter    = DT_VCENTER;
    inline constexpr UINT dt_bottom     = DT_BOTTOM;
    inline constexpr UINT dt_singleline = DT_SINGLELINE;
    inline constexpr UINT dt_wordbreak  = DT_WORDBREAK;
    inline constexpr UINT dt_calcrect   = DT_CALCRECT;

    // ================================================================
    // FUNCTIONS
    // ================================================================

    using ::AdjustWindowRect;
    using ::AdjustWindowRectEx;
    using ::BeginPaint;
    using ::CreateWindowExW;
    using ::DefWindowProcW;
    using ::DestroyWindow;
    using ::DispatchMessageW;
    using ::EndPaint;
    using ::GetClientRect;
    using ::GetMessageW;
    using ::GetModuleHandleW;
    using ::GetWindowRect;
    using ::InvalidateRect;
    using ::LoadCursorW;
    using ::LoadIconW;
    using ::MessageBoxW;
    using ::MoveWindow;
    using ::PeekMessageW;
    using ::PostQuitMessage;
    using ::RegisterClassW;
    using ::RegisterClassExW;
    using ::ShowWindow;
    using ::TranslateMessage;
    using ::UpdateWindow;

    using ::DestroyIcon;
    using ::DestroyCursor;

    using ::GetDC;
    using ::ReleaseDC;

    using ::SendMessageW;
    using ::PostMessageW;

    using ::SetWindowTextW;
    using ::GetWindowTextW;
    using ::GetWindowTextLengthW;

    using ::SetWindowPos;
    using ::GetWindowLongPtrW;
    using ::SetWindowLongPtrW;

    using ::LoadImageW;
    using ::GetSystemMetrics;

    using ::SetTimer;
    using ::KillTimer;

    using ::ClientToScreen;
    using ::ScreenToClient;

    using ::ShowCursor;
    using ::SetCursor;

    using ::CreateSolidBrush;
    using ::DeleteObject;
    using ::FillRect;

    using ::TextOutW;
    using ::DrawTextW;

    using ::Rectangle;
    using ::Ellipse;
    using ::MoveToEx;
    using ::LineTo;
    using ::SelectObject;
    using ::SetTextColor;
    using ::SetBkMode;

    using ::GetCursorPos;
    using ::SetCapture;
    using ::ReleaseCapture;
    using ::GetCapture;
    using ::TrackMouseEvent;

    using ::SetFocus;
    using ::GetFocus;
    using ::EnableWindow;
    using ::IsWindow;
    using ::IsWindowVisible;
    using ::IsWindowEnabled;

    using ::GetParent;
    using ::SetParent;
    using ::GetDlgCtrlID;
    using ::GetDlgItem;

    using ::GetMonitorInfoW;
    using ::MonitorFromWindow;

    using ::CreateFontW;
    using ::CreatePen;
    using ::CreateCompatibleDC;
    using ::CreateCompatibleBitmap;
    using ::BitBlt;

    using ::GetStockObject;

    using ::GetRawInputData;

    using ::MultiByteToWideChar;
    using ::WideCharToMultiByte;

    using ::RegisterRawInputDevices;
    using ::ClipCursor;
}