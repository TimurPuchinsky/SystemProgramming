#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define _WIN32_WINNT 0x0A00
#include <windows.h>
#define cmb_id 1

//void TextFromClipboard(char **text) //буфер//**указатель на указатель
//{
//    if (IsClipboardFormatAvailable(CF_TEXT))//если доступен формат буфера (текстовый)
//    {
//        if (OpenClipboard(0))//если буфер открыт
//        {
//            char *hBuff = GetClipboardData(CF_TEXT); //берем данные из буфера в переменную
//            int len = strlen(hBuff) + 1; //находим длинну памяти
//            *text = realloc(*text, len);//выделенние памяти по размеру len
//            sprintf(*text,"%s", hBuff); //копируем в текст данные из буфура
//            CloseClipboard();
//            printf("%s", *text);
//        }
//    }
//}
//
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    HWND hwnd = GetConsoleWindow();
//    char *str = NULL; //УКАЗАТЕЛЬ НА ТЕКСТОВУЮ ПЕРЕМЕННУЮ
//    while (1)
//    {
//       if (GetForegroundWindow() != hwnd) continue; // если в фокусе, продолжить
//       if (GetKeyState(VK_ESCAPE) < 0) break; //если нажать на клавишу то выходим из цикла
//       if (GetKeyState(VK_LCONTROL) < 0)
//        if (GetKeyState('V') < 0)
//          {
//             TextFromClipboard(&str);
//             while (GetKeyState('V') < 0); //вставляем когда клавиша нажата (ctrl + V)
//          }
//    }
//}

//--------------------------------------------------------------------
//--------------------------------------------------------------------

//void TextFromClipboard(char **text) //буфер//**указатель на указатель
//{
//    if (IsClipboardFormatAvailable(CF_TEXT))//если доступен формат буфера (текстовый)
//    {
//        if (OpenClipboard(0))//если буфер открыт
//        {
//            char *hBuff = GetClipboardData(CF_TEXT); //берем данные из буфера в переменную
//            int len = strlen(hBuff) + 1; //находим длинну памяти
//            *text = realloc(*text, len);//выделенние памяти по размеру len
//            sprintf(*text,"%s", hBuff); //копируем в текст данные из буфура
//            CloseClipboard();
//            printf("%s", *text);
//        }
//    }
//}
//
//void TextToClipboard(char *text)
//{
//    if (OpenClipboard(0))
//    {
//        EmptyClipboard(); //очистка буфера
//        char *hBuff = GlobalAlloc(GMEM_FIXED, strlen(text+1)); //выделение блока памяти и его размер
//        strcpy(hBuff, text); //копируем строку в буфер
//        SetClipboardData(CF_TEXT, hBuff);
//        CloseClipboard();
//        printf("text in clipboard\n");
//    }
//
//}
//
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    SetConsoleCtrlHandler(NULL, TRUE);//ручное управление консолью
//
//    HWND hwnd = GetConsoleWindow();
//    char *str = NULL; //УКАЗАТЕЛЬ НА ТЕКСТОВУЮ ПЕРЕМЕННУЮ
//    while (1)
//    {
//       if (GetForegroundWindow() != hwnd) continue; // если в фокусе, продолжить
//       if (GetKeyState(VK_ESCAPE) < 0) break; //если нажать на клавишу то выходим из цикла
//       if (GetKeyState(VK_LCONTROL) < 0)
//       {
//          if (GetKeyState('V') < 0)
//          {
//             TextFromClipboard(&str);
//             while (GetKeyState('V') < 0); //вставляем когда клавиша нажата (ctrl + V)
//          }
//          if (GetKeyState('C') < 0)
//          {
//             TextToClipboard(str);
//             while (GetKeyState('C') < 0);
//          }
//       }
//    }
//}

//--------------------------------------------------------------------
//--------------------------------------------------------------------

