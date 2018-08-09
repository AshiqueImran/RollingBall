#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <cstdlib>
#include <ctime>

#include <GL/glu.h>
#include <GL/glut.h>



//Initializes 3D rendering
void initRendering() {
	glEnable(GL_DEPTH_TEST);
}


//random number generator
float getRamdomNum(float min, float max){
	srand((unsigned)time(0));
	float range = (max - min);
	float rand_num = min + float((range * rand()) / (RAND_MAX + 1.0));
	return rand_num;
}

//for text
void drawStrokeText(char*string,float x)
{
	  char *c;
	  glPushMatrix();
	  glTranslatef(-x, 2.3, 0.0);
      glScalef(0.001f,0.0014f,0);

	  for (c=string; *c != '\0'; c++)
	  {
    		glutStrokeCharacter(GLUT_STROKE_ROMAN , *c);
	  }
	  glPopMatrix();
}

//rander text
void render(float x)
{


	glColor3f(1,1,1);
	drawStrokeText("Press w or (space)=jump, a=move-left, d=move-right, p=pause, s=start",x);
	glutPostRedisplay();

}


//Called when the window is resized
void handleResize(int w, int h) {
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, (double)w / (double)h, 1.0, 200.0);
}

float _angle = 0.0;
float _cameraAngle = 0.0;
float _ang_tri = 0.0;
float pixel=0,ballPlace=0,ballUp=-0.2;
int wSize=400,gameOn=1,timeFlag,timeFlagForText=0;


void keyboard(unsigned char key, int x, int y)
{
    if(key=='s')
    {
        gameOn=1;
        glutPostRedisplay();
    }
    else if(key=='p')
    {
        gameOn=0;
        glutPostRedisplay();
    }
    else if(key=='a')
    {
        if(ballPlace>-3)
        {
           ballPlace=ballPlace-1;
           glutPostRedisplay();
        }

    }
    else if(key=='d')
    {
        if(ballPlace<3)
        {
           ballPlace=ballPlace+1;
           glutPostRedisplay();
        }
    }
    else if(key=='w' || key==' ')
    {
        if(ballUp != 1)
        {
            ballUp=1;
            timeFlag=0;
            glutPostRedisplay();
        }


    }

}

//Draws the 3D scene
void drawScene() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW); //Switch to the drawing perspective
	glLoadIdentity(); //Reset the drawing perspective
	glRotatef(-_cameraAngle, 0.0, 1.0, 0.0); //Rotate the camera
	glTranslatef(0.0, 0.0, -7.0); //Move forward 5 units

    if(timeFlagForText<300)
    {
        render(2.5);
    }


	//ball
    glPushMatrix();
    glTranslatef(ballPlace,ballUp,0);
    glRotatef(90,1,0,0);
    glRotatef(_angle,0,1,0);
    glColor3f(0,1,0);
    glutSolidSphere(.5 ,20,20);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(pixel,0,0);


    glPushMatrix();
    glTranslatef(0,.2,0);

//purple building
    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-2.7,0.2,0);
    glVertex3f(-2.4,0.2,0);
    glVertex3f(-2.4,0.5,0);
    glVertex3f(-2.7,0.5,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-2.1,0.2,0);
    glVertex3f(-1.8,0.2,0);
    glVertex3f(-1.8,0.5,0);
    glVertex3f(-2.1,0.5,0);
    glEnd();


    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-2.7,0.8,0);
    glVertex3f(-2.4,0.8,0);
    glVertex3f(-2.4,1.1,0);
    glVertex3f(-2.7,1.1,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-2.1,0.8,0);
    glVertex3f(-1.8,0.8,0);
    glVertex3f(-1.8,1.1,0);
    glVertex3f(-2.1,1.1,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-2.7,1.4,0);
    glVertex3f(-2.4,1.4,0);
    glVertex3f(-2.4,1.7,0);
    glVertex3f(-2.7,1.7,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-2.1,1.4,0);
    glVertex3f(-1.8,1.4,0);
    glVertex3f(-1.8,1.7,0);
    glVertex3f(-2.1,1.7,0);
    glEnd();

    glColor3f(1,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(-3,0,0);
    glVertex3f(-1.5,0,0);
    glVertex3f(-1.5,2,0);
    glVertex3f(-3,2,0);
    glEnd();

//magenta building

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.6,1,0);
    glVertex3f(-1.3,1,0);
    glVertex3f(-1.3,1.3,0);
    glVertex3f(-1.6,1.3,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.6,1.6,0);
    glVertex3f(-1.3,1.6,0);
    glVertex3f(-1.3,1.9,0);
    glVertex3f(-1.6,1.9,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.6,2.2,0);
    glVertex3f(-1.3,2.2,0);
    glVertex3f(-1.3,2.5,0);
    glVertex3f(-1.6,2.5,0);
    glEnd();


    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-2.2,1,0);
    glVertex3f(-1.9,1,0);
    glVertex3f(-1.9,1.3,0);
    glVertex3f(-2.2,1.3,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-2.2,1.6,0);
    glVertex3f(-1.9,1.6,0);
    glVertex3f(-1.9,1.9,0);
    glVertex3f(-2.2,1.9,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-2.2,2.2,0);
    glVertex3f(-1.9,2.2,0);
    glVertex3f(-1.9,2.5,0);
    glVertex3f(-2.2,2.5,0);
    glEnd();



    glColor3f(1,0,0.25);
    glBegin(GL_POLYGON);
    glVertex3f(-2.5,0.7,0);
    glVertex3f(-1,0.7,0);
    glVertex3f(-1,2.8,0);
    glVertex3f(-2.5,2.8,0);
    glEnd();


