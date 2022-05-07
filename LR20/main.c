#include <stdlib.h>
#include <gtk/gtk.h>

#define _LOCALE_TO_UTF8(str)g_locale_to_utf8((const char*)(str),-1,NULL,NULL,NULL)
#define _UTF8_TO_LOCALE(str)g_locale_from_utf8((const char*)(str),-1,NULL,NULL,NULL)
#define _UTF8(str) _LOCALE_TO_UTF8(str)
#define _LOCALE(str) _UTF8_TO_LOCALE(str)
#define _U(str) _UTF8(str)
#define _L(str) _LOCALE(str)

#define NUM_NAMES 4
/*
void ShowBox(GtkWidget *window)
{
    int i;
    GtkWidget *vbox;
    char* names[] = {_U("get up"), _U("morning exercises"), _U("take a shower"), _U("breakfast")};
    vbox = gtk_hbox_new(TRUE, 5);
    for ( i = 0; i < NUM_NAMES; i++)
    {
        GtkWidget *button = gtk_button_new_with_label(names[i]);
        gtk_box_pack_start(GTK_BOX(vbox), button, 0, 1, 0);
        g_signal_connect_swapped(G_OBJECT(button), "clicked", G_CALLBACK(gtk_widget_destroy),(gpointer)button);
    }
    gtk_container_add(GTK_CONTAINER(window), vbox);
}

//ф-ция показа надписи
void ShowLable(GtkWidget *window)
{
    GtkWidget *label;
    label = gtk_label_new(_U("Привет"));
    gtk_container_add(GTK_CONTAINER(window),label);
    gtk_widget_show(label);
}
*/
//При нажатии на кнопку выводится сообщение
/*int ShowAbout(GtkButton *button, GtkWidget *parent)
{
    gtk_show_about_dialog(NULL, _U("Dialog"),_U("Hello"),_U("OK"), NULL,_U("Title"), NULL);
    return 0;
}
*/
/*
int ShowYesNo(GtkButton *button, GtkWindow *parent)
{
    GtkWidget *dialog;
    dialog = gtk_message_dialog_new(parent, GTK_DIALOG_DESTROY_WITH_PARENT, GTK_MESSAGE_QUESTION,
                                       GTK_BUTTONS_YES_NO, _U("Shure?"));
    int result = gtk_dialog_run(GTK_DIALOG(dialog));
    if (result == GTK_RESPONSE_YES)
        gtk_button_set_label(button, _U("Shure!"));
    else
        gtk_button_set_label(button, _U("Not shure!"));
    gtk_widget_destroy(dialog);
    return 0;
}
*/
/*
int ShowMsg(GtkButton *button, GtkWindow *parent)
{
    GtkWidget *dialog;
    dialog = gtk_message_dialog_new(parent, GTK_DIALOG_MODAL, GTK_MESSAGE_INFO,
                                       GTK_BUTTONS_OK, _U("SMS..."));
    gtk_dialog_run(GTK_DIALOG(dialog));
    gtk_widget_destroy(dialog);
    return 0;
}

void ShowButtonMsg(GtkWidget *window, GtkWidget *vbox)
{
    GtkWidget *button;
    button = gtk_button_new_with_mnemonic(_U("SMS"));
    g_signal_connect(G_OBJECT(button), "clicked", G_CALLBACK(ShowMsg), (gpointer)window);
    gtk_container_add(GTK_CONTAINER(vbox), button);
}
void ShowButtonYesNo(GtkWidget *window, GtkWidget *vbox)
{
    GtkWidget *button;
    button = gtk_button_new_with_mnemonic(_U("What"));
    g_signal_connect(G_OBJECT(button), "clicked", G_CALLBACK(ShowYesNo), (gpointer)window);
    gtk_container_add(GTK_CONTAINER(vbox), button);
}
*/
//ф-ция показа окна
void ShowWindow()
{
    GtkWidget *window, *vbox;
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), _U("Window"));
    gtk_window_set_default_size(GTK_WINDOW(window), 800, 600);
    gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
    gtk_container_set_border_width(GTK_CONTAINER(window), 50);
    g_signal_connect(G_OBJECT(window), "destroy", G_CALLBACK(gtk_main_quit), NULL);

    //ShowBox(window);
    vbox = gtk_hbox_new(TRUE, 5);
    gtk_container_add(GTK_CONTAINER(window), vbox);

//ShowButtonMsg(window, vbox);
//ShowButtonYesNo(window, vbox);

//описание кнопки, добавление в контейнер
    GtkWidget *button;
    button = gtk_button_new_with_mnemonic(_U("1"));
    g_signal_connect(G_OBJECT(button), "clicked", G_CALLBACK(gtk_main_quit), (gpointer)window);
    gtk_container_add(GTK_CONTAINER(vbox), button);

    GtkWidget *button1;
    button1 = gtk_button_new_with_mnemonic(_U("2"));
    g_signal_connect(G_OBJECT(button1), "clicked", G_CALLBACK(gtk_main_quit), (gpointer)window);
    gtk_container_add(GTK_CONTAINER(vbox), button1);

    GtkWidget *label = gtk_label_new("0");
    gtk_container_add(GTK_CONTAINER(window), label);
    const char *text = gtk_label_get_text(GTK_LABEL(label));
    printf("%sn", text);
    gtk_container_add(GTK_CONTAINER(vbox), label);

    gtk_widget_show_all(window);
}

int main (int argc, char *argv[])
{

    gtk_init(&argc, &argv);
    ShowWindow();
    gtk_main();
    return 0;
}
