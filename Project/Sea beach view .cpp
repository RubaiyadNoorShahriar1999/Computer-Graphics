#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include <Math.h>


GLfloat position = 0.0f;
GLfloat position2 =0.0f;
GLfloat position3 =0.0f;
GLfloat speed = 0.02f;
GLfloat speed2 =0.01f;
GLfloat speed3 =0.005f;

GLfloat i= 0.0f;

void update(int value) {

    if(position > 1.0)
        position = -1.2f;

    position += speed;


	glutPostRedisplay();
	glutTimerFunc(100, update, 0);



}


void update2(int value) {


if(position2 < -1.0)
position2 = 1.2f;


position2 -= speed2;


glutPostRedisplay();
glutTimerFunc(100, update2, 0);

}
void update3(int value){
if(position3 > 1.0)
    position3 = -1.2f;
position3 += speed3;

glutPostRedisplay();
glutTimerFunc(100, update3, 0);

}


void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{
		if (state == GLUT_DOWN)
		{
			speed += 0.009f;
			printf("clicked at (%d, %d)\n", x, y);
		}

	}
	else if(button ==GLUT_RIGHT_BUTTON)
    {
        if(state == GLUT_DOWN)
            {
            speed -=0.009f;
            printf("clicked at (%d, %d)\n", x, y);
        }
    }

	glutPostRedisplay();
}



void cloud1(){
    glPushMatrix();
glTranslatef(position3,0.0f, 0.0f);
 glBegin(GL_TRIANGLE_FAN);
glColor3ub(193,190,186);

 glVertex2f(-0.6f, 0.9f);
for(i = 0.0f; i <= 360; i++)
glVertex2f(0.04*cos(M_PI * i / 180.0) - 0.6, 0.06*sin(M_PI * i / 180.0) + 0.9);

 glEnd();

 glBegin(GL_TRIANGLE_FAN);
glColor3ub(193,190,186);

 glVertex2f(-0.55f, 0.9f);
for(i = 0.0f; i <= 360; i++)
glVertex2f(0.05*cos(M_PI * i / 180.0) - 0.55, 0.09*sin(M_PI * i / 180.0) + 0.9);

 glEnd();
  glBegin(GL_TRIANGLE_FAN);
glColor3ub(193,190,186);

 glVertex2f(-0.50f, 0.9f);
for(i = 0.0f; i <= 360; i++)
glVertex2f(0.04*cos(M_PI * i / 180.0) - 0.50, 0.06*sin(M_PI * i / 180.0) + 0.9);

 glEnd();
 //cloud 2
 glBegin(GL_TRIANGLE_FAN);
glColor3ub(193,190,186);

 glVertex2f(-0.8f, 0.8f);
for(i = 0.0f; i <= 360; i++)
glVertex2f(0.04*cos(M_PI * i / 180.0) - 0.8, 0.06*sin(M_PI * i / 180.0) + 0.8);

 glEnd();

 glBegin(GL_TRIANGLE_FAN);
glColor3ub(193,190,186);

 glVertex2f(-0.85f, 0.8f);
for(i = 0.0f; i <= 360; i++)
glVertex2f(0.05*cos(M_PI * i / 180.0) - 0.85, 0.09*sin(M_PI * i / 180.0) + 0.8);

 glEnd();
  glBegin(GL_TRIANGLE_FAN);
glColor3ub(193,190,186);

 glVertex2f(-0.90f, 0.8f);
for(i = 0.0f; i <= 360; i++)
glVertex2f(0.04*cos(M_PI * i / 180.0) - 0.90, 0.06*sin(M_PI * i / 180.0) + 0.8);

 glEnd();
 //cloud3
  glBegin(GL_TRIANGLE_FAN);
glColor3ub(193,190,186);

 glVertex2f(-0.3f, 0.77f);
for(i = 0.0f; i <= 360; i++)
glVertex2f(0.04*cos(M_PI * i / 180.0) - 0.3, 0.06*sin(M_PI * i / 180.0) + 0.77);

 glEnd();

 glBegin(GL_TRIANGLE_FAN);
glColor3ub(193,190,186);

 glVertex2f(-0.25f, 0.77f);
for(i = 0.0f; i <= 360; i++)
glVertex2f(0.05*cos(M_PI * i / 180.0) - 0.25, 0.09*sin(M_PI * i / 180.0) + 0.77);

 glEnd();

 glBegin(GL_TRIANGLE_FAN);
glColor3ub(193,190,186);
  glVertex2f(-0.20f, 0.77f);
for(i = 0.0f; i <= 360; i++)
glVertex2f(0.04*cos(M_PI * i / 180.0) - 0.20, 0.06*sin(M_PI * i / 180.0) + 0.77);

 glEnd();
 glPopMatrix();




}