//LRESULT WndProc(HWND hwnd,UINT message,WPARAM wparam,LPARAM lparam)
//{
//    if(message == WM_DESTROY)
//        PostQuitMessage(0);
//    else if(message == WM_KEYDOWN)
//    {
//        if (wparam == VK_ESCAPE)
//            PostQuitMessage(0);
//        else if (wparam == '1')
//        {
//            SetWindowLongPtr(hwnd, GWL_STYLE, WS_POPUP | WS_VISIBLE);
//            SetWindowPos(hwnd, HWND_TOP, 0, 0, 1400, 900, SWP_SHOWWINDOW
//        }
//        else if (wparam == '2')
//        {
//            SetWindowLongPtr(hwnd, GWL_STYLE, WS_OVERLAPPEDWINDOW | WS_VISIBLE);
//            SetWindowPos(hwnd, HWND_TOP, 0, 0, 1400, 900, SWP_SHOWWINDOW
//        }
//    }
//    else if (message == WM_COMMAND)
//    {
//        if (LOWORD(wparam) == cmb_id)
//        {
//            if (HIWORD(wparam) == CBN_SELCHANGE)
//            {
//                int id = SendMessage(lparam, CB_GETCURSEL, 0, 0);
//
//                if(id == 0)
//                {
//                  SetWindowPos(hwnd, HWND_TOP, 10, 10, 600,800, SWP_SHOWWINDOW);
//                }
//                else if(id == 1)
//                {
//                  SetWindowPos(hwnd, HWND_TOP, 10, 10, 1280,720, SWP_SHOWWINDOW);
//                }
//                else if(id == 2)
//                {
//                  SetWindowPos(hwnd, HWND_TOP, 10, 10, 1920,1080, SWP_SHOWWINDOW);
//                }
//            }
//        }
//    }
//
//    else return DefWindowProcA(hwnd,message,wparam, lparam);
//}
//
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    WNDCLASSA wcl;
//    memset(&wcl, 0, sizeof(WNDCLASSA));
//    wcl.lpszClassName = "myWindow";
//    wcl.lpfnWndProc = WndProc;
//    RegisterClassA(&wcl);
//
//    HWND hwnd;
//    hwnd = CreateWindow("myWindow", "Window", WS_OVERLAPPEDWINDOW, 10, 10, 800, 600, NULL, NULL, NULL, NULL);
//    ShowWindow(hwnd, SW_NORMAL);
//    MSG msg;
//    while (GetMessage(&msg, NULL, 0, 0))
//    {
//       TranslateMessage(&msg);
//       DispatchMessage(&msg);
//    }
//}

//--------------------------------------------------------------------
//ЗАДАЧИ
//--------------------------------------------------------------------

