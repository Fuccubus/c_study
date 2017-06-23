// exam4.cpp : ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "exam4.h"

#define MAX_LOADSTRING 100

// ���� ����:
HINSTANCE hInst;                                // ���� �ν��Ͻ��Դϴ�.
WCHAR szTitle[MAX_LOADSTRING];                  // ���� ǥ���� �ؽ�Ʈ�Դϴ�.
WCHAR szWindowClass[MAX_LOADSTRING];            // �⺻ â Ŭ���� �̸��Դϴ�.

// �� �ڵ� ��⿡ ��� �ִ� �Լ��� ������ �����Դϴ�.
ATOM                MyRegisterClass(HINSTANCE hInstance);
BOOL                InitInstance(HINSTANCE, int);
LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

    // TODO: ���⿡ �ڵ带 �Է��մϴ�.

    // ���� ���ڿ��� �ʱ�ȭ�մϴ�.
    LoadStringW(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
    LoadStringW(hInstance, IDC_EXAM4, szWindowClass, MAX_LOADSTRING);
    MyRegisterClass(hInstance);

    // ���� ���α׷� �ʱ�ȭ�� �����մϴ�.
    if (!InitInstance (hInstance, nCmdShow))
    {
        return FALSE;
    }

    HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_EXAM4));

    MSG msg;

    // �⺻ �޽��� �����Դϴ�.
    while (GetMessage(&msg, nullptr, 0, 0))
    {
        if (!TranslateAccelerator(msg.hwnd, hAccelTable, &msg))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
    }

    return (int) msg.wParam;
}



//
//  �Լ�: MyRegisterClass()
//
//  ����: â Ŭ������ ����մϴ�.
//
ATOM MyRegisterClass(HINSTANCE hInstance)
{
    WNDCLASSEXW wcex;

    wcex.cbSize = sizeof(WNDCLASSEX);

    wcex.style          = CS_HREDRAW | CS_VREDRAW;
    wcex.lpfnWndProc    = WndProc;
    wcex.cbClsExtra     = 0;
    wcex.cbWndExtra     = 0;
    wcex.hInstance      = hInstance;
    wcex.hIcon          = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_EXAM4));
    wcex.hCursor        = LoadCursor(nullptr, IDC_ARROW);
    wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1);
    wcex.lpszMenuName   = MAKEINTRESOURCEW(IDC_EXAM4);
    wcex.lpszClassName  = szWindowClass;
    wcex.hIconSm        = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));

    return RegisterClassExW(&wcex);
}

//
//   �Լ�: InitInstance(HINSTANCE, int)
//
//   ����: �ν��Ͻ� �ڵ��� �����ϰ� �� â�� ����ϴ�.
//
//   ����:
//
//        �� �Լ��� ���� �ν��Ͻ� �ڵ��� ���� ������ �����ϰ�
//        �� ���α׷� â�� ���� ���� ǥ���մϴ�.
//
BOOL InitInstance(HINSTANCE hInstance, int nCmdShow)
{
   hInst = hInstance; // �ν��Ͻ� �ڵ��� ���� ������ �����մϴ�.

   HWND hWnd = CreateWindowW(szWindowClass, szTitle, WS_OVERLAPPEDWINDOW,
      CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, nullptr, nullptr, hInstance, nullptr);

   if (!hWnd)
   {
      return FALSE;
   }

   ShowWindow(hWnd, nCmdShow);
   UpdateWindow(hWnd);

   return TRUE;
}