void bird(){
    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2f(0.27f,0.64f);// 1st
glVertex2f(0.30f,0.63f);
glVertex2f(0.30f,0.63f);
glVertex2f(0.29f,0.62f);
glVertex2f(0.29f,0.62f);
glVertex2f(0.29f,0.62f);
glVertex2f(0.28f,0.61f);
glVertex2f(0.28f,0.60f);
glVertex2f(0.27f,0.62f);
glVertex2f(0.26f,0.62f);
glVertex2f(0.26f,0.62f);
glVertex2f(0.26f,0.63f);
glVertex2f(0.27f,0.64f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2f(0.29f,0.44f);// 2nd
glVertex2f(0.32f,0.43f);
glVertex2f(0.33f,0.43f);
glVertex2f(0.32f,0.42f);
glVertex2f(0.313f,0.422f);
glVertex2f(0.315f,0.414f);
glVertex2f(0.31f,0.40f);
glVertex2f(0.308f,0.417f);
glVertex2f(0.295f,0.414f);
glVertex2f(0.29f,0.422f);
glVertex2f(0.28f,0.43f);
glVertex2f(0.28f,0.431f);
glVertex2f(0.29f,0.43f);

 glEnd();
 glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2f(0.37f,0.517f);// 3rd
glVertex2f(0.39f,0.505f);
glVertex2f(0.405f,0.497f);
glVertex2f(0.39f,0.4914f);
glVertex2f(0.39f,0.494f);
glVertex2f(0.39f,0.488f);
glVertex2f(0.385f,0.488f);
glVertex2f(0.38f,0.48f);
glVertex2f(0.37f,0.494f);
glVertex2f(0.36f,0.4914f);
glVertex2f(0.366f,0.5f);
glVertex2f(0.363f,0.511f);
glVertex2f(0.37f,0.511f);

 glEnd();
 glPopMatrix();

}
void lighthouse(){
 glBegin(GL_QUADS);
 glColor3ub(128, 128, 128);
	glVertex2f(-0.21,0.3f);
	glVertex2f(-0.18f,0.3f);
	glVertex2f(-0.19f,0.35f);
	glVertex2f(-0.20,0.35f);
	glEnd();
	glBegin(GL_QUADS);
 glColor3ub(177,18,38);
	glVertex2f(-0.205,0.35f);
	glVertex2f(-0.185f,0.35f);
	glVertex2f(-0.185f,0.38f);
	glVertex2f(-0.205,0.38f);
	glEnd();

}
void lighthousenight(){
 glBegin(GL_QUADS);
 glColor3ub(133, 89, 136);
	glVertex2f(-0.21,0.3f);
	glVertex2f(-0.18f,0.3f);
	glVertex2f(-0.19f,0.35f);
	glVertex2f(-0.20,0.35f);
	glEnd();
	glBegin(GL_QUADS);
 glColor3ub(133, 89, 136);
	glVertex2f(-0.205,0.35f);
	glVertex2f(-0.185f,0.35f);
	glVertex2f(-0.185f,0.38f);
	glVertex2f(-0.205,0.38f);
	glEnd();
		glBegin(GL_QUADS);
 glColor3ub(255,255,255);
	glVertex2f(-0.203,0.36f);
	glVertex2f(-0.187f,0.36f);
	glVertex2f(-0.187f,0.37f);
	glVertex2f(-0.203,0.37f);
	glEnd();



}

void sky(){


    glBegin(GL_QUADS);
    glColor3ub(174, 225, 230); //sky

	glVertex2f(-1.0f, 0.3f);
	glVertex2f(1.0f, 0.3f);
	glVertex2f(1.0f, 1.0f);
	glVertex2f(-1.0f, 1.0f);


	glEnd();


}
void hills(){

	glBegin(GL_TRIANGLES);//hills
	glColor3ub(0,120,0);
	glVertex2f(-1.0f,0.3f);
	glVertex2f(-0.5f,0.3f);
	glVertex2f(-1.0f,0.6f);

	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(0,120,0);
	glVertex2f(-0.8f,0.3f);
	glVertex2f(-0.25f,0.3f);
	glVertex2f(-0.63f,0.5f);
	glEnd();
}
void ocean(){


    glBegin(GL_QUADS);
    glColor3ub(55, 159, 212);  //ocean

	glVertex2f(-1.0f, -0.3f);
	glVertex2f(1.0f, -0.3f);
	glVertex2f(1.0f, 0.3f);
	glVertex2f(-1.0f, 0.3f);

	glEnd();
}
void nightocean(){

    glBegin(GL_QUADS);
    glColor3ub(6,66,115);  //ocean

	glVertex2f(-1.0f, -0.3f);
	glVertex2f(1.0f, -0.3f);
	glVertex2f(1.0f, 0.3f);
	glVertex2f(-1.0f, 0.3f);

	glEnd();
}
void castle(){
glBegin(GL_QUADS);   //Sand Castle 2
	glColor3ub(212, 165, 95);

	glVertex2f(0.59f, -0.725f);
	glVertex2f(0.59f, -0.625f);
	glVertex2f(0.71f, -0.625f);
	glVertex2f(0.71f, -0.725f);

    glVertex2f(0.59f, -0.625f);
	glVertex2f(0.59f, -0.6f);
	glVertex2f(0.63f, -0.6f);
	glVertex2f(0.63f, -0.625f);

	glVertex2f(0.67f, -0.625f);
	glVertex2f(0.67f, -0.6f);
	glVertex2f(0.71f, -0.6f);
	glVertex2f(0.71f, -0.625f);



    glBegin(GL_QUADS);
	glColor3ub(194, 148, 79);

	glVertex2f(0.535f, -0.825f);
	glVertex2f(0.535f, -0.725f);
	glVertex2f(0.765f, -0.725f);
	glVertex2f(0.765f, -0.825f);

	glVertex2f(0.535f, -0.725f);
	glVertex2f(0.535f, -0.7f);
	glVertex2f(0.58f, -0.7f);
	glVertex2f(0.58f, -0.725f);

	glVertex2f(0.6f, -0.725f);
	glVertex2f(0.6f, -0.7f);
	glVertex2f(0.7f, -0.7f);
	glVertex2f(0.7f, -0.725f);

	glVertex2f(0.72f, -0.725f);
	glVertex2f(0.72f, -0.7f);
	glVertex2f(0.765f, -0.7f);
	glVertex2f(0.765f, -0.725f);



    glBegin(GL_QUADS);
	glColor3ub(173, 128, 61);

	glVertex2f(0.5f, -0.9f);
	glVertex2f(0.5f, -0.825f);
	glVertex2f(0.8f, -0.825f);
	glVertex2f(0.8f, -0.9f);

	glVertex2f(0.5f, -0.825f);
	glVertex2f(0.5f, -0.8f);
	glVertex2f(0.525f, -0.8f);
	glVertex2f(0.525f, -0.825f);

	glVertex2f(0.575f, -0.825f);
	glVertex2f(0.575f, -0.8f);
	glVertex2f(0.6f, -0.8f);
	glVertex2f(0.6f, -0.825f);

	glVertex2f(0.7f, -0.825f);
	glVertex2f(0.7f, -0.8f);
	glVertex2f(0.725f, -0.8f);
	glVertex2f(0.725f, -0.825f);

	glVertex2f(0.775f, -0.825f);
	glVertex2f(0.775f, -0.8f);
	glVertex2f(0.8f, -0.8f);
	glVertex2f(0.8f, -0.825f);

	glEnd();


    glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.65f, -0.625f);
    glVertex2f(0.65f, -0.5f);

    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f);

    glVertex2f(0.65f, -0.5f);
	glVertex2f(0.65f, -0.525f);
	glVertex2f(0.675f, -0.55f);

	glEnd();
}
void nightcastle(){
    glBegin(GL_QUADS);   //Sand Castle 2
	glColor3ub(166, 147, 131);

	glVertex2f(0.59f, -0.725f);
	glVertex2f(0.59f, -0.625f);
	glVertex2f(0.71f, -0.625f);
	glVertex2f(0.71f, -0.725f);

    glVertex2f(0.59f, -0.625f);
	glVertex2f(0.59f, -0.6f);
	glVertex2f(0.63f, -0.6f);
	glVertex2f(0.63f, -0.625f);

	glVertex2f(0.67f, -0.625f);
	glVertex2f(0.67f, -0.6f);
	glVertex2f(0.71f, -0.6f);
	glVertex2f(0.71f, -0.625f);



    glBegin(GL_QUADS);
	glColor3ub(143, 123, 106);

	glVertex2f(0.535f, -0.825f);
	glVertex2f(0.535f, -0.725f);
	glVertex2f(0.765f, -0.725f);
	glVertex2f(0.765f, -0.825f);

	glVertex2f(0.535f, -0.725f);
	glVertex2f(0.535f, -0.7f);
	glVertex2f(0.58f, -0.7f);
	glVertex2f(0.58f, -0.725f);

	glVertex2f(0.6f, -0.725f);
	glVertex2f(0.6f, -0.7f);
	glVertex2f(0.7f, -0.7f);
	glVertex2f(0.7f, -0.725f);

	glVertex2f(0.72f, -0.725f);
	glVertex2f(0.72f, -0.7f);
	glVertex2f(0.765f, -0.7f);
	glVertex2f(0.765f, -0.725f);



    glBegin(GL_QUADS);
	glColor3ub(94, 79, 66);

	glVertex2f(0.5f, -0.9f);
	glVertex2f(0.5f, -0.825f);
	glVertex2f(0.8f, -0.825f);
	glVertex2f(0.8f, -0.9f);

	glVertex2f(0.5f, -0.825f);
	glVertex2f(0.5f, -0.8f);
	glVertex2f(0.525f, -0.8f);
	glVertex2f(0.525f, -0.825f);

	glVertex2f(0.575f, -0.825f);
	glVertex2f(0.575f, -0.8f);
	glVertex2f(0.6f, -0.8f);
	glVertex2f(0.6f, -0.825f);

	glVertex2f(0.7f, -0.825f);
	glVertex2f(0.7f, -0.8f);
	glVertex2f(0.725f, -0.8f);
	glVertex2f(0.725f, -0.825f);

	glVertex2f(0.775f, -0.825f);
	glVertex2f(0.775f, -0.8f);
	glVertex2f(0.8f, -0.8f);
	glVertex2f(0.8f, -0.825f);

	glEnd();


    glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.65f, -0.625f);
    glVertex2f(0.65f, -0.5f);

    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f);

    glVertex2f(0.65f, -0.5f);
	glVertex2f(0.65f, -0.525f);
	glVertex2f(0.675f, -0.55f);

	glEnd();
}
void sand(){

    glBegin(GL_QUADS);
    glColor3ub(230, 197, 131);  //sand

	glVertex2f(-1.0f, -1.0f);
	glVertex2f(1.0f, -1.0f);
	glVertex2f(1.0f, -0.3f);
	glVertex2f(-1.0f, -0.3f);

	glEnd();

}
void starfish(){

	glBegin(GL_POLYGON);
    glColor3ub(232, 131, 49); //starfish



    glVertex2f(-0.85f, -0.5f);
    glVertex2f(-0.85f, -0.45f);
    glVertex2f(-0.75f, -0.45f);
    glVertex2f(-0.75f, -0.5f);
    glVertex2f(-0.8f, -0.55f);
    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3ub(232, 131, 49);



    glVertex2f(-0.85f, -0.45f); //1
    glVertex2f(-0.75f, -0.45f);
    glVertex2f(-0.8f, -0.375f);



    glVertex2f(-0.75f, -0.5f); //2
    glVertex2f(-0.75f, -0.45f);
    glVertex2f(-0.7f, -0.475f);

    glVertex2f(-0.8f, -0.55f); //3
    glVertex2f(-0.75f, -0.5f);
    glVertex2f(-0.725f, -0.575f);




    glVertex2f(-0.85f, -0.5f); //4
    glVertex2f(-0.8f, -0.55f);
    glVertex2f(-0.875f, -0.575f);



    glVertex2f(-0.85f, -0.5f); //5
    glVertex2f(-0.85f, -0.45f);
    glVertex2f(-0.9f, -0.475f);



    glEnd();



    glPointSize(5.0);//starfish
    glBegin(GL_POINTS);
    glColor3ub(207, 103, 19);
    glVertex2f(-0.8f, -0.425f);
    glVertex2f(-0.8f, -0.45f);
    glVertex2f(-0.8f, -0.475f);
    glVertex2f(-0.8f, -0.5f);
    glVertex2f(-0.8f, -0.525f);
    glVertex2f(-0.85f, -0.475f);
    glVertex2f(-0.8375f, -0.475f);
    glVertex2f(-0.825f, -0.475f);
    glVertex2f(-0.8125f, -0.475f);
    glVertex2f(-0.8f, -0.475f);
    glVertex2f(-0.7875f, -0.475f);
    glVertex2f(-0.775f, -0.475f);
    glVertex2f(-0.7625f, -0.475f);
    glVertex2f(-0.75f, -0.475f);
    glVertex2f(-0.825f, -0.525f);
    glVertex2f(-0.775f, -0.525f);



    glEnd();





}
void sun(){
    glBegin(GL_TRIANGLE_FAN);//SUN
    glColor3ub(252, 177, 3);

    glVertex2f(0.6, 0.75);
     for(i = 0.0f; i <= 360; i++)
    glVertex2f(0.12*cos(M_PI * i / 180.0) + 0.6, 0.15*sin(M_PI * i / 180.0) + 0.75);

    glEnd();


    glBegin(GL_TRIANGLE_FAN);//SUN
    glColor3ub(252, 177, 120);

    glVertex2f(0.6, 0.23);
     for(i = 0.0f; i <= 360; i++)
    glVertex2f(0.08*cos(M_PI * i / 180.0) + 0.6, 0.05*sin(M_PI * i / 180.0) + 0.23);

    glEnd();


}
void ship(){
    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);


    glBegin(GL_QUADS);
    glColor3ub(144,0.0,0.0);  //ship

	glVertex2f(0.3f, 0.0f);
	glVertex2f(0.8f, 0.0f);
	glVertex2f(1.0f, 0.2f);
	glVertex2f(0.1f, 0.2f);

	glEnd();



    glBegin(GL_QUADS);
    glColor3ub(64,52,52);

	glVertex2f(0.3f, 0.2f);
	glVertex2f(0.8f, 0.2f);
	glVertex2f(0.8f, 0.25f);
	glVertex2f(0.3f, 0.25f);

    glVertex2f(0.4f, 0.25f);
	glVertex2f(0.7f, 0.25f);
	glVertex2f(0.7f, 0.3f);
	glVertex2f(0.4f, 0.3f);

	glVertex2f(0.44f, 0.3f);
	glVertex2f(0.53f, 0.3f);
	glVertex2f(0.53f, 0.4f);
	glVertex2f(0.44f, 0.4f);

	glVertex2f(0.57f, 0.3f);
	glVertex2f(0.65f, 0.3f);
	glVertex2f(0.65f, 0.38f);
	glVertex2f(0.57f, 0.38f);


	glEnd();
	glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(0.46f, 0.25f);
	glVertex2f(0.46f, 0.3f);
	glVertex2f(0.505f, 0.3f);
	glVertex2f(0.505f, 0.25f);

	glVertex2f(0.59f, 0.25f);
	glVertex2f(0.59f, 0.3f);
	glVertex2f(0.63f, 0.3f);
	glVertex2f(0.63f, 0.25f);

	glEnd();


	glPopMatrix();

}
void nightship(){
     glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);


    glBegin(GL_QUADS);
    glColor3ub(144,0.0,0.0);  //ship

	glVertex2f(0.3f, 0.0f);
	glVertex2f(0.8f, 0.0f);
	glVertex2f(1.0f, 0.2f);
	glVertex2f(0.1f, 0.2f);

	glEnd();



    glBegin(GL_QUADS);
    glColor3ub(70,40,40);

	glVertex2f(0.3f, 0.2f);
	glVertex2f(0.8f, 0.2f);
	glVertex2f(0.8f, 0.25f);
	glVertex2f(0.3f, 0.25f);

    glVertex2f(0.4f, 0.25f);
	glVertex2f(0.7f, 0.25f);
	glVertex2f(0.7f, 0.3f);
	glVertex2f(0.4f, 0.3f);

	glVertex2f(0.44f, 0.3f);
	glVertex2f(0.53f, 0.3f);
	glVertex2f(0.53f, 0.4f);
	glVertex2f(0.44f, 0.4f);

	glVertex2f(0.57f, 0.3f);
	glVertex2f(0.65f, 0.3f);
	glVertex2f(0.65f, 0.38f);
	glVertex2f(0.57f, 0.38f);


	glEnd();
	glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(0.46f, 0.25f);
	glVertex2f(0.46f, 0.3f);
	glVertex2f(0.505f, 0.3f);
	glVertex2f(0.505f, 0.25f);

	glVertex2f(0.59f, 0.25f);
	glVertex2f(0.59f, 0.3f);
	glVertex2f(0.63f, 0.3f);
	glVertex2f(0.63f, 0.25f);

	glEnd();


	glPopMatrix();


}
void nightSky(){

    glBegin(GL_QUADS);
    glColor3ub(7, 11, 52); //sky

	glVertex2f(-1.0f, 0.3f);
	glVertex2f(1.0f, 0.3f);
	glVertex2f(1.0f, 1.0f);
	glVertex2f(-1.0f, 1.0f);


	glEnd();
	}
