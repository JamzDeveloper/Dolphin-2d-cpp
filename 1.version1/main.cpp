/*
*author: Jose Montenegro Zelada
* product : Dolphin 2d
*/

#include <gl\glut.h>
#include <iostream>
#include <math.h>
using namespace std;

void inicializar()
{
    glClearColor(1.0f, 1.0f, 1.0f,0);
}
void graficar()
{
    glClear(GL_COLOR_BUFFER_BIT);


    ///coordinate  axis
   /* glBegin(GL_LINES);

    glColor3f(1,0,0);
    glVertex2f(-1,0);
    glVertex2f(1,0);


    glColor3f(1,0,0);
    glVertex2f(0,1);
    glVertex2f(0,-1);



    glEnd();
*/

    ///dolphin figure
    glBegin(GL_TRIANGLES);


///1
   glColor3f(0.192157,0.901961,0.968627);
    glVertex2f(-0.7583,0.0);
    glVertex2f(-0.7583,0.0375);
    glVertex2f(-0.616,0.025);

    ///2
    glColor3f(0.901961,0.984314,0.996078);

    glVertex2f(-0.7583,0.0);
    glVertex2f(-0.616,0.025);
    glVertex2f(-0.625,-0.0125);

    ///3
    glColor3f(0.392157,0.972549,1);
    glVertex2f(-0.7583,0.0375);
    glVertex2f(-0.6416,0.125);
    glVertex2f(-0.616,0.025);

    ///4
    glColor3f(0.164706,0.788235,0.941176);
    glVertex2f(-0.6416,0.125);
    glVertex2f(-0.525,0.0625);
    glVertex2f(-0.616,0.025);

    ///5
    glColor3f(0.803922,0.964706,0.980392);
    glVertex2f(-0.616,0.025);
    glVertex2f(-0.525,0.0625);
    glVertex2f(-0.625,-0.0125);

    ///6
    glColor3f(0.396078,0.980392,1);
    glVertex2f(-0.6416,0.125);
    glVertex2f(-0.575,0.325);
    glVertex2f(-0.525,0.0625);

    ///7
    glColor3f( 0.917 , 0.992 , 0.984 );
    glVertex2f(-0.625,-0.0125);
    glVertex2f(-0.525,0.0625);
    glVertex2f(-0.3416,0.025);

    ///8
    glColor3f( 0.196 , 0.898 , 0.976 );
    glVertex2f(-0.575,0.325);
    glVertex2f(-0.1916,0.1875);
    glVertex2f(-0.525,0.0625);

    ///9
    glColor3f( 0.972 , 0.992 ,  1.0  );
    glVertex2f(-0.525,0.0625);
    glVertex2f(-0.1916,0.1875);
    glVertex2f(-0.3416,0.025);

    ///10
    glColor3f( 0.168 , 0.796 , 0.898 );
    glVertex2f(-0.575,0.325);
    glVertex2f(-0.15,0.625);
    glVertex2f(-0.1916,0.1875);

    ///11
    glColor3f( 0.764 , 0.960 , 0.996 );
    glVertex2f(-0.3416,0.025);
    glVertex2f(-0.1916,0.1875);
    glVertex2f(0.0,0.125);


    ///12
    glColor3f( 0.109 , 0.564 , 0.709 );
    glVertex2f(-0.1916,0.1875);
    glVertex2f(-0.15,0.625);
    glVertex2f(0.3,0.15);

    ///13
    glColor3f( 0.666 , 0.831 , 0.886 );
    glVertex2f(-0.1916,0.1875);
    glVertex2f(0.3,0.15);
    glVertex2f(0.0,0.125);


    ///14
    glColor3f( 0.137 , 0.674 , 0.8 );
    glVertex2f(-0.15,0.625);
    glVertex2f(0.2583,0.5875);
    glVertex2f(0.3,0.15);




    ///15
    glColor3f( 0.109 , 0.564 , 0.709 );
    glVertex2f(0.2583,0.5875);
    glVertex2f(0.53,0.375);
    glVertex2f(0.3,0.15);

    ///16
    glColor3f( 0.133 , 0.678 , 0.8 );
    glVertex2f(0.3,0.15);
    glVertex2f(0.53,0.375);
    glVertex2f(0.4916,0.0875);

    ///17
    glColor3f( 0.109 , 0.564 , 0.709 );
    glVertex2f(0.4916,0.0875);
    glVertex2f(0.53,0.375);
    glVertex2f(0.763,0.075);


    ///18
    glColor3f( 0.164 , 0.8 , 0.898 );
    glVertex2f(0.4916,0.0875);
    glVertex2f(0.763,0.075);
    glVertex2f(0.75,-0.15);

    ///19
    glColor3f( 0.125 , 0.564 , 0.709 );
    glVertex2f(0.75,-0.15);
    glVertex2f(0.7083,-0.0125);
    glVertex2f(0.9583,-0.225);

    ///20
    glColor3f( 0.129 , 0.674 , 0.796 );
    glVertex2f(0.6083,-0.2);
    glVertex2f(0.6416,-0.05);
    glVertex2f(0.75,-0.15);


    ///21
    glColor3f( 0.172 , 0.792 , 0.898 );
    glVertex2f(-0.075,0.225);
    glVertex2f(0.0083,0.2875);
    glVertex2f(0.116,0.0375);

    ///22
    glColor3f( 0.137 , 0.674 , 0.8 );
    glVertex2f(0.0083,0.2875);
    glVertex2f(0.183,0.2);
    glVertex2f(0.116,0.0375);


    ///23
    glColor3f( 0.105 , 0.568 , 0.717 );
    glVertex2f(0.116,0.0375);
    glVertex2f(0.183,0.2);
    glVertex2f(0.3,-0.1125);

    ///24
    glColor3f( 0.207 , 0.890 , 0.996 );
    glVertex2f(-0.225,0.05);
    glVertex2f(-0.1083,0.0875);
    glVertex2f(-0.1583,-0.075);


    ///25
    glColor3f( 0.164 , 0.8, 0.898 );
    glVertex2f(-0.15,0.625);
    glVertex2f(0.03,0.8875);
    glVertex2f(0.03,0.6125);


    glEnd();


///lake
    float calx, caly;

    glBegin(GL_POLYGON);

    for(double i=0.0; i<10; i+=0.001)
    {
        glColor3f(1,1,1);
        calx = 0.04* cos(i);
        caly = 0.04 * sin(i);

        glVertex2f(calx-0.46,caly+0.15);

    }

    float calx2, caly2;

    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    for(double i=0.0; i<10; i+=0.001)
    {

        calx2 = 0.03* cos(i);
        caly2 = 0.03* sin(i);

        glVertex2f(calx2-0.46,caly2+0.15);



    }

    glEnd();



    glBegin(GL_POLYGON);
    glColor3f(0.25098,0.658824,0.745098);
    for(double i=0.0; i<10; i+=0.001)
    {

        calx2 = 0.6* cos(i);
        caly2 = 0.1* sin(i);

        glVertex2f(calx2-0.04,caly2-0.55);


    }

    glEnd();

    glFlush();
}
int main(int argc, char** argv)
{

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600,400);
    glutInitWindowPosition(100,200);
    glutCreateWindow("Jamz Developer");

    inicializar();

    glutDisplayFunc(graficar);

    glutMainLoop();

    return 0;



}
