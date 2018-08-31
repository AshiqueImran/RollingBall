/* //for mac
#include <GLUT/GLUT.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>
*/
#define GLUT_DISABLE_ATEXIT_HACK

float _game_over_angle = 0.0;
float _game_over_cameraAngle = 0.0;
float _game_over_ang_tri = 0.0;

//Draws the 3D scene
void drawGameOver() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glMatrixMode(GL_MODELVIEW); //Switch to the drawing perspective
    glLoadIdentity(); //Reset the drawing perspective
    glRotatef(-_game_over_cameraAngle, 0.0, 1.0, 0.0); //Rotate the camera
    glTranslatef(0.0, 0.0, -7.0); //Move forward 5 units

    glPushMatrix();
    //glScalef(0.5,0.5,0);
    //glRotatef(0.0,0.0, 1.0, 0.0); //Rotate about the z-axis
    //game

    glRotatef(_game_over_angle, 0.0, 1.0, 0.0); //Rotate about the y-axis

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



void updateGameOver(int value) {
    _game_over_angle += 2.0f;
    if (_game_over_angle > 360) {
        _game_over_angle -= 360;
    }
    _game_over_ang_tri += 2.0f;
    if (_game_over_ang_tri > 360) {
        _game_over_ang_tri -= 360;
    }

    glutPostRedisplay(); //Tell GLUT that the display has changed

    glutTimerFunc(25, updateGameOver, 0);
}


//
// int main(int argc, char** argv) {
//     //Initialize GLUT
//     glutInit(&argc, argv);
//     glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
//     glutInitWindowSize(800, 800);
//     glutInitWindowPosition(200,100);
//
//     //Create the window
//     glutCreateWindow("Transformations");
//     initRendering();
//
//     //Set handler functions
//     glutDisplayFunc(drawScene);
//
//     glutReshapeFunc(handleResize);
//
//     glutTimerFunc(25, update, 0); //Add a timer
//
//     glutMainLoop();
//     return 0;
// }
