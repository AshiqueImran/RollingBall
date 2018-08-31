/* //for mac
#include <GLUT/GLUT.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>
*/
#define GLUT_DISABLE_ATEXIT_HACK

#include <iostream>
#include <stdlib.h>
#include <math.h>


#include <GL/glu.h>
#include <GL/glut.h>

//Initializes 3D rendering
void initRendering() {
    glEnable(GL_DEPTH_TEST);
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

//Draws the 3D scene
void drawScene() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glMatrixMode(GL_MODELVIEW); //Switch to the drawing perspective
    glLoadIdentity(); //Reset the drawing perspective
    glRotatef(-_cameraAngle, 0.0, 1.0, 0.0); //Rotate the camera
    glTranslatef(0.0, 0.0, -7.0); //Move forward 5 units



    glPushMatrix();
    //glScalef(0.5,0.5,0);
    //glRotatef(0.0,0.0, 1.0, 0.0); //Rotate about the z-axis
    //game

    // G

    glRotatef(_angle, 0.0, 1.0, 0.0); //Rotate about the y-axis

    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.9,0.9,0);
    glVertex3f(-1.1,0.9,0);
    glVertex3f(-1.1,0.7,0);
    glVertex3f(-1.9,0.7,0);
    glEnd();

    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.9,0.7,0);
    glVertex3f(-1.7,0.7,0);
    glVertex3f(-1.7,0.1,0);
    glVertex3f(-1.9,0.1,0);
    glEnd();

    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.9,0.3,0);
    glVertex3f(-1.1,0.3,0);
    glVertex3f(-1.1,0.1,0);
    glVertex3f(-1.9,0.1,0);
    glEnd();

    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.3,0.45,0);
    glVertex3f(-1.1,0.45,0);
    glVertex3f(-1.1,0.1,0);
    glVertex3f(-1.3,0.1,0);
    glEnd();

    // A
    glColor3f(0,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.6,0.9,0);
    glVertex3f(-0.4,0.9,0);
    glVertex3f(-0.7,0.1,0);
    glVertex3f(-0.9,0.1,0);
    glEnd();

    glColor3f(0,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.6,0.9,0);
    glVertex3f(-0.4,0.9,0);
    glVertex3f(-0.1,0.1,0);
    glVertex3f(-0.3,0.1,0);
    glEnd();

    // M
    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(0.1,0.9,0);
    glVertex3f(0.3,0.9,0);
    glVertex3f(0.3,0.1,0);
    glVertex3f(0.1,0.1,0);
    glEnd();

    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(0.7,0.9,0);
    glVertex3f(0.9,0.9,0);
    glVertex3f(0.9,0.1,0);
    glVertex3f(0.7,0.1,0);
    glEnd();

    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(0.7,0.9,0);
    glVertex3f(0.9,0.9,0);
    glVertex3f(0.5,0.2,0);
    glVertex3f(0.5,0.5,0);
    glEnd();

    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(0.3,0.9,0);
    glVertex3f(0.1,0.9,0);
    glVertex3f(0.5,0.2,0);
    glVertex3f(0.5,0.5,0);
    glEnd();

    //E
    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(1.1,0.9,0);
    glVertex3f(1.3,0.9,0);
    glVertex3f(1.3,0.1,0);
    glVertex3f(1.1,0.1,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(1.1,0.9,0);
    glVertex3f(1.7,0.9,0);
    glVertex3f(1.7,0.7,0);
    glVertex3f(1.1,0.7,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(1.1,0.3,0);
    glVertex3f(1.7,0.3,0);
    glVertex3f(1.7,0.1,0);
    glVertex3f(1.1,0.1,0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(1.1,0.6,0);
    glVertex3f(1.5,0.6,0);
    glVertex3f(1.5,0.4,0);
    glVertex3f(1.1,0.4,0);
    glEnd();


    // O
    glPushMatrix();
    //glTranslatef(0.0, 0., 0.0); //Move to the center of the trapezoid
    //glScalef(0.5,0.5,0);
    //glRotatef(_angle,0.0, 1.0, 0.0); //Rotate about the z-axis
    //glRotatef(_angle,0.0, 1.0, 0.0); //Rotate about the z-axis

    glColor3f(0.5,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(-1.9,-0.1,0);
    glVertex3f(-1.1,-0.1,0);
    glVertex3f(-1.1,-0.3,0);
    glVertex3f(-1.9,-0.3,0);
    glEnd();

    glColor3f(0.5,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(-1.9,-0.1,0);
    glVertex3f(-1.7,-0.1,0);
    glVertex3f(-1.7,-0.9,0);
    glVertex3f(-1.9,-0.9,0);
    glEnd();

    glColor3f(0.5,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(-1.9,-0.7,0);
    glVertex3f(-1.1,-0.7,0);
    glVertex3f(-1.1,-0.9,0);
    glVertex3f(-1.9,-0.9,0);
    glEnd();

    glColor3f(0.5,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(-1.3,-0.1,0);
    glVertex3f(-1.1,-0.1,0);
    glVertex3f(-1.1,-0.9,0);
    glVertex3f(-1.3,-0.9,0);
    glEnd();
    glPopMatrix();



    // V
    glColor3f(1,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(-0.9,-0.1,0);
    glVertex3f(-0.7,-0.1,0);
    glVertex3f(-0.4,-0.9,0);
    glVertex3f(-0.6,-0.9,0);
    glEnd();

    glColor3f(1,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(-0.3,-0.1,0);
    glVertex3f(-0.1,-0.1,0);
    glVertex3f(-0.4,-0.9,0);
    glVertex3f(-0.6,-0.9,0);
    glEnd();

    // E
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(0.1,-0.1,0);
    glVertex3f(0.3,-0.1,0);
    glVertex3f(0.3,-0.9,0);
    glVertex3f(0.1,-0.9,0);
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(0.1,-0.1,0);
    glVertex3f(0.7,-0.1,0);
    glVertex3f(0.7,-0.3,0);
    glVertex3f(0.1,-0.3,0);
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(0.1,-0.6,0);
    glVertex3f(0.5,-0.6,0);
    glVertex3f(0.5,-0.4,0);
    glVertex3f(0.1,-0.4,0);
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(0.1,-0.7,0);
    glVertex3f(0.7,-0.7,0);
    glVertex3f(0.7,-0.9,0);
    glVertex3f(0.1,-0.9,0);
    glEnd();

    //R
    glColor3f(0.5,0.1,0);
    glBegin(GL_POLYGON);
    glVertex3f(1.1,-0.1,0);
    glVertex3f(1.3,-0.1,0);
    glVertex3f(1.3,-0.9,0);
    glVertex3f(1.1,-0.9,0);
    glEnd();

    glColor3f(0.5,0.1,0);
    glBegin(GL_POLYGON);
    glVertex3f(1.1,-0.1,0);
    glVertex3f(1.7,-0.1,0);
    glVertex3f(1.7,-0.25,0);
    glVertex3f(1.1,-0.25,0);
    glEnd();

    glColor3f(0.5,0.1,0);
    glBegin(GL_POLYGON);
    glVertex3f(1.5,-0.1,0);
    glVertex3f(1.7,-0.1,0);
    glVertex3f(1.7,-0.5,0);
    glVertex3f(1.5,-0.5,0);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.5,0.1,0);
    glVertex3f(1.3,-0.5,0);
    glVertex3f(1.7,-0.8,0);
    glVertex3f(1.5,-0.9,0);
    glVertex3f(1.3,-0.7,0);
    glEnd();

    glTranslatef(0.0, -0.3, 0.0);//Move to the center of the trapezoid
    glColor3f(0.5,0.1,0);
    glBegin(GL_POLYGON);
    glVertex3f(1.1,-0.1,0);
    glVertex3f(1.7,-0.1,0);
    glVertex3f(1.7,-0.25,0);
    glVertex3f(1.1,-0.25,0);
    glEnd();





    /*glBegin(GL_TRIANGLES);

    //Pentagon
    glVertex3f(-0.5, -0.5, 0.0);
    glVertex3f(0.5, -0.5, 0.0);
    glVertex3f(-0.5, 0.0, 0.0);

    glVertex3f(-0.5, 0.0, 0.0);
    glVertex3f(0.5, -0.5, 0.0);
    glVertex3f(0.5, 0.0, 0.0);

    glVertex3f(-0.5, 0.0, 0.0);
    glVertex3f(0.5, 0.0, 0.0);
    glVertex3f(0.0, 0.5, 0.0);

    glEnd();
    */
    glPopMatrix();

    glFlush();





    glutSwapBuffers();
}



void update(int value) {
    _angle += 2.0f;
    if (_angle > 360) {
        _angle -= 360;
    }
    _ang_tri += 2.0f;
    if (_ang_tri > 360) {
        _ang_tri -= 360;
    }

    glutPostRedisplay(); //Tell GLUT that the display has changed

    //Tell GLUT to call update again in 25 milliseconds
    glutTimerFunc(25, update, 0);
}



int main(int argc, char** argv) {
    //Initialize GLUT
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(200,100);

    //Create the window
    glutCreateWindow("Transformations");
    initRendering();

    //Set handler functions
    glutDisplayFunc(drawScene);

    glutReshapeFunc(handleResize);

    glutTimerFunc(25, update, 0); //Add a timer

    glutMainLoop();
    return 0;
}


