#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define _WIN32_WINNT 0x0A00
#include <windows.h>
#define masSize 10
#include <time.h>
#include <math.h>

////RECT mas[masSize];
//RECT mas;
//RECT rct;
//double a=0;
//
////void FillMas()
////{
//// srand(time(NULL));
//// for(int i=0;i<masSize;i++)
//// {
//// mas[i].left=rand()%1100;
//// mas[i].top=rand()%500;
//// mas[i].right=mas[i].left+100;
//// mas[i].bottom=mas[i].top+100;
//// }
////}
//void FillMas()
//{
//mas.left=rand()%1200/2;
//mas.top=rand()%600/2;
//mas.right=mas.left+100;
//mas.bottom=mas.top+100;
//}
//
////void WinMove()
////{
//// for(int i = 0;i<masSize;i++)
//// {
//// mas[i].top-=3;
//// if(mas[i].top<-10)
//// mas[i].top=590;
//// mas[i].bottom=mas[i].top+100;
//// mas[i].right=mas[i].left+100;
//// }
////}
//void WinMove()
//{
//mas.left=600+(int)(300*sin(a));
//mas.top=300-(int)(200*cos(a));
//a+=0.05;
//}
//
//void WinShow(HDC dc)
//{
//HDC memDC=CreateCompatibleDC(dc);
//HBITMAP memBM=CreateCompatibleBitmap(dc, rct.right-rct.left,rct.bottom-rct.top);
//SelectObject(memDC, memBM);
//SelectObject(memDC, GetStockObject(DC_BRUSH));
//SetDCBrushColor(memDC, RGB(0,0,255));
//Rectangle(memDC,0,0,1200,600);
//
//SelectObject(memDC, GetStockObject(DC_BRUSH));
//SetDCBrushColor(memDC, RGB(255,255,255));
//SelectObject(memDC, GetStockObject(DC_PEN));
//SetDCPenColor(memDC, RGB(0,0,0));
//// for(int i=0;i<masSize;i++)
//Ellipse(memDC,mas.left,mas.top,mas.left+20,mas.top+20);
//BitBlt(dc,0,0,rct.right-rct.left,rct.bottom-rct.top,memDC,0,0,SRCCOPY);
//DeleteDC(memDC);
//DeleteObject(memBM);
//}
//
//LRESULT WndProc(HWND hwnd,UINT message,WPARAM wparam,LPARAM lparam)
//{
//if(message==WM_DESTROY)
//PostQuitMessage(0);
//else if(message == WM_SIZE)
//GetClientRect(hwnd,&rct);
//else return DefWindowProcA(hwnd,message, wparam,lparam);
//}
//int main()
//{
//WNDCLASSA wcl;
//memset(&wcl,0,sizeof(WNDCLASSA));
//wcl.lpszClassName="MineWindow";
//wcl.lpfnWndProc=WndProc;
//RegisterClassA(&wcl);
//
//HWND hwnd;
//hwnd=CreateWindow("MineWindow","Window", WS_OVERLAPPEDWINDOW, 0, 0, 1200, 600, NULL, NULL, NULL, NULL);
//HDC dc = GetDC(hwnd);
//
//ShowWindow(hwnd,SW_NORMAL);
//FillMas();
//
//MSG msg;
//// while(GetMessage(&msg,NULL,0,0))
//while(1)
//{
//if(PeekMessageA(&msg,NULL,0,0,PM_REMOVE))
//{
//if(msg.message==WM_QUIT)
//break;
//TranslateMessage(&msg);
//DispatchMessage(&msg);
//}
//else
//{
//WinMove();
//WinShow(dc);
//Sleep(50);
//}
//}
//return 0;
//}

//-------------------------------------------------
//задачи
//-------------------------------------------------

