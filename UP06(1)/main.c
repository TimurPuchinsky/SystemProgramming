#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _WIN32_WINNT 0x0A00
#include <windows.h>
#include <locale.h>
#define bt_2_id 2
#define edit_id 2
#define bt_2_id 3

char rletter()
{
    srand(time(NULL));
    char r = 'a' + rand() % 26;
    char *r1;
    r1 = &r;
    return r1;
}

HWND bt_quit;

LRESULT WndProc(HWND hwnd, UINT message, WPARAM wparam, LPARAM lparam) //функция
{

    if (message == WM_COMMAND)
    {
//        if(LOWORD(wparam) == bt_2_id)
//            MessageBox(0,"Button pressed","Message", MB_OK);

        if(bt_quit == lparam)
        {
            //LOWORD(wparam) == edit_id;
            int nc = HIWORD(wparam);
            char c[1];
            char Len = GetWindowText(edit_id, c, 1);
            char stat = GetWindowText(bt_2_id, c, 1);
                if(Len = stat)
                {
                    MessageBox(0, "Верно!", "Message", MB_OK);
                }
                else MessageBox(0, "Не верно", "Message", MB_OK);
        }

//        if(LOWORD(wparam) == edit_id)
//        {
//            int nc = HIWORD(wparam);
//            char c[100];
//            if(nc == EN_UPDATE)
//            {
//                if(c == bt_2)
//                {
//                    MessageBox(0, "Верно!", "Message", MB_OK);
//                }
//                else
//                {
//                    MessageBox(0, "Не верно", "Message", MB_OK);
//                }
//            }

//            if(bt_quit == lparam)
//            {
//                if(nc = "a")
//                {
//                    MessageBox(0, "Верно!", "Message", MB_OK);
//                }
//            }
//            int nc = HIWORD(wparam);
//            char c[100];
//            GetWindowText(lparam, c, 100);
//            if(nc == EN_UPDATE)// если количество символов изменилось
//                if(nc == "a")
//                {
//                    MessageBox(0, "Верно!", "Message", MB_OK);
//                }
//               MessageBox(0, c, "Message", MB_OK);//выводим изменение

    }
    else return DefWindowProcA(hwnd, message, wparam, lparam); //за остальное отвечает стандартная функция

}

int main()
{
    setlocale(LC_ALL, "Russian");
    WNDCLASSA wcl;
    memset(&wcl, 0, sizeof(WNDCLASSA));
    wcl.lpszClassName = "Window";
    wcl.lpfnWndProc = WndProc;
    RegisterClassA(&wcl);

    HWND hwnd;
    hwnd = CreateWindow("Window", "Title", WS_OVERLAPPEDWINDOW, 10, 10, 640, 480, NULL, NULL, NULL, NULL);
    ShowWindow(hwnd, SW_SHOWNORMAL);

    srand(time(NULL));
    char r = 'a' + rand() % 26;
    char *r1;
    r1 = &r;

    bt_quit = CreateWindow("button", "Проверка", WS_VISIBLE | WS_CHILD, 10, 10, 100, 50, hwnd, NULL, NULL, NULL);

    HWND edit = CreateWindow("edit", "", WS_VISIBLE | WS_CHILD | WS_BORDER, 10, 80, 60, 20, hwnd, edit_id, NULL, NULL);

    HWND bt_2 = CreateWindow("static", r1, WS_VISIBLE | WS_CHILD | ES_CENTER, 130, 10, 50, 30, hwnd, bt_2_id, NULL, NULL);

    MSG msg;
    while(GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
}
