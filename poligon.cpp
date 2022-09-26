#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <math.h>
void display(void)
{
glClearColor (0.0,0.0,0.0,0.0);
glClear (GL_COLOR_BUFFER_BIT);
glBegin(GL_POLYGON);
glVertex2f(-0.3,-0.5);
glColor3f (1.0, 0.0, 0.0);
glVertex2f(-0.2,0.7);
glColor3f (0.0, 1.0, 0.0);
glVertex2f(0.6,0.7);
glColor3f (0.0, 0.0, 1.0);
glVertex2f(0.9,-0.7);
glColor3f(0.0,0.0,1.0);
glEnd ();
glFlush();
}

int main(int argc, char **argv)
{
glutInit(&argc, argv);
glutCreateWindow("polygon");
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