void star(){
    glBegin(GL_POINTS);// Star
    glPointSize(0.05);
	glColor3ub(254, 252, 215);
	glVertex2f(0.6f,0.59f);
	glEnd();

	glBegin(GL_POINTS);// Star
    glPointSize(0.05);
	glColor3ub(254, 252, 215);
	glVertex2f(0.10f,0.80f);
	glEnd();
	glBegin(GL_POINTS);// Star
    glPointSize(0.05);
	glColor3ub(254, 252, 215);
	glVertex2f(-0.20f,0.95f);
	glEnd();
	glBegin(GL_POINTS);// Star
    glPointSize(0.05);
	glColor3ub(254, 252, 215);
	glVertex2f(0.8f,0.90f);
	glEnd();
	glBegin(GL_POINTS);// Star
    glPointSize(0.05);
	glColor3ub(254, 252, 215);
	glVertex2f(0.4f,0.75f);
	glEnd();
	glBegin(GL_POINTS);// Star
    glPointSize(0.05);
	glColor3ub(254, 252, 215);
	glVertex2f(-0.95f,0.90f);
	glEnd();
	glBegin(GL_POINTS);// Star
    glPointSize(0.05);
	glColor3ub(254, 252, 215);
	glVertex2f(-0.80f,0.70f);
	glEnd();
	glBegin(GL_POINTS);// Star
    glPointSize(0.05);
	glColor3ub(254, 252, 215);
	glVertex2f(-0.30f,0.50f);
	glEnd();
    glBegin(GL_POINTS);// Star
    glPointSize(0.05);
	glColor3ub(254, 252, 215);
	glVertex2f(-0.10f,0.40f);
	glEnd();



}
void day() {

   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();
    sky();
    ocean();
    sun();
    hills();
    lighthouse();
    bird();
    cloud1();


    sand();
    castle();

    ship();
    starfish();

glFlush();


}
void nightsand(){
  glBegin(GL_QUADS);
    glColor3ub(125, 105, 52);  //sand

	glVertex2f(-1.0f, -1.0f);
	glVertex2f(1.0f, -1.0f);
	glVertex2f(1.0f, -0.3f);
	glVertex2f(-1.0f, -0.3f);

	glEnd();

}
void moon(){
      glBegin(GL_TRIANGLE_FAN);//Moon
    glColor3ub(254, 252, 215);

    glVertex2f(-0.6, 0.75);
     for(i = 0.0f; i <= 360; i++)
    glVertex2f(0.10*cos(M_PI * i / 180.0) + (-0.6), 0.15*sin(M_PI * i / 180.0) + 0.75);

    glEnd();

    glBegin(GL_TRIANGLE_FAN);//Moon
    glColor3ub(218, 240, 245);

    glVertex2f(-0.6, 0.20);
     for(i = 0.0f; i <= 360; i++)
    glVertex2f(0.05*cos(M_PI * i / 180.0) + (-0.6), 0.05*sin(M_PI * i / 180.0) +0.20);

    glEnd();


}
void night() {
   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();
   nightSky();

   hills();
   lighthousenight();
   star();
   nightocean();
    moon();
   nightship();
   nightsand();
   nightcastle();
   starfish();




   glFlush();


}

void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

case 's':
    speed = 0.0f;
    break;
case 'd':
    speed = 0.05f;
    break;
case 'a':
    speed =-0.05f;
    break;
case'n':
       glutDisplayFunc(night);
        glutPostRedisplay();
        break;
case'z':
        glutDisplayFunc(day);
        glutPostRedisplay();
        break;



	}

}




int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(1200, 600);
   glutInitWindowPosition(100, 150);
   glutCreateWindow("SEA AND BEACH VIEW");
   glutDisplayFunc(day);
   init();
   glutKeyboardFunc(handleKeypress);
   glutMouseFunc(handleMouse);
   glutTimerFunc(100, update, 0);
   glutTimerFunc(100, update2, 0);
   glutTimerFunc(100, update3, 0);
   glutMainLoop();
   return 0;
}
