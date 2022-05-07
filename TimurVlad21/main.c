#include <cairo.h>
#include <cairo-pdf.h>
#include <math.h>


int main()
{
////    создани pdf файла с синим кружком
//    cairo_surface_t *surface;//поверхность
//    cairo_t *cr;//источник
//    surface = cairo_pdf_surface_create("file.pdf", 400, 400);//создание поверхности
//    cr = cairo_create(surface);
//    cairo_set_source_rgb(cr, 0, 0, 65535);//цвет
//    cairo_arc(cr, 120, 120, 25, 0, 2*M_PI);//окружность
//    cairo_fill(cr);//заполнение
//    cairo_surface_destroy(surface);//удаление
//    cairo_destroy(cr);//удаление
//
//    printf("Done");
//    return 0;

//------------------------------------------------------------------

////  создани pdf файла с синим кружком и надписью
//    cairo_surface_t *surface;//поверхность
//    cairo_t *cr;//источник
//    surface = cairo_pdf_surface_create("file.pdf", 400, 400);//создание поверхности
//    cr = cairo_create(surface);
//    cairo_set_source_rgb(cr, 0, 0, 65535);//цвет
//    cairo_arc(cr, 120, 120, 25, 0, 2*M_PI);//окружность
//    cairo_fill(cr);//заполнение
//
//    cairo_set_source_rgb(cr, 65535, 0, 0);
//    cairo_select_font_face(cr, "sans", CAIRO_FONT_SLANT_NORMAL, CAIRO_FONT_WEIGHT_NORMAL);//шрифт
//    cairo_set_font_size(cr, 24);//размер шрифта
//    cairo_move_to(cr, 100, 170);//отступы
//    cairo_show_text(cr, "circle");//показ текста
//    cairo_surface_destroy(surface);//удаление
//    cairo_destroy(cr);//удаление
//
//    printf("Done");
//    return 0;

//---------------------------------------------

//// картина с линией и квадратом
//    cairo_surface_t *surface;//поверхность
//    cairo_t *cr;//источник
//    surface = cairo_image_surface_create(CAIRO_FORMAT_ARGB32, 800, 600);//создание поверхности
//    cr = cairo_create(surface);
//    cairo_set_source_rgb(cr, 0, 65535, 0);//цвет
//    cairo_set_line_width(cr, 6);//линия
//    cairo_move_to(cr, 100, 75);//отступы
//    cairo_line_to(cr, 225, 75);//отступы
//    cairo_stroke(cr);//выколотый (fill - заполненый)
//
//    cairo_set_source_rgb(cr, 65535, 0, 0);
//    cairo_rectangle(cr, 100, 100, 50, 50);
//    cairo_stroke(cr);
//
//    cairo_surface_write_to_png(surface, "pic.png");
//
//    cairo_surface_destroy(surface);//удаление
//    cairo_destroy(cr);//удаление
//
//    printf("Done");
//    return 0;

//----------------------------------------------
//задачи
//----------------------------------------------
//
//    cairo_surface_t *surface;//поверхность
//    cairo_t *cr;//источник
//    surface = cairo_pdf_surface_create("file.pdf", 400, 400);//создание поверхности
//    cr = cairo_create(surface);
//
//    cairo_set_source_rgb(cr, 65535, 0, 0);
//    cairo_select_font_face(cr, "sans", CAIRO_FONT_SLANT_NORMAL, CAIRO_FONT_WEIGHT_NORMAL);//шрифт
//    cairo_set_font_size(cr, 24);//размер шрифта
//    cairo_move_to(cr, 100, 20);
//    cairo_show_text(cr, "one, two, three, four");
//    cairo_move_to(cr, 100, 40);
//    cairo_show_text(cr, "one, two, three, four");
//    cairo_move_to(cr, 100, 60);
//    cairo_show_text(cr, "one, two, three, four");
//    cairo_move_to(cr, 100, 80);
//    cairo_show_text(cr, "one, two, three, four");
//    cairo_surface_destroy(surface);//удаление
//    cairo_destroy(cr);//удаление
//
//    printf("Done");
//    return 0;
//
////-----------------------------------------
//
//    cairo_surface_t *surface;//поверхность
//    cairo_t *cr;//источник
//    surface = cairo_image_surface_create(CAIRO_FORMAT_ARGB32, 800, 600);//создание поверхности
//    cr = cairo_create(surface);
//    cairo_set_source_rgb(cr, 0, 65535, 0);//цвет
//    cairo_set_line_width(cr, 6);//линия
//    cairo_move_to(cr, 100, 75);//отступы
//    cairo_line_to(cr, 225, 75);//отступы
//    cairo_stroke(cr);//выколотый (fill - заполненый)
//
//    cairo_set_source_rgb(cr, 65535, 0, 0);
//    cairo_rectangle(cr, 100, 100, 50, 50);
//    cairo_stroke(cr);
//
//    cairo_set_source_rgb(cr, 0, 0, 65535);//цвет
//    cairo_arc(cr, 220, 320, 55, 32, 2*M_PI);//окружность
//    cairo_fill(cr);//заполнение
//
//    cairo_surface_write_to_png(surface, "pic.png");
//
//    cairo_surface_destroy(surface);//удаление
//    cairo_destroy(cr);//удаление
//
//    printf("Done");
//    return 0;

//--------------------------------------

//создани pdf файла с синим кружком и надписью
    cairo_surface_t *surface;//поверхность
    cairo_t *cr;//источник
    surface = cairo_pdf_surface_create("file.pdf", 400, 400);//создание поверхности
    cr = cairo_create(surface);
    cairo_set_source_rgb(cr, 65535, 65535, 0);
    cairo_set_line_width(cr, 6);
    cairo_move_to (cr, 10, 50);
    cairo_line_to (cr, 100, 50);
    cairo_line_to(cr, 50, 140);
    cairo_fill(cr);
    cairo_set_source_rgb(cr, 65535, 0, 0);
    cairo_select_font_face(cr, "sans", CAIRO_FONT_SLANT_NORMAL, CAIRO_FONT_WEIGHT_NORMAL);//шрифт
    cairo_set_font_size(cr, 24);//размер шрифта
    cairo_move_to(cr, 10, 30);//отступы
    cairo_show_text(cr, "triangle");//показ текста

    cairo_set_source_rgb(cr, 65535, 0, 0);
    cairo_rectangle(cr, 150, 100, 50, 50);
    cairo_stroke(cr);

    cairo_set_source_rgb(cr, 65535, 0, 0);
    cairo_select_font_face(cr, "sans", CAIRO_FONT_SLANT_NORMAL, CAIRO_FONT_WEIGHT_NORMAL);//шрифт
    cairo_set_font_size(cr, 24);//размер шрифта
    cairo_move_to(cr, 245, 140);//отступы
    cairo_show_text(cr, "rectangle");//показ текста

    cairo_set_source_rgb(cr, 0, 0, 65535);//цвет
    cairo_arc(cr,250, 320, 55, 20, 2*M_PI);//окружность
    cairo_fill(cr);//заполнение
    cairo_set_source_rgb(cr, 65535, 0, 0);
    cairo_select_font_face(cr, "sans", CAIRO_FONT_SLANT_NORMAL, CAIRO_FONT_WEIGHT_NORMAL);//шрифт
    cairo_set_font_size(cr, 24);//размер шрифта
    cairo_move_to(cr, 100, 340);//отступы
    cairo_show_text(cr, "circle");//показ текста


    cairo_surface_destroy(surface);//удаление
    cairo_destroy(cr);//удаление

    printf("Done");
    return 0;
}
//--------------------------------------------------------------

cairo_image_surface_create_from_png(filename)
}
