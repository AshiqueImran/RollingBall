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

//render text
void render(float x)
{


	glColor3f(0,0,0);
	drawStrokeText("Press w or (space)=jump, a=move-left, d=move-right, p=pause, s=start",x);
	glutPostRedisplay();

}
