#include <stdlib.h>
#include <gtk/gtk.h>
#include <cairo.h>
#define M_PI 1

double a = 0;
gboolean on_draw (GtkWidget *wid, GdkEventExpose *event, gpointer data)
//отображение рисунка с фигурами
{
  cairo_t *cr = gdk_cairo_create(gtk_widget_get_window(wid));

    cairo_set_source_rgb(cr, 0, 65535, 0);
    cairo_set_line_width(cr, 6);//линия
    cairo_move_to(cr, 100, 75);//отступы
    cairo_line_to(cr, 225, 75);//отступы
    cairo_stroke(cr);//выколотый (fill - заполненый)

    cairo_set_source_rgb(cr, 65535, 0, 0);
    cairo_rectangle(cr, 100, 100, 50, 50);
    cairo_fill(cr);

    cairo_set_source_rgb(cr, 0, 0, 65535);//цвет
    cairo_arc(cr, 220, 320, 55, 33.5, 2*M_PI);//окружность
    cairo_fill(cr);//заполнение
//    for ( a = 0; a < 2*M_PI; a += 0.01)//изменение формы квадрата
//    {
//        double s = sin(a);
//        int x = (int)(a * 200);
//        int y = (int)(400-s * 100);
//        cairo_rectangle(cr, x, y, 3, 3);
//        cairo_fill(cr);
//    }


    cairo_destroy(cr);//удаление
    return FALSE;
}

int main (int argc, char *argv[])
{
cairo_image_surface_create_from_png("pic.png");
  GtkWidget *area;
  GtkWidget *win;

  gtk_init (&argc, &argv);

  win = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_default_size (GTK_WINDOW (win), 800, 600);
  gtk_window_set_title (GTK_WINDOW (win), "Graphics");
  gtk_window_set_position (GTK_WINDOW (win), GTK_WIN_POS_CENTER);


  area = gtk_drawing_area_new ();
  gtk_container_add(GTK_CONTAINER(win), area);
  g_signal_connect (G_OBJECT(win), "destroy", gtk_main_quit, NULL);
  g_signal_connect(G_OBJECT(area), "draw", G_CALLBACK(on_draw), NULL);
  gtk_widget_show_all (win);
  gtk_main ();
  return 0;
}

//---------------------------------

//#include <cairo.h>
//#include <gtk/gtk.h>
//
//struct {
//cairo_surface_t *image;
//} glob;
//
//
//static void do_drawing(cairo_t *);
//
//static gboolean on_draw_event(GtkWidget *widget, cairo_t *cr,
//gpointer user_data)
//{
//do_drawing(cr);
//
//return FALSE;
//}
//
//static void do_drawing(cairo_t *cr)
//{
//cairo_set_source_surface(cr, glob.image, 10, 10);
//cairo_paint(cr);
//}
//
//
//int main(int argc, char *argv[])
//{
//GtkWidget *window;
//GtkWidget *darea;
//
//glob.image = cairo_image_surface_create_from_png("123.png");
//
//gtk_init(&argc, &argv);
//
//window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
//
//darea = gtk_drawing_area_new();
//gtk_container_add(GTK_CONTAINER (window), darea);
//
//g_signal_connect(G_OBJECT(darea), "draw",
//G_CALLBACK(on_draw_event), NULL);
//g_signal_connect(window, "destroy",
//G_CALLBACK (gtk_main_quit), NULL);
//
//gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
//gtk_window_set_default_size(GTK_WINDOW(window), 300, 220);
//gtk_window_set_title(GTK_WINDOW(window), "Image");
//
//gtk_widget_show_all(window);
//
//gtk_main();
//
//cairo_surface_destroy(glob.image);
//
//return 0;
//}
