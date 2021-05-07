// Sample Line Incremental (MidPoint) Algorithm
#include<windows.h>
#include<iostream>
#include<math.h>
#include <stdio.h>
#include<GL/gl.h>
#include <GL/glut.h>

using namespace std;

int X1, Y1, X2, Y2, r ,cx, cy;

void MidPoint(void)
{
    double dx=(X2-X1),dy=(Y2-Y1),l,m,dstart,dnew,dold,E,NE,newX;
    float xInc,yInc,x=X1,y=Y1;
    dstart = 2*dy - dx;
    E = 2* dy;
    NE = 2*(dy-dx);
    dold = 0;
    dnew = dstart;
    newX = X1;
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POINTS);

    glVertex2d(x,y);

    while(X2!=newX){
        if((dnew - dold > 0)){
            newX+=1;
            y+=1;
            dold = dnew;
            dnew = dold + NE;
        }
        else{
            newX+=1;
            dold = dnew;
            dnew = dold + E;
        }
        glVertex2d(round(newX), round(y));
    }
    glEnd();

    glFlush();

}

void myInit (void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-100.0, 640.0,-100.0, 480.0);
//    gluOrtho2D(0.0, 640.0,0.0, 480.0);
}




int main(int argc, char** argv)
{


    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (640, 480);
    glutInitWindowPosition (100, 150);
    glutCreateWindow ("DDA Line");

    cout<<"Enter an initial points:\t";
    cin>>X1;
    cin>>Y1;
    cout<<"Enter the final points:\t";
    cin>>X2;
  cin>>Y2;
    glutDisplayFunc(MidPoint);
    myInit ();
    glutMainLoop();

}
