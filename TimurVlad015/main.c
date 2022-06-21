#include <stdio.h>
#include <stdlib.h>
#define _WIN32_WINNT 0x0A00
#include <windows.h>
#include <locale.h>
#define bt_2_id 2
#define edit_id 2
#define bt_2_id 3

HWND bt_quit;//кнопка

LRESULT WndProc(HWND hwnd, UINT message, WPARAM wparam, LPARAM lparam) //функция
{
    if (message == WM_DESTROY)//если выйти
        PostQuitMessage(0);//выход
    else if (message == WM_KEYDOWN)//если нажали на клавишу
        printf("code == %d", wparam);// выводим код клавиши
    else if (message == WM_CHAR)//если нажать на кнопку
        printf("%c",wparam);//она будет печататся
    else if(message == WM_MOUSEMOVE)//при движении мыши
    {
        //координаты мыши
        int xPos = LOWORD(lparam);
        int yPos = HIWORD(lparam);
        printf("mouse[%d,%d]", xPos, yPos);
    }
    else if (message == WM_LBUTTONDOWN)//при нажатии на левую кнопку мыши
        printf("left button pressed");
    else if (message == WM_COMMAND)//обработчик кнопки(если нажали на кнопку)
    {
        //MessageBox(0,"Button pressed","Message", MB_OK);//выводим сообщение
        if(bt_quit == lparam)
            PostQuitMessage(0);
        if(LOWORD(wparam) == bt_2_id)
            MessageBox(0,"Button pressed","Message", MB_OK);
        if(LOWORD(wparam) == edit_id)
        {
            int nc = HIWORD(wparam);
            char c[100];
            GetWindowText(lparam, c, 100);
            if(nc == EN_UPDATE)// если количество символов изменилось
                MessageBox(0, c, "Message", MB_OK);//выводим изменение
        }
    }
    else return DefWindowProcA(hwnd, message, wparam, lparam); //за остальное отвечает стандартная функция
}

int main()
{

//ПРИМЕРЫ

    WNDCLASSA wcl;// переменная клаcса окон
    memset(&wcl, 0, sizeof(WNDCLASSA));//структура памяти
    wcl.lpszClassName = "Window"; //имя
    wcl.lpfnWndProc = DefWindowProcA;//обработчик
    RegisterClassA(&wcl); //регистрация

    HWND hwnd; // дискриптор окна
    hwnd = CreateWindow("Window", "Title", WS_OVERLAPPEDWINDOW, 10, 10, 640, 480, NULL, NULL, NULL, NULL); //640, 480-ширина высота
    ShowWindow(hwnd, SW_SHOWNORMAL);
    while(1)
    {

    }
//--------------------------------------------------
    MSG msg; //сообщение
    while(GetMessage(&msg, NULL, 0, 0))// цикл будет работать пока не получит сообщение
    {
        DispatchMessage(&msg);
    }
//--------------------------------------------------
    MSG msg; //сообщение
    while(GetMessage(&msg, NULL, 0, 0))// цикл будет работать пока не получит сообщение
    {
        DispatchMessage(&msg);
        printf("%d %d", msg.message, msg.wParam);
    }
//--------------------------------------------------
    MSG msg; //сообщение
    while(GetMessage(&msg, NULL, 0, 0))// цикл будет работать пока не получит сообщение
    {
        DispatchMessage(&msg);
        printf("%d %d", msg.message, msg.wParam);
        if((msg.message = 161) && (msg.wParam == 20)) //
            return 0;
    }
//--------------------------------------------------
    WNDCLASSA wcl;// переменная клаcса окон
    memset(&wcl, 0, sizeof(WNDCLASSA));
    wcl.lpszClassName = "Window"; //имя
    wcl.lpfnWndProc = WndProc;//обработчик (WndProc- своя функция, в которой указана стандартная функция)
    RegisterClassA(&wcl);

    HWND hwnd; // дискриптор
    hwnd = CreateWindow("Window", "Title", WS_OVERLAPPEDWINDOW, 10, 10, 640, 480, NULL, NULL, NULL, NULL); //640, 480-ширина высота
    ShowWindow(hwnd, SW_SHOWNORMAL);

    MSG msg; //сообщение
    while(GetMessage(&msg, NULL, 0, 0))// цикл будет работать пока не получит сообщение
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
//--------------------------------------------------
    WNDCLASSA wcl;// переменная клаcса окон
    memset(&wcl, 0, sizeof(WNDCLASSA));
    wcl.lpszClassName = "Window"; //имя
    wcl.lpfnWndProc = WndProc;//обработчик (WndProc- своя функция, в которой указана стандартная функция)
    RegisterClassA(&wcl);

    HWND hwnd; // дискриптор
    hwnd = CreateWindow("Window", "Title", WS_OVERLAPPEDWINDOW, 10, 10, 640, 480, NULL, NULL, NULL, NULL); //640, 480-ширина высота
    ShowWindow(hwnd, SW_SHOWNORMAL);

    bt_quit = CreateWindow("button", "exit", WS_VISIBLE | WS_CHILD, 10, 10, 100, 50, hwnd, NULL, NULL, NULL); //WS_CHILD чтобы кнопка была привязана к окну (эту кнопку указали в начале)

    HWND bt_2;//кнопка
    bt_2 = CreateWindow("button", "Button", WS_VISIBLE | WS_CHILD, 110, 10, 100, 50, hwnd, bt_2_id, NULL, NULL);//bt_2_id чтобы различать эту кнопку от другой (надо добавить #define)

    HWND edit = CreateWindow("edit", "0", WS_VISIBLE | WS_CHILD | WS_BORDER, 50, 80, 60, 20, hwnd, edit_id, NULL, NULL); //WS_BORDER рамка

    MSG msg; //сообщение
    while(GetMessage(&msg, NULL, 0, 0))// цикл будет работать пока не получит сообщение
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
}