RECT mas;
RECT rct;
double a=0;
void FillMas()
{
    mas.left=rand()%1200/2;
    mas.top=rand()%600/2;
    mas.right=mas.left+100;
    mas.bottom=mas.top+100;
    }

    void WinMove()
    {
    mas.left +=3;
    mas.right +=3;
    mas.top= 300-(int)(200*sin(a));
    mas.bottom=mas.top+100;
    a+=0.05;
    }

    void WinShow(HDC dc)
    {
    SelectObject(dc, GetStockObject(DC_BRUSH));
    SetDCBrushColor(dc, RGB(255,255,255));
    Rectangle(dc,0,0,1200,600);

    SelectObject(dc, GetStockObject(DC_BRUSH));
    SetDCBrushColor(dc, RGB(0,255,0));
    SelectObject(dc, GetStockObject(DC_PEN));
    SetDCPenColor(dc, RGB(0,0,0));

    Rectangle(dc,mas.left, mas.top, mas.right,mas.bottom);
    }
    LRESULT WndProc(HWND hwnd, UINT message, WPARAM wparam, LPARAM lparam)
    {
    if (message == WM_DESTROY)
    PostQuitMessage(0);

    else return DefWindowProcA(hwnd, message, wparam, lparam);
    }

    int main()
    {
    WNDCLASSA wcl;
    memset(&wcl, 0, sizeof(WNDCLASSA));
    wcl.lpszClassName = "muWindows";
    wcl.lpfnWndProc = WndProc;
    RegisterClassA(&wcl);

    HWND hwnd;
    hwnd = CreateWindow("muWindows", "Окно", WS_OVERLAPPEDWINDOW, 0, 0, 1200, 600, NULL, NULL, NULL, NULL);

    HDC dc = GetDC(hwnd);

    ShowWindow(hwnd, SW_NORMAL);
    FillMas();

    MSG msg;
    while(1)
    {
    if (PeekMessageA(&msg,NULL,0,0,PM_REMOVE))
    {
    if (msg.message == WM_QUIT)break;
    TranslateMessage(&msg);
    DispatchMessage(&msg);
    }

    WinMove();
    WinShow(dc);
    Sleep(5);
    }
    return 0;
}

//-------------------------------------------------

////RECT mas[masSize];
//RECT mas;
//RECT rct;
//double a=0;
//
////void FillMas()
////{
//// srand(time(NULL));
//// for(int i=0;i<masSize;i++)
//// {
//// mas[i].left=rand()%1100;
//// mas[i].top=rand()%500;
//// mas[i].right=mas[i].left+100;
//// mas[i].bottom=mas[i].top+100;
//// }
////}
//void FillMas()
//{
//mas.left=rand()%1200/2;
//mas.top=rand()%600/2;
//mas.right=mas.left+100;
//mas.bottom=mas.top+100;
//}
//
////void WinMove()
////{
//// for(int i = 0;i<masSize;i++)
//// {
//// mas[i].top-=3;
//// if(mas[i].top<-10)
//// mas[i].top=590;
//// mas[i].bottom=mas[i].top+100;
//// mas[i].right=mas[i].left+100;
//// }
////}
//void WinMove()
//{
//mas.left=600+(int)(300*sin(a));
//mas.top=300-(int)(200*cos(a));
//a+=0.05;
//}
//
//void WinShow(HDC dc)
//{
//HDC memDC=CreateCompatibleDC(dc);
//HBITMAP memBM=CreateCompatibleBitmap(dc, rct.right-rct.left,rct.bottom-rct.top);
//SelectObject(memDC, memBM);
//SelectObject(memDC, GetStockObject(DC_BRUSH));
//SetDCBrushColor(memDC, RGB(255,255,255));
//Rectangle(memDC,0,0,1200,600);
//
//SelectObject(memDC, GetStockObject(DC_BRUSH));
//SetDCBrushColor(memDC, RGB(0,0,255));
//SelectObject(memDC, GetStockObject(DC_PEN));
//SetDCPenColor(memDC, RGB(0,0,0));
//// for(int i=0;i<masSize;i++)
//Ellipse(memDC,mas.left,mas.top,mas.left+20,mas.top+20);
//
//SelectObject(memDC, GetStockObject(DC_BRUSH));
//SetDCBrushColor(memDC, RGB(255,250,0));
//SelectObject(memDC, GetStockObject(DC_PEN));
//SetDCPenColor(memDC, RGB(0,0,0));
//Ellipse(memDC,600,350,550,300);
//BitBlt(dc,0,0,rct.right-rct.left,rct.bottom-rct.top,memDC,0,0,SRCCOPY);
//DeleteDC(memDC);
//DeleteObject(memBM);
//}
//
//LRESULT WndProc(HWND hwnd,UINT message,WPARAM wparam,LPARAM lparam)
//{
//if(message==WM_DESTROY)
//PostQuitMessage(0);
//else if(message == WM_SIZE)
//GetClientRect(hwnd,&rct);
//else return DefWindowProcA(hwnd,message, wparam,lparam);
//}
//
//int main()
//{
//WNDCLASSA wcl;
//memset(&wcl,0,sizeof(WNDCLASSA));
//wcl.lpszClassName="MineWindow";
//wcl.lpfnWndProc=WndProc;
//RegisterClassA(&wcl);
//
//HWND hwnd;
//hwnd=CreateWindow("MineWindow","Window", WS_OVERLAPPEDWINDOW, 0, 0, 1200, 600, NULL, NULL, NULL, NULL);
//HDC dc = GetDC(hwnd);
//
//ShowWindow(hwnd,SW_NORMAL);
//FillMas();
//
//MSG msg;
//// while(GetMessage(&msg,NULL,0,0))
//while(1)
//{
//if(PeekMessageA(&msg,NULL,0,0,PM_REMOVE))
//{
//if(msg.message==WM_QUIT)
//break;
//TranslateMessage(&msg);
//DispatchMessage(&msg);
//}
//else
//{
//WinMove();
//WinShow(dc);
//Sleep(50);
//}
//}
//return 0;
//}