//#define static_id 1
//#define static_id 2
//#define static_id 3
//#define static_id 4
//LRESULT WndProc(HWND hwnd,UINT message,WPARAM wparam,LPARAM lparam)
//{
//    if(message == WM_DESTROY)
//        PostQuitMessage(0);
//    if(message == WM_KEYDOWN)
//    {
//        if (wparam == VK_ESCAPE)
//            PostQuitMessage(0);
//    }
//    else return DefWindowProcA(hwnd,message,wparam, lparam);
//}
//LRESULT WndProc1(HWND hwnd,UINT message,WPARAM wparam,LPARAM lparam)
//{
//    if(message == WM_DESTROY)
//        PostQuitMessage(0);
//    if(message == WM_KEYDOWN)
//    {
//        if (wparam == '1')
//            PostQuitMessage(0);
//    }
//    else return DefWindowProcA(hwnd,message,wparam, lparam);
//}
//LRESULT WndProc2(HWND hwnd,UINT message,WPARAM wparam,LPARAM lparam)
//{
//    if(message == WM_DESTROY)
//        PostQuitMessage(0);
//    if(message == WM_KEYDOWN)
//    {
//        if (wparam == '2')
//            PostQuitMessage(0);
//    }
//    else return DefWindowProcA(hwnd,message,wparam, lparam);
//}
//LRESULT WndProc3(HWND hwnd,UINT message,WPARAM wparam,LPARAM lparam)
//{
//    if(message == WM_DESTROY)
//        PostQuitMessage(0);
//    if(message == WM_KEYDOWN)
//    {
//        if (wparam == '3')
//            PostQuitMessage(0);
//    }
//    else return DefWindowProcA(hwnd,message,wparam, lparam);
//}
//
//
//int main()
//{
//
//    WNDCLASSA wcl;
//    memset(&wcl, 0, sizeof(WNDCLASSA));
//    wcl.lpszClassName = "myWindow";
//    wcl.lpfnWndProc = WndProc;
//    RegisterClassA(&wcl);
//
//    HWND hwnd;
//    hwnd = CreateWindow("myWindow", "Window", WS_OVERLAPPEDWINDOW, 0, 0, 800, 600, NULL, NULL, NULL, NULL);
//    HWND statc = CreateWindow("static", "press 1 button to close window", WS_VISIBLE | WS_CHILD , 650, 500, 980, 500, hwnd, static_id, NULL, NULL);
//    ShowWindow(hwnd, SW_NORMAL);
//    WNDCLASSA wcl1;
//    memset(&wcl1, 0, sizeof(WNDCLASSA));
//    wcl1.lpszClassName = "myWindow1";
//    wcl1.lpfnWndProc = WndProc1;
//    RegisterClassA(&wcl1);
//
//    HWND hwnd1;
//    hwnd1 = CreateWindow("myWindow1", "Window", WS_OVERLAPPEDWINDOW, 810, 0, 800, 600, NULL, NULL, NULL, NULL);
//    HWND statc1 = CreateWindow("static", "press 2 button to close window", WS_VISIBLE | WS_CHILD , 650, 500, 980, 500, hwnd1, static_id, NULL, NULL);
//    ShowWindow(hwnd1, SW_NORMAL);
//
//    WNDCLASSA wcl2;
//    memset(&wcl2, 0, sizeof(WNDCLASSA));
//    wcl2.lpszClassName = "myWindow2";
//    wcl2.lpfnWndProc = WndProc2;
//    RegisterClassA(&wcl2);
//
//    HWND hwnd2;
//    hwnd2 = CreateWindow("myWindow2", "Window", WS_OVERLAPPEDWINDOW, 810, 510, 800, 1600, NULL, NULL, NULL, NULL);
//    HWND statc2 = CreateWindow("static", "press 3 button to close window", WS_VISIBLE | WS_CHILD , 650, 500, 980, 500, hwnd2, static_id, NULL, NULL);
//    ShowWindow(hwnd2, SW_NORMAL);
//    WNDCLASSA wcl3;
//    memset(&wcl3, 0, sizeof(WNDCLASSA));
//    wcl3.lpszClassName = "myWindow3";
//    wcl3.lpfnWndProc = WndProc3;
//    RegisterClassA(&wcl3);
//
//    HWND hwnd3;
//    hwnd3 = CreateWindow("myWindow3", "Window", WS_OVERLAPPEDWINDOW, 10, 510, 800, 1600, NULL, NULL, NULL, NULL);
//    HWND statc3 = CreateWindow("static", "press 4 button to close window", WS_VISIBLE | WS_CHILD , 650, 500, 980, 500, hwnd3, static_id, NULL, NULL);
//
//    ShowWindow(hwnd3, SW_NORMAL);
//    MSG msg;
//    while (GetMessage(&msg, NULL, 0, 0))
//    {
//       TranslateMessage(&msg);
//       DispatchMessage(&msg);
//    }
//}

#include <stdio.h>
#include <stdlib.h>
#define _WIN32_WINNT 0x0A00
#include <windows.h>
#include <locale.h>
void TextFromClipboard(char**text)
{
if(IsClipboardFormatAvailable(CF_TEXT))
{
if(OpenClipboard(0))
{
char *hBuff=GetClipboardData(CF_TEXT);
int len = strlen(hBuff) + 1;
*text =realloc(*text, len);
sprintf(*text,"%s", hBuff);
CloseClipboard();
printf("%s\n", *text);
}
}
}
void TextToClipboard(char *text)
{
if(OpenClipboard(0))
{
EmptyClipboard();
char *hBuff=GlobalAlloc(GMEM_FIXED, strlen(text+1));
strcpy(hBuff, text);
SetClipboardData(CF_TEXT, hBuff);
HANDLE *lcid = GlobalAlloc(GMEM_FIXED, sizeof(DWORD));
*lcid = MAKELCID(MAKELANGID(LANG_RUSSIAN, SUBLANG_NEUTRAL), SORT_DEFAULT);
SetClipboardData(CF_LOCALE, lcid);
CloseClipboard();
printf("text in clipboard\n");
}
}
int main()
{
setlocale(LC_ALL, "RUS");
HWND hwnd = GetConsoleWindow();
char *str = NULL;
SetConsoleCtrlHandler(NULL, TRUE);
while(1)
{
if(GetForegroundWindow()!= hwnd) continue;
if(GetKeyState(VK_ESCAPE)<0) break;
if(GetKeyState(VK_LCONTROL)<0)
{
if(GetKeyState('V')<0)
{
TextFromClipboard(&str);
while(GetKeyState('V')<0);
}
if(GetKeyState('C')<0)
{
TextToClipboard(str);
while(GetKeyState('C')<0);

}
}
}
return 0;
}