//
//  �Լ�: WndProc(HWND, UINT, WPARAM, LPARAM)
//
//  ����:  �� â�� �޽����� ó���մϴ�.
//
//  WM_COMMAND  - ���� ���α׷� �޴��� ó���մϴ�.
//  WM_PAINT    - �� â�� �׸��ϴ�.
//  WM_DESTROY  - ���� �޽����� �Խ��ϰ� ��ȯ�մϴ�.
//
//
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)
    {
    case WM_COMMAND:
        {
            int wmId = LOWORD(wParam);
            // �޴� ������ ���� �м��մϴ�.
            switch (wmId)
            {
            case IDM_ABOUT:
                DialogBox(hInst, MAKEINTRESOURCE(IDD_ABOUTBOX), hWnd, About);
                break;
            case IDM_EXIT:
                DestroyWindow(hWnd);
                break;
            default:
                return DefWindowProc(hWnd, message, wParam, lParam);
            }
        }
        break;
    case WM_PAINT:
        {
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hWnd, &ps);
            // TODO: ���⿡ hdc�� ����ϴ� �׸��� �ڵ带 �߰��մϴ�.

			//1��° ��
			SetPixel(hdc, 100, 100, RGB(255, 0, 0));
			SetPixel(hdc, 101, 100, RGB(255, 0, 0));
			SetPixel(hdc, 102, 100, RGB(255, 0, 0));
			SetPixel(hdc, 103, 100, RGB(255, 0, 0));
			SetPixel(hdc, 104, 100, RGB(255, 0, 0));
			SetPixel(hdc, 105, 100, RGB(255, 0, 0));
			SetPixel(hdc, 106, 100, RGB(255, 0, 0));
			SetPixel(hdc, 107, 100, RGB(255, 0, 0));
			SetPixel(hdc, 108, 100, RGB(255, 0, 0));
			SetPixel(hdc, 109, 100, RGB(255, 0, 0));

			//2��° ��
			SetPixel(hdc, 109, 101, RGB(255, 0, 0));
			SetPixel(hdc, 109, 102, RGB(255, 0, 0));
			SetPixel(hdc, 109, 103, RGB(255, 0, 0));
			SetPixel(hdc, 109, 104, RGB(255, 0, 0));
			SetPixel(hdc, 109, 105, RGB(255, 0, 0));
			SetPixel(hdc, 109, 106, RGB(255, 0, 0));
			SetPixel(hdc, 109, 107, RGB(255, 0, 0));
			SetPixel(hdc, 109, 108, RGB(255, 0, 0));
			SetPixel(hdc, 109, 109, RGB(255, 0, 0));

			//3��° ��
			SetPixel(hdc, 108, 109, RGB(255, 0, 0));
			SetPixel(hdc, 107, 109, RGB(255, 0, 0));
			SetPixel(hdc, 106, 109, RGB(255, 0, 0));
			SetPixel(hdc, 105, 109, RGB(255, 0, 0));
			SetPixel(hdc, 104, 109, RGB(255, 0, 0));
			SetPixel(hdc, 103, 109, RGB(255, 0, 0));
			SetPixel(hdc, 102, 109, RGB(255, 0, 0));
			SetPixel(hdc, 101, 109, RGB(255, 0, 0));
			SetPixel(hdc, 100, 109, RGB(255, 0, 0));

			//4��° ��
			SetPixel(hdc, 100, 108, RGB(255, 0, 0));
			SetPixel(hdc, 100, 107, RGB(255, 0, 0));
			SetPixel(hdc, 100, 106, RGB(255, 0, 0));
			SetPixel(hdc, 100, 105, RGB(255, 0, 0));
			SetPixel(hdc, 100, 104, RGB(255, 0, 0));
			SetPixel(hdc, 100, 103, RGB(255, 0, 0));
			SetPixel(hdc, 100, 102, RGB(255, 0, 0));
			SetPixel(hdc, 100, 101, RGB(255, 0, 0));
			SetPixel(hdc, 100, 100, RGB(255, 0, 0));

			//������ ������
			SetPixel(hdc, 200, 100, RGB(255, 0, 0));
			SetPixel(hdc, 200, 101, RGB(255, 0, 0));
			SetPixel(hdc, 200, 102, RGB(255, 0, 0));
			SetPixel(hdc, 200, 103, RGB(255, 0, 0));
			SetPixel(hdc, 200, 104, RGB(255, 0, 0));
			SetPixel(hdc, 200, 105, RGB(255, 0, 0));
			SetPixel(hdc, 200, 106, RGB(255, 0, 0));
			SetPixel(hdc, 200, 107, RGB(255, 0, 0));
			SetPixel(hdc, 200, 108, RGB(255, 0, 0));
			SetPixel(hdc, 200, 109, RGB(255, 0, 0));

			//������ ��Ȳ��
			SetPixel(hdc, 201, 100, RGB(255, 165, 0));
			SetPixel(hdc, 201, 101, RGB(255, 165, 0));
			SetPixel(hdc, 201, 102, RGB(255, 165, 0));
			SetPixel(hdc, 201, 103, RGB(255, 165, 0));
			SetPixel(hdc, 201, 104, RGB(255, 165, 0));
			SetPixel(hdc, 201, 105, RGB(255, 165, 0));
			SetPixel(hdc, 201, 106, RGB(255, 165, 0));
			SetPixel(hdc, 201, 107, RGB(255, 165, 0));
			SetPixel(hdc, 201, 108, RGB(255, 165, 0));
			SetPixel(hdc, 201, 109, RGB(255, 165, 0));

			//������ �����
			SetPixel(hdc, 202, 100, RGB(255, 255, 0));
			SetPixel(hdc, 202, 101, RGB(255, 255, 0));
			SetPixel(hdc, 202, 102, RGB(255, 255, 0));
			SetPixel(hdc, 202, 103, RGB(255, 255, 0));
			SetPixel(hdc, 202, 104, RGB(255, 255, 0));
			SetPixel(hdc, 202, 105, RGB(255, 255, 0));
			SetPixel(hdc, 202, 106, RGB(255, 255, 0));
			SetPixel(hdc, 202, 107, RGB(255, 255, 0));
			SetPixel(hdc, 202, 108, RGB(255, 255, 0));
			SetPixel(hdc, 202, 109, RGB(255, 255, 0));

			//������ �ʷ���
			SetPixel(hdc, 203, 100, RGB(0, 255, 0));
			SetPixel(hdc, 203, 101, RGB(0, 255, 0));
			SetPixel(hdc, 203, 102, RGB(0, 255, 0));
			SetPixel(hdc, 203, 103, RGB(0, 255, 0));
			SetPixel(hdc, 203, 104, RGB(0, 255, 0));
			SetPixel(hdc, 203, 105, RGB(0, 255, 0));
			SetPixel(hdc, 203, 106, RGB(0, 255, 0));
			SetPixel(hdc, 203, 107, RGB(0, 255, 0));
			SetPixel(hdc, 203, 108, RGB(0, 255, 0));
			SetPixel(hdc, 203, 109, RGB(0, 255, 0));

			//������ �Ķ���
			SetPixel(hdc, 204, 100, RGB(0, 255, 255));
			SetPixel(hdc, 204, 101, RGB(0, 255, 255));
			SetPixel(hdc, 204, 102, RGB(0, 255, 255));
			SetPixel(hdc, 204, 103, RGB(0, 255, 255));
			SetPixel(hdc, 204, 104, RGB(0, 255, 255));
			SetPixel(hdc, 204, 105, RGB(0, 255, 255));
			SetPixel(hdc, 204, 106, RGB(0, 255, 255));
			SetPixel(hdc, 204, 107, RGB(0, 255, 255));
			SetPixel(hdc, 204, 108, RGB(0, 255, 255));
			SetPixel(hdc, 204, 109, RGB(0, 255, 255));

			//������ ������
			SetPixel(hdc, 205, 100, RGB(0, 0, 255));
			SetPixel(hdc, 205, 101, RGB(0, 0, 255));
			SetPixel(hdc, 205, 102, RGB(0, 0, 255));
			SetPixel(hdc, 205, 103, RGB(0, 0, 255));
			SetPixel(hdc, 205, 104, RGB(0, 0, 255));
			SetPixel(hdc, 205, 105, RGB(0, 0, 255));
			SetPixel(hdc, 205, 106, RGB(0, 0, 255));
			SetPixel(hdc, 205, 107, RGB(0, 0, 255));
			SetPixel(hdc, 205, 108, RGB(0, 0, 255));
			SetPixel(hdc, 205, 109, RGB(0, 0, 255));

			//������ ������
			SetPixel(hdc, 206, 100, RGB(255, 0, 255));
			SetPixel(hdc, 206, 101, RGB(255, 0, 255));
			SetPixel(hdc, 206, 102, RGB(255, 0, 255));
			SetPixel(hdc, 206, 103, RGB(255, 0, 255));
			SetPixel(hdc, 206, 104, RGB(255, 0, 255));
			SetPixel(hdc, 206, 105, RGB(255, 0, 255));
			SetPixel(hdc, 206, 106, RGB(255, 0, 255));
			SetPixel(hdc, 206, 107, RGB(255, 0, 255));
			SetPixel(hdc, 206, 108, RGB(255, 0, 255));
			SetPixel(hdc, 206, 109, RGB(255, 0, 255));





            EndPaint(hWnd, &ps);
        }
        break;
    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    default:
        return DefWindowProc(hWnd, message, wParam, lParam);
    }
    return 0;
}

// ���� ��ȭ ������ �޽��� ó�����Դϴ�.
INT_PTR CALLBACK About(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(lParam);
    switch (message)
    {
    case WM_INITDIALOG:
        return (INT_PTR)TRUE;

    case WM_COMMAND:
        if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
        {
            EndDialog(hDlg, LOWORD(wParam));
            return (INT_PTR)TRUE;
        }
        break;
    }
    return (INT_PTR)FALSE;
}