//-------------------------------------------------

//#include <stdio.h>
//#include <stdlib.h>
//#include <windows.h>
//
//#define bt_2_id 2
//#define edt_id 3
//#define static_id 4
//
//HWND bt_quit;
//
//LRESULT WndProc(HWND hwnd, UINT message, WPARAM wparam, LPARAM lparam)
//{
//if (message == WM_DESTROY)
//PostQuitMessage(0);
//else if (message == WM_COMMAND)
//{
//if(bt_quit == lparam)
//PostQuitMessage(0);
//if (LOWORD(wparam) == bt_2_id)
//MessageBox(0, "button passed", "message", MB_OK);
//if (LOWORD(wparam) == edt_id)
//{
//char b[100] = "4";
//int nc = HIWORD(wparam);
//char c[100];
//GetWindowText(lparam, c, 100);
//if (nc == EN_KILLFOCUS)
//if(strcmp(c,b)==0)
//MessageBox(0, "true", "message", MB_OK);
//else
//MessageBox(0, "false", "message", MB_OK);
//}
//}
//else return DefWindowProcA(hwnd, message, wparam, lparam);
//}
//
//int main()
//{
//WNDCLASSA wcl;
//memset(&wcl, 0, sizeof(WNDCLASSA));
//wcl.lpszClassName = "Windows";
//wcl.lpfnWndProc = WndProc;
//RegisterClassA(&wcl);
//
//HWND hwnd;
//hwnd = CreateWindow("Windows", "Мое окно", WS_OVERLAPPEDWINDOW, 10, 10, 640, 480, NULL, NULL, NULL, NULL);
//ShowWindow(hwnd, SW_SHOWNORMAL);
//
//HWND bt_2;
//bt_2 = CreateWindow("button", "proverca", WS_VISIBLE | WS_CHILD, 110, 250, 100, 50, hwnd, bt_2_id, NULL, NULL);
//HWND statc = CreateWindow("static", "kak nazivaetsa evreiski novi god?", WS_VISIBLE | WS_CHILD , 50, 70, 270, 20, hwnd, static_id, NULL, NULL);
//HWND statc1 = CreateWindow("static", "1. xanyka", WS_VISIBLE | WS_CHILD , 50, 100, 115, 20, hwnd, static_id, NULL, NULL);
//HWND statc2 = CreateWindow("static", "2. yuom kipyr", WS_VISIBLE | WS_CHILD , 50, 130, 115, 20, hwnd, static_id, NULL, NULL);
//HWND statc3 = CreateWindow("static", "3. kvanpa", WS_VISIBLE | WS_CHILD , 50, 160, 115, 20, hwnd, static_id, NULL, NULL);
//HWND statc4 = CreateWindow("static", "4. Rosh hachana", WS_VISIBLE | WS_CHILD , 50, 190, 115, 20, hwnd, static_id, NULL, NULL);
//HWND statc5 = CreateWindow("static", "Vvedite nomer otveta:", WS_VISIBLE | WS_CHILD , 50, 220, 170, 20, hwnd, static_id, NULL, NULL);
//HWND edt = CreateWindow("edit", "", WS_VISIBLE | WS_CHILD | WS_BORDER, 210, 220, 30, 20, hwnd, edt_id, NULL, NULL);
//
//MSG msg;
//while(GetMessage(&msg, NULL, 0, 0))
//{
//TranslateMessage(&msg);
//DispatchMessage(&msg);
//}
//return 0;
//}
