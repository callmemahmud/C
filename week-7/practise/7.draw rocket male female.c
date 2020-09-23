#include <stdio.h>
void draw_rocket_ship();
void draw_male_stick_figure();
void draw_female_stick_figure();

void draw_circle();
void draw_rectangle();
void draw_triangle();
void draw_inverted_line();

int main()
{
    draw_rocket_ship();
    printf("\n");
    draw_male_stick_figure();
    printf("\n");
    draw_female_stick_figure();
    printf("\n");
    return 0;
}





void draw_rocket_ship()
{
    draw_triangle();
    draw_rectangle();
    draw_inverted_line();
}
void draw_male_stick_figure()
{
    draw_circle();
    draw_rectangle();
    draw_inverted_line();
}
    void draw_female_stick_figure()
{
    draw_circle();
    draw_triangle();
    draw_inverted_line();
}






void draw_circle()
{
    printf("   * * \n");
    printf(" *     * \n");
    printf(" *     * \n");
    printf("   * * \n");
}
void draw_rectangle()
{
    printf("  ****** \n");
    printf("  *    * \n");
    printf("  *    * \n");
    printf("  *    * \n");
    printf("  ****** \n");
}
void draw_triangle()
{
    printf("    * \n");
    printf("   *  * \n");
    printf("  *     * \n");
    printf(" *********\n");
}
void draw_inverted_line()
{
    printf("    * \n");
    printf("  *   * \n");
    printf(" *     * \n");
    printf("*       *\n");
}
