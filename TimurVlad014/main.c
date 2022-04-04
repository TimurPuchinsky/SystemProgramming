#include <stdio.h>
#include <stdlib.h>
#define _WIN32_WINNT 0x0A00
#include <windows.h>
#include <locale.h>

int main()
{
//ÏÐÈÌÅÐÛ

    //MessageBox(0, "hi", "title", MB_OK);

    //MessageBox(0, "hi", "title", MB_YESNO);
//--------------------------------------------------
//    int ans = MessageBox(0, "hi", "title", MB_YESNO);
//    if (ans == 7)
//        puts("wrong");
//    else
//        puts("right");
//--------------------------------------------------
//    HWND hwnd = GetConsoleWindow();
//    HDC dc = GetDC(hwnd);
//    SelectObject(dc, GetStockObject(DC_BRUSH));
//    SetDCBrushColor(dc, RGB(255,0,255));
//    Rectangle(dc, 50,10,110,120);
//    Ellipse(dc,200,100,300,200);
//--------------------------------------------------
//    HWND hwnd = GetDesktopWindow();
//    HDC dc = GetDC(hwnd);
//    SelectObject(dc, GetStockObject(DC_BRUSH));
//    SetDCBrushColor(dc, RGB(255,0,255));
//    Rectangle(dc, 900,110,110,210);
//    Ellipse(dc,200,100,300,200);
//--------------------------------------------------
//    HWND hwnd = FindWindow(NULL, "Êàëüêóëÿòîð");
//    HDC dc = GetDC(hwnd);
//    SelectObject(dc, GetStockObject(DC_BRUSH));
//    SetDCBrushColor(dc, RGB(255,0,255));
//    Rectangle(dc, 0,10,110,120);
//    Ellipse(dc,0,100,300,200);
//--------------------------------------------------
//    HWND hwnd = GetConsoleWindow();
//    LPPOINT pPnt;
//    pPnt = malloc(sizeof*pPnt);
//    do
//    {
//        system("cls");
//        GetCursorPos(pPnt);
//        printf("\n Êîîðäèíàòû x: %d | y: %d",pPnt[0].x,pPnt[0].y);
//
//        Sleep(10);
//    } while (GetKeyState (VK_ESCAPE) >= 0);
//--------------------------------------------------
//    SetConsoleCP(1251);
//    HWND hwnd = GetConsoleWindow();
//    LPPOINT pPnt;
//    pPnt = malloc(sizeof*pPnt);
//    do
//    {
//        system("cls");
//        GetCursorPos(pPnt);
//        printf("\n Coordinates x: %d | y: %d", pPnt[0].x, pPnt[0].y);
//        ScreenToClient(hwnd, pPnt);
//        printf("\n Local x: %d | y: %d", pPnt[0].x, pPnt[0].y);
//
//        Sleep(10);
//    } while (GetKeyState (VK_ESCAPE) >= 0);
//--------------------------------------------------

//ÇÀÄÀ×È

//    MessageBox(0, "hi \nhello \nprivet \nbarev", "title", MB_OK);
//--------------------------------------------------
//    HWND hwnd = GetConsoleWindow();
//    HDC dc = GetDC(hwnd);
//    SelectObject(dc, GetStockObject(DC_BRUSH));
//    SetDCBrushColor(dc, RGB(255,255,255));
//    Rectangle(dc, 10,10,300,110);
//    SetDCBrushColor(dc, RGB(0,0,255));
//    Rectangle(dc, 10,110,300,220);
//    SetDCBrushColor(dc, RGB(255,0,0));
//    Rectangle(dc, 10,220,300,330);
//--------------------------------------------------
//    char c[1024];
//    HWND hwnd = GetDesktopWindow();
//    HDC dc = GetWindowDC(hwnd);
//    sprintf(c, "SALAM");
//    TextOutA(dc, 100, 330, c, strlen(c)+1);
//--------------------------------------------------
//    int i = 0;
//    HWND hwnd = GetConsoleWindow();
//    LPPOINT pPnt;
//    pPnt = malloc(sizeof*pPnt);
//    do
//    {
//        i++;
//        HWND hwnd = GetConsoleWindow();
//        HDC dc = GetDC(hwnd);
//        SelectObject(dc, GetStockObject(DC_BRUSH));
//        SetDCBrushColor(dc, RGB(0,128,0));
//        Ellipse(dc,0,0+i,100,100+i);
//        Sleep(50);
//    } while (GetKeyState (VK_ESCAPE) >= 0);
//--------------------------------------------------
    HWND hwnd = GetDesktopWindow();
    HDC dc = GetWindowDC(hwnd);
    int a,b,c,d = rand()%1500;
    do
    {
        SetDCBrushColor(dc, RGB(0,0,0));
        Rectangle(dc, 100,100,100,100);
        if (GetKeyState(VK_LBUTTON)<0)
        {
            SetDCBrushColor(dc, RGB(0,0,0));
            Rectangle(dc, a,b,c,d);
        }
    } while (GetKeyState (VK_ESCAPE) >= 0);
}
