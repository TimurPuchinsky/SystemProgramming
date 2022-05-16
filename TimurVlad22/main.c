#include <cairo.h>
#include <cairo-pdf.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>



int main()
{
    cairo_surface_t *surface;//ïîâåðõíîñòü
    cairo_t *cr;//èñòî÷íèê
    surface = cairo_pdf_surface_create("file1.pdf", 800, 800);//ñîçäàíèå ïîâåðõíîñòè
    cr = cairo_create(surface);
    cairo_set_source_rgb(cr, 0, 65535, 0);
    cairo_set_line_width(cr, 6);
    cairo_move_to(cr, 0, 400);
    cairo_line_to(cr, 800, 400);
    cairo_move_to(cr, 400, 0);
    cairo_line_to(cr, 400, 800);
    cairo_stroke(cr);
// кривая графики
//    for (float x = 1.5; x < 3; x += 0.01)
//    {
//        float y = 0.5*log(x/2) + 3*sin(2*x);
//        int px = 100 +100*x;
//        int py = 200-100*y;
//        cairo_set_source_rgb(cr, 65535, 0, 0);
//        cairo_rectangle (cr, px, py, 20, 20);
//        cairo_fill(cr);
//    }
// гистограмма
    for (double t = 0; t < 2*M_PI; t += 0.01)
    {
        int a = 1;
        int b = 6;
        double x = (b-a)*cos(t)+a*cos(b-a/a)*t;
        double y = (b-a)*sin(t)+a*sin(b-a/a)*t;
        int px = 400 +(int) (200 * x);
        int py = 400 -(int) (200 * x);
        cairo_set_source_rgb(cr, 65535, 0, 0);
        cairo_rectangle (cr, px, py, 6, 6);
        cairo_fill(cr);
    }

    cairo_surface_destroy(surface);//óäàëåíèå
    cairo_destroy(cr);//óäàëåíèå
    printf("Done");
    return 0;
}
