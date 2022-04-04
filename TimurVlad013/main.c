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
//    p = _fullpath(buf, "file.txt", _MAX_PATH); //записывает полный путь в buf
//    if (p)
//        printf("\n%s",buf);

//    char buf[_MAX_PATH];
//    char *p = NULL;
//    p = _fullpath(buf, "file.txt", _MAX_PATH); //записывает полный путь в buf
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

//    DWORD attributy = GetFileAttributes(path); //запись всех атрибутов
//    SetFileAttributes(path, attributy | FILE_ATTRIBUTE_HIDDEN); //спрятать файл

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
//    printf("Введите имя файла: ");
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
//        printf("\n%s", "файл существует ");
//    if (_access(p,2) != -1)
//        printf("\n%s", "файл доступен для записи ");
//    if (_access(p,4) != -1)
//        printf("\n%s", "файл доступен для чтения ");
//    if (_access(p,6) != -1)
//        printf("\n%s", "файл доступен для записи и чтения ");

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
//    strftime(buff, 100, "Время создания: %I:%M\n", now);
//    printf("Размер файла: %d\n", finfo.st_size);
//    printf("%s",buff);
//
//    return 0;

    setlocale(LC_ALL, "Russian_Russia.1251");
    char path[]="c:\\Prog\\CodeBlocks2\\TimurVlad13\\Vlad.txt";
    if(_access(path,0)!=-1)
    {
        printf("%s\n", "файл существует");
        if(_access(path,2)!=-1)
        {
        printf("%s\n","файл доступен для записи");
        }
        else perror("");
        if(_access(path,4)!=-1)
        {
        printf("%s\n","файл доступен для чтения");
        }
        else perror("");
        if(_access(path,6)!=-1)
        {
        printf("%s\n","Файл доступен для чтения и записи");
        }
        else perror("");
    }
    perror("");
    return 0;
}
