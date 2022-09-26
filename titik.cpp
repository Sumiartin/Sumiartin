#include <windows.h>
#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>


void Draw() {
glClear(GL_COLOR_BUFFER_BIT);

glPointSize(10.0);                   // ini ukuran titiknya

glColor3f(1.0, 1.0, 1.0);           // digunakan untuk merubah warna yaitu warna putih
glBegin(GL_POINTS);                 // awal kode untuk menggambar

glColor3f(1.0, 0.0, 0.0);           //(KIRI ATAS)
glVertex3f(0.3, 0.8, 0.3);

glColor3f(0.0, 1.0, 0.0);          //(TENGAH ATAS)
glVertex3f(0.5, 0.8, 0.0);

glColor3f(0.0, 0.0, 1.0);           //(KANAN ATAS)
glVertex3f(0.7, 0.8, 0.0);

glColor3f(0.0, 1.0, 5.0);          //(KIRI TENGAH) //
glVertex3f(0.4, 0.6, 0.3);

glColor3f(0.7, 5.1, 0.0);         //  (TENGAH KANAN)//
glVertex3f(0.6, 0.6, 0.1);

glColor3f(1.0, 0.0, 1.0);       //  (PALING BAWAH)  //
glVertex3f(0.5, 0.4, 0.0);

glEnd();                            // akhir kode untuk menggambar
glFlush();                          // memastikan bahwa kode dieksekusi
}



void Initialize() {
glClearColor(0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}



int main(int iArgc, char** cppArgv) {
glutInit(&iArgc, cppArgv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(250, 250);
glutInitWindowPosition(200, 200);
glutCreateWindow("Titik ");
Initialize();
glutDisplayFunc(Draw);
glutMainLoop();
return 0;
}
