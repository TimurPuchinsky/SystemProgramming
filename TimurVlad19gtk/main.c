#include <stdlib.h>
#include <gtk/gtk.h>

//int showYesNo(GtkButton *button, GtkWindow *parent)
//{
//    GtkWidget *dialog;
//    dialog = gtk_message_dialog_new (parent, GTK_DIALOG_DESTROY_WITH_PARENT, GTK_MESSAGE_QUESTION, GTK_BUTTONS_YES_NO, "Yes or No?");
//    int result = gtk_dialog_run(GTK_DIALOG(dialog));
//    if(result == GTK_RESPONSE_YES)
//        gtk_button_set_label(button,"yes");
//    else
//        gtk_button_set_label(button,"no");
//    gtk_widget_destroy (dialog);
//    return 0;
//}
//
//int showMsg(GtkButton *button, GtkWindow *parent)
//{
//    GtkWidget *dialog;
//    dialog = gtk_message_dialog_new (parent, GTK_DIALOG_MODAL, GTK_MESSAGE_INFO, GTK_BUTTONS_OK, "Hello World!");
//    //gtk_window_set_position (GTK_WINDOW (dialog), GTK_WIN_POS_CENTER);
//    gtk_dialog_run (GTK_DIALOG (dialog));
//    gtk_widget_destroy (dialog);
//    return 0;
//}
//
//void showButtonMsg(GtkWidget *window, GtkWidget *vbox)
//{
//    GtkWidget *button;
//    button = gtk_button_new_with_mnemonic("Message");
//    g_signal_connect(G_OBJECT(button), "clicked", G_CALLBACK(showMsg), (gpointer)window);
//    gtk_container_add(GTK_CONTAINER(vbox), button);
//}
//
//void showButtonYesNo(GtkWidget *window, GtkWidget *vbox)
//{
//    GtkWidget *button;
//    button = gtk_button_new_with_mnemonic("question");
//    g_signal_connect(G_OBJECT(button), "clicked", G_CALLBACK(showYesNo), (gpointer)window);
//    gtk_container_add(GTK_CONTAINER(vbox), button);
//}
//
//int showMainWindow()
//{
//   GtkWidget *window, *vbox, *label;
//   window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
//   gtk_window_set_title(GTK_WINDOW(window),"Frame");
//   gtk_window_set_default_size(GTK_WINDOW(window), 800, 600);
//   gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
//   gtk_container_set_border_width(GTK_CONTAINER(window), 50);
//   g_signal_connect(G_OBJECT(window), "destroy", G_CALLBACK(gtk_main_quit), NULL);
//   vbox = gtk_vbox_new(TRUE, 3);
//   label = gtk_label_new("text");
//   gtk_container_add(GTK_CONTAINER(vbox), label);
//    gtk_container_add(GTK_CONTAINER(window), vbox);
//   showButtonMsg(window, vbox);
//   showButtonYesNo(window, vbox);
//   gtk_widget_show_all(window);
//   return 0;
//}
//
//int main (int argc, char *argv[])
//{
//  gtk_init (&argc, &argv);
//  showMainWindow();
//  gtk_main ();
//  return 0;
//}
//-------------------------------------------
int showYesNo(GtkButton *button, GtkWindow *parent)
{
    GtkWidget *dialog;
    dialog = gtk_message_dialog_new (parent, GTK_DIALOG_DESTROY_WITH_PARENT, GTK_MESSAGE_QUESTION, GTK_BUTTONS_YES_NO, "Yes or No?");
    int result = gtk_dialog_run(GTK_DIALOG(dialog));
    if(result == GTK_RESPONSE_YES)
        gtk_button_set_label(button,"yes");
    else
        gtk_button_set_label(button,"no");
    gtk_widget_destroy (dialog);
    return 0;
}

int showMsg(GtkButton *button, GtkWindow *parent)
{
    GtkWidget *dialog;
    dialog = gtk_message_dialog_new (parent, GTK_DIALOG_MODAL, GTK_MESSAGE_INFO, GTK_BUTTONS_OK, "NEW SHOWED MESSAGE");
    gtk_dialog_run (GTK_DIALOG (dialog));
    gtk_widget_destroy (dialog);
    return 0;
}

void showButtonMsg(GtkWidget *window, GtkWidget *vbox)
{
    GtkWidget *button;
    button = gtk_button_new_with_mnemonic("MESSAGE");
    g_signal_connect(G_OBJECT(button), "clicked", G_CALLBACK(showMsg), (gpointer)window);
    gtk_container_add(GTK_CONTAINER(vbox), button);
}


int showMainWindow()
{
   GtkWidget *window, *vbox, *label;
   window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
   gtk_window_set_title(GTK_WINDOW(window),"Frame");
   gtk_window_set_default_size(GTK_WINDOW(window), 800, 600);
   gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
   gtk_container_set_border_width(GTK_CONTAINER(window), 50);
   g_signal_connect(G_OBJECT(window), "destroy", G_CALLBACK(gtk_main_quit), NULL);
   vbox = gtk_vbox_new(TRUE, 3);
    gtk_container_add(GTK_CONTAINER(window), vbox);
   showButtonMsg(window, vbox);
   gtk_widget_show_all(window);
   return 0;
}

int main (int argc, char *argv[])
{
  gtk_init (&argc, &argv);
  showMainWindow();
  gtk_main ();
  return 0;
}
