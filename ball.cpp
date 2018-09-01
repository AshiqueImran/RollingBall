#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <cstdlib>
// #include <windows.h>
// #include <mmsystem.h>
#include <ctime>

#ifdef __APPLE__
#  include <OpenGL/gl.h>
#  include <OpenGL/glu.h>
#  include <GLUT/glut.h>
#else
#  include <GL/gl.h>
#  include <GL/glu.h>
#  include <GL/freeglut.h>
#endif

#include <irrKlang.h>
using namespace irrklang;

ISoundEngine* engine = createIrrKlangDevice();

GLint WindowID1;
//Initializes 3D rendering
void initRendering() {
	glEnable(GL_DEPTH_TEST);
}

int hitCount = 0;
//random number generator
float getRamdomNum(float min, float max, float step){
	srand(time(0) * 50000);
	float range = (max - min);
	float rand_num = min + float((range * rand()) / (RAND_MAX + step));
	return rand_num;
}

#include "draw_text.cpp"

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
int wSize=600,gameOn=1,timeFlag,timeFlagForText=0;

int lifeLimit = 10;
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
           ballPlace = ballPlace-1;
           glutPostRedisplay();
        }
    }
    else if(key=='d')
    {
        if(ballPlace<3)
        {
           ballPlace = ballPlace+1;
           glutPostRedisplay();
        }
    }
    else if(key==' ')
    {
        if(ballUp != 2)
        {
            ballUp=2;
            timeFlag=0;
            glutPostRedisplay();
        }
    }
		else if(key=='w')
		{
				if(ballUp != -0.2)
				{
						ballUp=-0.2;
						timeFlag=0;
						glutPostRedisplay();
				}
		}
		else if (key == 'x') {
			if(ballUp != -1.0){
				ballUp = -1.0;
				timeFlag=0;
				glutPostRedisplay();
			}
		}
		else if (key == 'q') {
			glutDestroyWindow(WindowID1);
		}
}
#include "car.cpp"
#include "car2.cpp"
#include "life.cpp"
#include "rocket.cpp"
#include "game_over.cpp"
#include "scene_and_ball.cpp"

//Draws the 3D scene
void drawScene() {
	if(lifeLimit <= 0){
		drawGameOver();
	} else {
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		glMatrixMode(GL_MODELVIEW); //Switch to the drawing perspective
		glLoadIdentity(); //Reset the drawing perspective
		glRotatef(-_cameraAngle, 0.0, 1.0, 0.0); //Rotate the camera
		glTranslatef(0.0, 0.0, -7.0); //Move forward 5 units
	}


	// detect collisions for car (up)
		if((car_move_x > 0.0 && car_move_x < 0.09) && (ballUp < 0.0 && ballUp > -0.3)){
			std::cout<<ballUp<<std::endl;
			lifeLimit--;
			engine->play2D("beep-01.wav");
		}

		else if(ballUp == -1 && (car_move_x > 1.4 && car_move_x < 1.5)){
			lifeLimit--;
			engine->play2D("beep-01.wav");
		}

    if(timeFlagForText<100)
    {
        render(2.5);
    }

		if(lifeLimit > 0){
			drawCar1();
			drawCar2();
			drawRocket();
			for(float i=lifeLimit;i>=0;i--){
				drawLife(i*0.4);
			}
			buildSceneAndBall();
			glutSwapBuffers();
		}
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

        if(ballUp==2 && timeFlag >= 12)
        {
            ballUp=-0.2;
            timeFlag=0;
            glutPostRedisplay();
        }
        timeFlag++;
    }

    timeFlagForText++;

    glutTimerFunc(10, update, 0);
}



int main(int argc, char** argv) {

	//Initialize GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(wSize, wSize);
	glutInitWindowPosition(300,100);

	//Create the window
	WindowID1 = glutCreateWindow("Transformations");
	//glutFullScreen();

	initRendering();

	//Set handler functions
	glutDisplayFunc(drawScene);

	glutReshapeFunc(handleResize);

	glutTimerFunc(20, update, 0); //Add a timer
	glutTimerFunc(5, updateCar, 0);
	glutTimerFunc(10, updateCar2, 0);
	glutTimerFunc(15, updateRocket, 0);
	glutTimerFunc(25, updateGameOver, 0);


	engine->play2D("background.wav", true);

    glutKeyboardFunc(keyboard);
	glutMainLoop();
	return 0;
}
