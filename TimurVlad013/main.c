#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <io.h>
#include <sys/fcntl.h>
#include <sys/stat.h>
#include <windows.h>
#include <conio.h>
#include <time.h>


int main()
{
//    char buf[_MAX_PATH];
//    char *p = NULL;
//    p = _fullpath(buf, "file.txt", _MAX_PATH); //���������� ������ ���� � buf
//    if (p)
//        printf("\n%s",buf);

//    char buf[_MAX_PATH];
//    char *p = NULL;
//    p = _fullpath(buf, "file.txt", _MAX_PATH); //���������� ������ ���� � buf
//    if (p)
//        printf("\n%s",buf);
//
//    char drive[_MAX_DRIVE];
//    char dir[_MAX_DIR];
//    char name[_MAX_FNAME];
//    char ext[_MAX_EXT];
//    _splitpath(buf, drive, dir, name, ext);
//    printf("\n%s", drive);
//    printf("\n%s", dir);
//    printf("\n%s", name);
//    printf("\n%s", ext);

//    char buf[_MAX_PATH];
//    _makepath(buf, drive, dir, name, ext);
//    printf("\n%s", buf);

//    rename("file.txt","file2.txt");

//    if (rename("file.txt","file2.txt") != 0)
//        perror("Error");

//    _chmod(buf,_S_IREAD

//    DWORD attributy = GetFileAttributes(path); //������ ���� ���������
//    SetFileAttributes(path, attributy | FILE_ATTRIBUTE_HIDDEN); //�������� ����

//    struct _stat finfo;
//    _stat(path, &finfo);
//    printf("\n%c", finfo.st_dev+'A');



//    setlocale(LC_ALL,"Russian_Russia.1251");
//    char buf[_MAX_PATH];
//    char *p = NULL;
//    p = _fullpath(buf,"file.txt",_MAX_PATH);
//    char drive[_MAX_DRIVE];
//    char dir[_MAX_DIR];
//    char name[_MAX_FNAME];
//    char ext[_MAX_EXT];
//    _splitpath(buf, drive, dir, name, ext);
//    printf("\n%s", drive);
//    printf("\n%s", dir);
//    printf("\n%s", name);
//    printf("\n%s", ext);

//    setlocale(LC_ALL,"Russian_Russia.1251");
//    char buf[_MAX_PATH];
//    char nname[1000];
//    char *p = NULL;
//    p = _fullpath(buf,"Vladomon2.txt",_MAX_PATH);
//    printf("������� ��� �����: ");
//    scanf("%s", nname);
//    rename("Vladomon2.txt", nname);
//    char name[_MAX_FNAME];
//    printf("\n%s", name);

//    setlocale(LC_ALL,"Rus");
//    char buf[_MAX_PATH];
//    char nname[1000];
//    char *p = NULL;
//    p = _fullpath(buf,"Vlad.txt",_MAX_PATH);
//    //_chmod("Vlad.txt", _S_IWRITE);
//
//    if (_access(p,0) != -1)
//        printf("\n%s", "���� ���������� ");
//    if (_access(p,2) != -1)
//        printf("\n%s", "���� �������� ��� ������ ");
//    if (_access(p,4) != -1)
//        printf("\n%s", "���� �������� ��� ������ ");
//    if (_access(p,6) != -1)
//        printf("\n%s", "���� �������� ��� ������ � ������ ");

//    system("chcp 1251");
//    char drive[_MAX_DRIVE];
//    char dir[_MAX_DIR];
//    char name[_MAX_FNAME];
//    char ext[_MAX_EXT];
//    char path[_MAX_PATH];
//    _makepath(path, drive, dir,name,ext);
//    printf("%s\n",path);
//
//    struct _stat finfo;
//    _stat(path, &finfo);
//    time_t tim;
//    char buff[100];
//    struct tm *now;
//    tim=finfo.st_ctime;
//    now = localtime(&tim);
//    strftime(buff, 100, "����� ��������: %I:%M\n", now);
//    printf("������ �����: %d\n", finfo.st_size);
//    printf("%s",buff);
//
//    return 0;

    setlocale(LC_ALL, "Russian_Russia.1251");
    char path[]="c:\\Prog\\CodeBlocks2\\TimurVlad13\\Vlad.txt";
    if(_access(path,0)!=-1)
    {
        printf("%s\n", "���� ����������");
        if(_access(path,2)!=-1)
        {
        printf("%s\n","���� �������� ��� ������");
        }
        else perror("");
        if(_access(path,4)!=-1)
        {
        printf("%s\n","���� �������� ��� ������");
        }
        else perror("");
        if(_access(path,6)!=-1)
        {
        printf("%s\n","���� �������� ��� ������ � ������");
        }
        else perror("");
    }
    perror("");
    return 0;
}