//blue building
    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(0.9,0.3,0);
    glVertex3f(1.2,0.3,0);
    glVertex3f(1.2,0.6,0);
    glVertex3f(0.9,0.6,0);
    glEnd();


    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(1.6,0.3,0);
    glVertex3f(1.9,0.3,0);
    glVertex3f(1.9,0.6,0);
    glVertex3f(1.6,0.6,0);
    glEnd();


    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(0.9,0.9,0);
    glVertex3f(1.2,0.9,0);
    glVertex3f(1.2,1.2,0);
    glVertex3f(0.9,1.2,0);
    glEnd();


    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(1.6,0.9,0);
    glVertex3f(1.9,0.9,0);
    glVertex3f(1.9,1.2,0);
    glVertex3f(1.6,1.2,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(0.9,1.5,0);
    glVertex3f(1.2,1.5,0);
    glVertex3f(1.2,1.8,0);
    glVertex3f(0.9,1.8,0);
    glEnd();


    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(1.6,1.5,0);
    glVertex3f(1.9,1.5,0);
    glVertex3f(1.9,1.8,0);
    glVertex3f(1.6,1.8,0);
    glEnd();


    glColor3f(0.28,0.23,0.54);
    glBegin(GL_POLYGON);
    glVertex3f(0.5,0,0);
    glVertex3f(2.3,0,0);
    glVertex3f(2.3,2.1,0);
    glVertex3f(0.5,2.1,0);
    glEnd();

//green building

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.1,1.2,0);
    glVertex3f(0.2,1.2,0);
    glVertex3f(0.2,1.5,0);
    glVertex3f(-0.1,1.5,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(0.8,1.2,0);
    glVertex3f(1.1,1.2,0);
    glVertex3f(1.1,1.5,0);
    glVertex3f(0.8,1.5,0);
    glEnd();




    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.1,1.8,0);
    glVertex3f(0.2,1.8,0);
    glVertex3f(0.2,2.1,0);
    glVertex3f(-0.1,2.1,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(0.8,1.8,0);
    glVertex3f(1.1,1.8,0);
    glVertex3f(1.1,2.1,0);
    glVertex3f(0.8,2.1,0);
    glEnd();


    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.1,2.4,0);
    glVertex3f(0.2,2.4,0);
    glVertex3f(0.2,2.7,0);
    glVertex3f(-0.1,2.7,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(0.8,2.4,0);
    glVertex3f(1.1,2.4,0);
    glVertex3f(1.1,2.7,0);
    glVertex3f(0.8,2.7,0);
    glEnd();



    glColor3f(0.196,0.803,0.196);
    glBegin(GL_POLYGON);
    glVertex3f(-0.5,0.9,0);
    glVertex3f(1.5,0.9,0);
    glVertex3f(1.5,3,0);
    glVertex3f(-0.5,3,0);
    glEnd();

//orange building

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(1.9,1.2,0);
    glVertex3f(2.2,1.2,0);
    glVertex3f(2.2,1.5,0);
    glVertex3f(1.9,1.5,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(2.5,1.2,0);
    glVertex3f(2.8,1.2,0);
    glVertex3f(2.8,1.5,0);
    glVertex3f(2.5,1.5,0);
    glEnd();


    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(1.9,1.8,0);
    glVertex3f(2.2,1.8,0);
    glVertex3f(2.2,2.1,0);
    glVertex3f(1.9,2.1,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(2.5,1.8,0);
    glVertex3f(2.8,1.8,0);
    glVertex3f(2.8,2.1,0);
    glVertex3f(2.5,2.1,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(1.9,2.4,0);
    glVertex3f(2.2,2.4,0);
    glVertex3f(2.2,2.7,0);
    glVertex3f(1.9,2.7,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(2.5,2.4,0);
    glVertex3f(2.8,2.4,0);
    glVertex3f(2.8,2.7,0);
    glVertex3f(2.5,2.7,0);
    glEnd();


    glColor3f(1,0.27,0);
    glBegin(GL_POLYGON);
    glVertex3f(1.6,0.9,0);
    glVertex3f(3.1,0.9,0);
    glVertex3f(3.1,3,0);
    glVertex3f(1.6,3,0);
    glEnd();

//road

//zebra start

    glColor3f(0.54,0.52,0.509);
    glBegin(GL_POLYGON);
    glVertex3f(-4.1,-2.6,0);
    glVertex3f(-3.7,-2.5,0);
    glVertex3f(-3.7,-2.2,0);
    glVertex3f(-4.1,-2.3,0);
    glEnd();

   glColor3f(0.54,0.52,0.509);
    glBegin(GL_POLYGON);
    glVertex3f(-4.1,-2,0);
    glVertex3f(-3.7,-1.9,0);
    glVertex3f(-3.7,-1.6,0);
    glVertex3f(-4.1,-1.7,0);
    glEnd();

   glColor3f(0.54,0.52,0.509);
    glBegin(GL_POLYGON);
    glVertex3f(-4.1,-1.4,0);
    glVertex3f(-3.7,-1.3,0);
    glVertex3f(-3.7,-1,0);
    glVertex3f(-4.1,-1.1,0);
    glEnd();


    glColor3f(0.54,0.52,0.509);
    glBegin(GL_POLYGON);
    glVertex3f(-4.1,-0.8,0);
    glVertex3f(-3.7,-0.7,0);
    glVertex3f(-3.7,-0.4,0);
    glVertex3f(-4.1,-0.5,0);
    glEnd();


    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(-4.2,-2.7,0);
    glVertex3f(-3.6,-2.7,0);
    glVertex3f(-3.6,-0.39,0);
    glVertex3f(-4.2,-0.4,0);
    glEnd();

//zebra end


    glColor3f(0.803,0.77,0.74);
    glBegin(GL_POLYGON);
    glVertex3f(-3.9,-2.1,0);
    glVertex3f(-1.9,-2,0);
    glVertex3f(-1.9,-1.35,0);
    glVertex3f(-3.9,-1.45,0);
    glEnd();

    glColor3f(0.803,0.77,0.74);
    glBegin(GL_POLYGON);
    glVertex3f(-1.2,-2,0);
    glVertex3f(0.7,-1.9,0);
    glVertex3f(0.7,-1.25,0);
    glVertex3f(-1.2,-1.35,0);
    glEnd();


    glColor3f(0.803,0.77,0.74);
    glBegin(GL_POLYGON);
    glVertex3f(1.4,-1.9,0);
    glVertex3f(3.4,-1.8,0);
    glVertex3f(3.4,-1.15,0);
    glVertex3f(1.4,-1.25,0);
    glEnd();




    glColor3f(0.54,0.52,0.509);
    glBegin(GL_POLYGON);
    glVertex3f(-4,-2.7,0);
    glVertex3f(4,-2.5,0);
    glVertex3f(4,-0.2,0);
    glVertex3f(-4,-0.4,0);
    glEnd();



//sand

    glColor3f(0.93,0.86,0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-4,-0.4,0);
    glVertex3f(4,-0.4,0);
    glVertex3f(4,1.8,0);
    glVertex3f(-4,1.6,0);
    glEnd();

//sky

    glColor3f(0,0.74,1);
    glBegin(GL_POLYGON);
    glVertex3f(-4,1.5,0);
    glVertex3f(4,1.5,0);
    glVertex3f(4,3,0);
    glVertex3f(-4,3,0);
    glEnd();





    glPopMatrix();




//2nd scenery
    glPushMatrix();
    glTranslatef(-8,0,0);

//purple building
    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-2.7,0.2,0);
    glVertex3f(-2.4,0.2,0);
    glVertex3f(-2.4,0.5,0);
    glVertex3f(-2.7,0.5,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-2.1,0.2,0);
    glVertex3f(-1.8,0.2,0);
    glVertex3f(-1.8,0.5,0);
    glVertex3f(-2.1,0.5,0);
    glEnd();


    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-2.7,0.8,0);
    glVertex3f(-2.4,0.8,0);
    glVertex3f(-2.4,1.1,0);
    glVertex3f(-2.7,1.1,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-2.1,0.8,0);
    glVertex3f(-1.8,0.8,0);
    glVertex3f(-1.8,1.1,0);
    glVertex3f(-2.1,1.1,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-2.7,1.4,0);
    glVertex3f(-2.4,1.4,0);
    glVertex3f(-2.4,1.7,0);
    glVertex3f(-2.7,1.7,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-2.1,1.4,0);
    glVertex3f(-1.8,1.4,0);
    glVertex3f(-1.8,1.7,0);
    glVertex3f(-2.1,1.7,0);
    glEnd();

    glColor3f(1,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(-3,0,0);
    glVertex3f(-1.5,0,0);
    glVertex3f(-1.5,2,0);
    glVertex3f(-3,2,0);
    glEnd();

//magenta building

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.6,1,0);
    glVertex3f(-1.3,1,0);
    glVertex3f(-1.3,1.3,0);
    glVertex3f(-1.6,1.3,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.6,1.6,0);
    glVertex3f(-1.3,1.6,0);
    glVertex3f(-1.3,1.9,0);
    glVertex3f(-1.6,1.9,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.6,2.2,0);
    glVertex3f(-1.3,2.2,0);
    glVertex3f(-1.3,2.5,0);
    glVertex3f(-1.6,2.5,0);
    glEnd();


    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-2.2,1,0);
    glVertex3f(-1.9,1,0);
    glVertex3f(-1.9,1.3,0);
    glVertex3f(-2.2,1.3,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-2.2,1.6,0);
    glVertex3f(-1.9,1.6,0);
    glVertex3f(-1.9,1.9,0);
    glVertex3f(-2.2,1.9,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-2.2,2.2,0);
    glVertex3f(-1.9,2.2,0);
    glVertex3f(-1.9,2.5,0);
    glVertex3f(-2.2,2.5,0);
    glEnd();



    glColor3f(1,0,0.25);
    glBegin(GL_POLYGON);
    glVertex3f(-2.5,0.7,0);
    glVertex3f(-1,0.7,0);
    glVertex3f(-1,2.8,0);
    glVertex3f(-2.5,2.8,0);
    glEnd();


//blue building
    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(0.9,0.3,0);
    glVertex3f(1.2,0.3,0);
    glVertex3f(1.2,0.6,0);
    glVertex3f(0.9,0.6,0);
    glEnd();


    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(1.6,0.3,0);
    glVertex3f(1.9,0.3,0);
    glVertex3f(1.9,0.6,0);
    glVertex3f(1.6,0.6,0);
    glEnd();


    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(0.9,0.9,0);
    glVertex3f(1.2,0.9,0);
    glVertex3f(1.2,1.2,0);
    glVertex3f(0.9,1.2,0);
    glEnd();


    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(1.6,0.9,0);
    glVertex3f(1.9,0.9,0);
    glVertex3f(1.9,1.2,0);
    glVertex3f(1.6,1.2,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(0.9,1.5,0);
    glVertex3f(1.2,1.5,0);
    glVertex3f(1.2,1.8,0);
    glVertex3f(0.9,1.8,0);
    glEnd();


    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(1.6,1.5,0);
    glVertex3f(1.9,1.5,0);
    glVertex3f(1.9,1.8,0);
    glVertex3f(1.6,1.8,0);
    glEnd();


    glColor3f(0.28,0.23,0.54);
    glBegin(GL_POLYGON);
    glVertex3f(0.5,0,0);
    glVertex3f(2.3,0,0);
    glVertex3f(2.3,2.1,0);
    glVertex3f(0.5,2.1,0);
    glEnd();

//green building

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.1,1.2,0);
    glVertex3f(0.2,1.2,0);
    glVertex3f(0.2,1.5,0);
    glVertex3f(-0.1,1.5,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(0.8,1.2,0);
    glVertex3f(1.1,1.2,0);
    glVertex3f(1.1,1.5,0);
    glVertex3f(0.8,1.5,0);
    glEnd();




    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.1,1.8,0);
    glVertex3f(0.2,1.8,0);
    glVertex3f(0.2,2.1,0);
    glVertex3f(-0.1,2.1,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(0.8,1.8,0);
    glVertex3f(1.1,1.8,0);
    glVertex3f(1.1,2.1,0);
    glVertex3f(0.8,2.1,0);
    glEnd();


    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.1,2.4,0);
    glVertex3f(0.2,2.4,0);
    glVertex3f(0.2,2.7,0);
    glVertex3f(-0.1,2.7,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(0.8,2.4,0);
    glVertex3f(1.1,2.4,0);
    glVertex3f(1.1,2.7,0);
    glVertex3f(0.8,2.7,0);
    glEnd();



    glColor3f(0.196,0.803,0.196);
    glBegin(GL_POLYGON);
    glVertex3f(-0.5,0.9,0);
    glVertex3f(1.5,0.9,0);
    glVertex3f(1.5,3,0);
    glVertex3f(-0.5,3,0);
    glEnd();

//orange building

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(1.9,1.2,0);
    glVertex3f(2.2,1.2,0);
    glVertex3f(2.2,1.5,0);
    glVertex3f(1.9,1.5,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(2.5,1.2,0);
    glVertex3f(2.8,1.2,0);
    glVertex3f(2.8,1.5,0);
    glVertex3f(2.5,1.5,0);
    glEnd();


    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(1.9,1.8,0);
    glVertex3f(2.2,1.8,0);
    glVertex3f(2.2,2.1,0);
    glVertex3f(1.9,2.1,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(2.5,1.8,0);
    glVertex3f(2.8,1.8,0);
    glVertex3f(2.8,2.1,0);
    glVertex3f(2.5,2.1,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(1.9,2.4,0);
    glVertex3f(2.2,2.4,0);
    glVertex3f(2.2,2.7,0);
    glVertex3f(1.9,2.7,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(2.5,2.4,0);
    glVertex3f(2.8,2.4,0);
    glVertex3f(2.8,2.7,0);
    glVertex3f(2.5,2.7,0);
    glEnd();


    glColor3f(1,0.27,0);
    glBegin(GL_POLYGON);
    glVertex3f(1.6,0.9,0);
    glVertex3f(3.1,0.9,0);
    glVertex3f(3.1,3,0);
    glVertex3f(1.6,3,0);
    glEnd();

//road


//zebra start

    glColor3f(0.54,0.52,0.509);
    glBegin(GL_POLYGON);
    glVertex3f(-4.1,-2.6,0);
    glVertex3f(-3.7,-2.5,0);
    glVertex3f(-3.7,-2.2,0);
    glVertex3f(-4.1,-2.3,0);
    glEnd();

   glColor3f(0.54,0.52,0.509);
    glBegin(GL_POLYGON);
    glVertex3f(-4.1,-2,0);
    glVertex3f(-3.7,-1.9,0);
    glVertex3f(-3.7,-1.6,0);
    glVertex3f(-4.1,-1.7,0);
    glEnd();

   glColor3f(0.54,0.52,0.509);
    glBegin(GL_POLYGON);
    glVertex3f(-4.1,-1.4,0);
    glVertex3f(-3.7,-1.3,0);
    glVertex3f(-3.7,-1,0);
    glVertex3f(-4.1,-1.1,0);
    glEnd();


    glColor3f(0.54,0.52,0.509);
    glBegin(GL_POLYGON);
    glVertex3f(-4.1,-0.8,0);
    glVertex3f(-3.7,-0.7,0);
    glVertex3f(-3.7,-0.4,0);
    glVertex3f(-4.1,-0.5,0);
    glEnd();


    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(-4.2,-2.7,0);
    glVertex3f(-3.6,-2.7,0);
    glVertex3f(-3.6,-0.39,0);
    glVertex3f(-4.2,-0.4,0);
    glEnd();

//zebra end



    glColor3f(0.803,0.77,0.74);
    glBegin(GL_POLYGON);
    glVertex3f(-3.9,-2.1,0);
    glVertex3f(-1.9,-2,0);
    glVertex3f(-1.9,-1.35,0);
    glVertex3f(-3.9,-1.45,0);
    glEnd();

    glColor3f(0.803,0.77,0.74);
    glBegin(GL_POLYGON);
    glVertex3f(-1.2,-2,0);
    glVertex3f(0.7,-1.9,0);
    glVertex3f(0.7,-1.25,0);
    glVertex3f(-1.2,-1.35,0);
    glEnd();


    glColor3f(0.803,0.77,0.74);
    glBegin(GL_POLYGON);
    glVertex3f(1.4,-1.9,0);
    glVertex3f(3.4,-1.8,0);
    glVertex3f(3.4,-1.15,0);
    glVertex3f(1.4,-1.25,0);
    glEnd();




    glColor3f(0.54,0.52,0.509);
    glBegin(GL_POLYGON);
    glVertex3f(-4,-2.5,0);
    glVertex3f(4,-2.5,0);
    glVertex3f(4,-0.2,0);
    glVertex3f(-4,-0.4,0);
    glEnd();



//sand

    glColor3f(0.93,0.86,0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-4,-0.4,0);
    glVertex3f(4,-0.2,0);
    glVertex3f(4,1.8,0);
    glVertex3f(-4,1.5,0);
    glEnd();

//sky

    glColor3f(0,0.74,1);
    glBegin(GL_POLYGON);
    glVertex3f(-4,1.5,0);
    glVertex3f(4,1.5,0);
    glVertex3f(4,3,0);
    glVertex3f(-4,3,0);
    glEnd();


glPopMatrix();

//3rd scenery

    glPushMatrix();
    glTranslatef(-16,0,0);

//purple building

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-2.7,0.2,0);
    glVertex3f(-2.4,0.2,0);
    glVertex3f(-2.4,0.5,0);
    glVertex3f(-2.7,0.5,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-2.1,0.2,0);
    glVertex3f(-1.8,0.2,0);
    glVertex3f(-1.8,0.5,0);
    glVertex3f(-2.1,0.5,0);
    glEnd();


    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-2.7,0.8,0);
    glVertex3f(-2.4,0.8,0);
    glVertex3f(-2.4,1.1,0);
    glVertex3f(-2.7,1.1,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-2.1,0.8,0);
    glVertex3f(-1.8,0.8,0);
    glVertex3f(-1.8,1.1,0);
    glVertex3f(-2.1,1.1,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-2.7,1.4,0);
    glVertex3f(-2.4,1.4,0);
    glVertex3f(-2.4,1.7,0);
    glVertex3f(-2.7,1.7,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-2.1,1.4,0);
    glVertex3f(-1.8,1.4,0);
    glVertex3f(-1.8,1.7,0);
    glVertex3f(-2.1,1.7,0);
    glEnd();

    glColor3f(1,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(-3,0,0);
    glVertex3f(-1.5,0,0);
    glVertex3f(-1.5,2,0);
    glVertex3f(-3,2,0);
    glEnd();

//magenta building

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.6,1,0);
    glVertex3f(-1.3,1,0);
    glVertex3f(-1.3,1.3,0);
    glVertex3f(-1.6,1.3,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.6,1.6,0);
    glVertex3f(-1.3,1.6,0);
    glVertex3f(-1.3,1.9,0);
    glVertex3f(-1.6,1.9,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.6,2.2,0);
    glVertex3f(-1.3,2.2,0);
    glVertex3f(-1.3,2.5,0);
    glVertex3f(-1.6,2.5,0);
    glEnd();


    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-2.2,1,0);
    glVertex3f(-1.9,1,0);
    glVertex3f(-1.9,1.3,0);
    glVertex3f(-2.2,1.3,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-2.2,1.6,0);
    glVertex3f(-1.9,1.6,0);
    glVertex3f(-1.9,1.9,0);
    glVertex3f(-2.2,1.9,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-2.2,2.2,0);
    glVertex3f(-1.9,2.2,0);
    glVertex3f(-1.9,2.5,0);
    glVertex3f(-2.2,2.5,0);
    glEnd();



    glColor3f(1,0,0.25);
    glBegin(GL_POLYGON);
    glVertex3f(-2.5,0.7,0);
    glVertex3f(-1,0.7,0);
    glVertex3f(-1,2.8,0);
    glVertex3f(-2.5,2.8,0);
    glEnd();


//blue building
    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(0.9,0.3,0);
    glVertex3f(1.2,0.3,0);
    glVertex3f(1.2,0.6,0);
    glVertex3f(0.9,0.6,0);
    glEnd();


    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(1.6,0.3,0);
    glVertex3f(1.9,0.3,0);
    glVertex3f(1.9,0.6,0);
    glVertex3f(1.6,0.6,0);
    glEnd();


    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(0.9,0.9,0);
    glVertex3f(1.2,0.9,0);
    glVertex3f(1.2,1.2,0);
    glVertex3f(0.9,1.2,0);
    glEnd();


    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(1.6,0.9,0);
    glVertex3f(1.9,0.9,0);
    glVertex3f(1.9,1.2,0);
    glVertex3f(1.6,1.2,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(0.9,1.5,0);
    glVertex3f(1.2,1.5,0);
    glVertex3f(1.2,1.8,0);
    glVertex3f(0.9,1.8,0);
    glEnd();


    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(1.6,1.5,0);
    glVertex3f(1.9,1.5,0);
    glVertex3f(1.9,1.8,0);
    glVertex3f(1.6,1.8,0);
    glEnd();


    glColor3f(0.28,0.23,0.54);
    glBegin(GL_POLYGON);
    glVertex3f(0.5,0,0);
    glVertex3f(2.3,0,0);
    glVertex3f(2.3,2.1,0);
    glVertex3f(0.5,2.1,0);
    glEnd();

//green building

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.1,1.2,0);
    glVertex3f(0.2,1.2,0);
    glVertex3f(0.2,1.5,0);
    glVertex3f(-0.1,1.5,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(0.8,1.2,0);
    glVertex3f(1.1,1.2,0);
    glVertex3f(1.1,1.5,0);
    glVertex3f(0.8,1.5,0);
    glEnd();


    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.1,1.8,0);
    glVertex3f(0.2,1.8,0);
    glVertex3f(0.2,2.1,0);
    glVertex3f(-0.1,2.1,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(0.8,1.8,0);
    glVertex3f(1.1,1.8,0);
    glVertex3f(1.1,2.1,0);
    glVertex3f(0.8,2.1,0);
    glEnd();


    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.1,2.4,0);
    glVertex3f(0.2,2.4,0);
    glVertex3f(0.2,2.7,0);
    glVertex3f(-0.1,2.7,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(0.8,2.4,0);
    glVertex3f(1.1,2.4,0);
    glVertex3f(1.1,2.7,0);
    glVertex3f(0.8,2.7,0);
    glEnd();



    glColor3f(0.196,0.803,0.196);
    glBegin(GL_POLYGON);
    glVertex3f(-0.5,0.9,0);
    glVertex3f(1.5,0.9,0);
    glVertex3f(1.5,3,0);
    glVertex3f(-0.5,3,0);
    glEnd();

//orange building

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(1.9,1.2,0);
    glVertex3f(2.2,1.2,0);
    glVertex3f(2.2,1.5,0);
    glVertex3f(1.9,1.5,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(2.5,1.2,0);
    glVertex3f(2.8,1.2,0);
    glVertex3f(2.8,1.5,0);
    glVertex3f(2.5,1.5,0);
    glEnd();


    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(1.9,1.8,0);
    glVertex3f(2.2,1.8,0);
    glVertex3f(2.2,2.1,0);
    glVertex3f(1.9,2.1,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(2.5,1.8,0);
    glVertex3f(2.8,1.8,0);
    glVertex3f(2.8,2.1,0);
    glVertex3f(2.5,2.1,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(1.9,2.4,0);
    glVertex3f(2.2,2.4,0);
    glVertex3f(2.2,2.7,0);
    glVertex3f(1.9,2.7,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(2.5,2.4,0);
    glVertex3f(2.8,2.4,0);
    glVertex3f(2.8,2.7,0);
    glVertex3f(2.5,2.7,0);
    glEnd();


   glColor3f(1,0.27,0);
    glBegin(GL_POLYGON);
    glVertex3f(1.6,0.9,0);
    glVertex3f(3.1,0.9,0);
    glVertex3f(3.1,3,0);
    glVertex3f(1.6,3,0);
    glEnd();

//road


//zebra start

    glColor3f(0.54,0.52,0.509);
    glBegin(GL_POLYGON);
    glVertex3f(-4.5,-2.6,0);
    glVertex3f(-4,-2.5,0);
    glVertex3f(-4,-2.2,0);
    glVertex3f(-4.5,-2.3,0);
    glEnd();

   glColor3f(0.54,0.52,0.509);
    glBegin(GL_POLYGON);
    glVertex3f(-4.5,-2,0);
    glVertex3f(-4,-1.9,0);
    glVertex3f(-4,-1.6,0);
    glVertex3f(-4.5,-1.7,0);
    glEnd();

   glColor3f(0.54,0.52,0.509);
    glBegin(GL_POLYGON);
    glVertex3f(-4.5,-1.4,0);
    glVertex3f(-4,-1.3,0);
    glVertex3f(-4,-1,0);
    glVertex3f(-4.5,-1.1,0);
    glEnd();


    glColor3f(0.54,0.52,0.509);
    glBegin(GL_POLYGON);
    glVertex3f(-4.5,-0.8,0);
    glVertex3f(-4,-0.7,0);
    glVertex3f(-4,-0.4,0);
    glVertex3f(-4.5,-0.5,0);
    glEnd();


    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(-4.6,-2.7,0);
    glVertex3f(-4,-2.6,0);
    glVertex3f(-4,-0.39,0);
    glVertex3f(-4.6,-0.4,0);
    glEnd();

//zebra end



    glColor3f(0.803,0.77,0.74);
    glBegin(GL_POLYGON);
    glVertex3f(-3.9,-2.1,0);
    glVertex3f(-1.9,-2,0);
    glVertex3f(-1.9,-1.35,0);
    glVertex3f(-3.9,-1.45,0);
    glEnd();

    glColor3f(0.803,0.77,0.74);
    glBegin(GL_POLYGON);
    glVertex3f(-1.2,-2,0);
    glVertex3f(0.7,-1.9,0);
    glVertex3f(0.7,-1.25,0);
    glVertex3f(-1.2,-1.35,0);
    glEnd();


    glColor3f(0.803,0.77,0.74);
    glBegin(GL_POLYGON);
    glVertex3f(1.4,-1.9,0);
    glVertex3f(3.4,-1.8,0);
    glVertex3f(3.4,-1.15,0);
    glVertex3f(1.4,-1.25,0);
    glEnd();



    glColor3f(0.54,0.52,0.509);
    glBegin(GL_POLYGON);
    glVertex3f(-4,-2.5,0);
    glVertex3f(4,-2.5,0);
    glVertex3f(4,-0.4,0);
    glVertex3f(-4,-0.4,0);
    glEnd();



//sand

    glColor3f(0.93,0.86,0.5);
    glBegin(GL_POLYGON);
    glVertex3f(-4,-0.4,0);
    glVertex3f(4,-0.4,0);
    glVertex3f(4,1.5,0);
    glVertex3f(-4,1.5,0);
    glEnd();

//sky

    glColor3f(0,0.74,1);
    glBegin(GL_POLYGON);
    glVertex3f(-4,1.5,0);
    glVertex3f(4,1.5,0);
    glVertex3f(4,3,0);
    glVertex3f(-4,3,0);
    glEnd();



glPopMatrix();



    glPopMatrix();



	glutSwapBuffers();
}

void update(int value) {
    if(gameOn==1)
    {
        _angle += 2.0f;
        if (_angle > 360) {
            _angle -= 360;
        }
        _ang_tri += 2.0f;
        if (_ang_tri > 360) {
            _ang_tri -= 360;
        }

        if(pixel>11)
        {
            pixel=2.99992222;

        }
        pixel=pixel+0.07;

        glutPostRedisplay();

        if(ballUp==1&& timeFlag >= 12)
        {
            ballUp=-0.2;
            timeFlag=0;
            glutPostRedisplay();
        }
        timeFlag++;
    }

        timeFlagForText++;

    glutTimerFunc(25, update, 0);
}

int main(int argc, char** argv) {
	std::cout<<getRamdomNum(3.0, 3.5)<<std::endl;

	//Initialize GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(wSize, wSize);
	glutInitWindowPosition(200,100);

	//Create the window
	glutCreateWindow("Transformations");
	initRendering();

	//Set handler functions
	glutDisplayFunc(drawScene);

	glutReshapeFunc(handleResize);

	glutTimerFunc(25, update, 0); //Add a timer
    glutKeyboardFunc(keyboard);
	glutMainLoop();
	return 0;
}
