#include <stdio.h>
#include <stdlib.h>
#define _WIN32_WINNT 0X0A00
#include <windows.h>
#define masSize 10
#include <time.h>

RECT mas [masSize];

void FillMas()
{
    srand(time(NULL));
    int array[rand()%100+1];
    for (int i=0; i<masSize; i++)
    {
    mas[i].left= rand()%1100;
    mas[i].top= rand()%500;
    mas[i].right= mas[i].left +100;
    mas[i].bottom= mas[i].top +100;
    }
    }

void WinMove()
    {
    for (int i=0; i< masSize;i++)
    {
    mas[i].top +=3;
    int array[rand()%1];
    if (mas[i].top>600)
    mas[i].top=0;
    mas[i].bottom= mas[i].top +100;
    mas[i].right= mas[i].left +100+array;
    }
    }



void WinMove1()
    {
    for (int i=6; i< masSize;i++)
    {
        int array[rand()%1];
    mas[i].top +=3;
    if (mas[i].top>600)
    mas[i].top=0;
    mas[i].bottom= mas[i].top +100+array;
    mas[i].right= mas[i].left +100;
    }
    }

    void WinShow(HDC dc)
    {
    SelectObject(dc, GetStockObject(DC_BRUSH));
    SetDCBrushColor(dc, RGB(255,255,255));
    Rectangle(dc,0,0,1200,600);
    for (int i=0; i<100; i++)
    {
    SelectObject(dc, GetStockObject(DC_BRUSH));
    SetDCBrushColor(dc, RGB(255,0,0));
    SelectObject(dc, GetStockObject(DC_PEN));
    SetDCPenColor(dc, RGB(0,0,0));
    Rectangle(dc,mas[i].left, mas[i].top, mas[i].right,mas[i].bottom);
    }
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

    WinMove1();
    WinMove();
    WinShow(dc);
    Sleep(5);
    }
return 0;
}
