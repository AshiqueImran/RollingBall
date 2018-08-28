void drawLife(float pos) {
  float fixedDistance = 0.9;
  // draw life
  glPushMatrix();
    glTranslatef(-(pos-4.5), 2.5, 0.0);
    glScalef(.7, .7, .7);
    glColor3f(0.0, 0.0, 1.0);
    // glColor3f(6.0, 6.0, 6.0);
      glBegin (GL_POLYGON);
        glVertex3f(0.0,0.3,0.0);
        glVertex3f(0.1,0.1,0.0);
        glVertex3f(0.2,0.05,0.0);
        glVertex3f(0.1,0.0,0.0);
        glVertex3f(0.2,-0.2,0.0);
        glVertex3f(0.0,0.0,0.0);
        glVertex3f(-0.2,-0.2,0.0);
        glVertex3f(-0.1,0.0,0.0);
        glVertex3f(-0.2,0.05,0.0);
        glVertex3f(-0.1,0.1,0.0);
      glEnd();
  glPopMatrix();
}