// ЗАДАЧИ
//HWND bt_quit;
//LRESULT WndProc(HWND hwnd, UINT message, WPARAM wparam, LPARAM lparam) //функция
//{
//    if (message == WM_COMMAND)
//    {
//        if(bt_quit == lparam)
//            MessageBox(0,"QUIT","Message", MB_OK);
//        if(LOWORD(wparam) == bt_2_id)
//            MessageBox(0,"Button pressed","Message", MB_OK);
//        if(LOWORD(wparam) == edit_id)
//        {
//            int nc = HIWORD(wparam);
//            char c[100];
//            GetWindowText(lparam, c, 100);
//            if(nc == EN_UPDATE)// если количество символов изменилось
//                MessageBox(0, c, "Message", MB_OK);//выводим изменение
//        }
//    }
//    else return DefWindowProcA(hwnd, message, wparam, lparam); //за остальное отвечает стандартная функция
//
//}

//int main()
//{
//    WNDCLASSA wcl;
//    memset(&wcl, 0, sizeof(WNDCLASSA));
//    wcl.lpszClassName = "Window";
//    wcl.lpfnWndProc = DefWindowProcA;
//    RegisterClassA(&wcl);
//
//    HWND hwnd;
//    hwnd = CreateWindow("Window", "Title", WS_OVERLAPPEDWINDOW, 10, 10, 640, 480, NULL, NULL, NULL, NULL);
//    ShowWindow(hwnd, SW_SHOWNORMAL);
//
//    MSG msg;
//    while(GetMessage(&msg, NULL, 0, 0))
//    {
//        DispatchMessage(&msg);
//        printf("%d %d", msg.message, msg.wParam);
//        if((msg.message = 161) && (msg.wParam == 20))
//            return 0;
//    }
////--------------------------------------------------
//    WNDCLASSA wcl;
//    memset(&wcl, 0, sizeof(WNDCLASSA));
//    wcl.lpszClassName = "Window";
//    wcl.lpfnWndProc = WndProc;
//    RegisterClassA(&wcl);
//
//    HWND hwnd;
//    hwnd = CreateWindow("Window", "Title", WS_OVERLAPPEDWINDOW, 10, 10, 640, 480, NULL, NULL, NULL, NULL);
//    ShowWindow(hwnd, SW_SHOWNORMAL);
//
//    bt_quit = CreateWindow("button", "button", WS_VISIBLE | WS_CHILD, 10, 10, 100, 50, hwnd, NULL, NULL, NULL);
//
//    HWND edit = CreateWindow("edit", "0", WS_VISIBLE | WS_CHILD | WS_BORDER, 50, 80, 60, 20, hwnd, edit_id, NULL, NULL);
//
//    HWND bt_2 = CreateWindow("static", "123", WS_VISIBLE | WS_CHILD , 110, 10, 100, 50, hwnd, bt_2_id, NULL, NULL);
//
//    MSG msg;
//    while(GetMessage(&msg, NULL, 0, 0))
//    {
//        TranslateMessage(&msg);
//        DispatchMessage(&msg);
//    }
////--------------------------------------------------
//    WNDCLASSA wcl;
//    memset(&wcl, 0, sizeof(WNDCLASSA));
//    wcl.lpszClassName = "Window";
//    wcl.lpfnWndProc = DefWindowProcA;
//    RegisterClassA(&wcl);
//
//    HWND hwnd;
//    hwnd = CreateWindow("Window", "Title", WS_OVERLAPPEDWINDOW, 10, 10, 640, 480, NULL, NULL, NULL, NULL);
//    ShowWindow(hwnd, SW_SHOWNORMAL);
//
//    HDC dc = GetDC(hwnd);
//
//    SelectObject(dc, GetStockObject(DC_PEN));
//
//    SetDCPenColor(dc, RGB(0,0,255));
//    Ellipse(dc,10,10,50,50);
//
//    SetDCPenColor(dc, RGB(255,211,0));
//    Ellipse(dc,20,30,60,70);
//
//    SetDCPenColor(dc, RGB(0,0,0));
//    Ellipse(dc,40,10,80,50);
//
//    SetDCPenColor(dc, RGB(0,255,0));
//    Ellipse(dc,50,30,90,70);
//
//    SetDCPenColor(dc, RGB(255,0,0));
//    Ellipse(dc,70,10,110,50);
//
//    MSG msg;
//    while(GetMessage(&msg, NULL, 0, 0))
//    {
//        TranslateMessage(&msg);
//        DispatchMessage(&msg);
//    }
//}
