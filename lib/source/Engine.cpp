#include "Engine.h"

namespace Engine
{
  /*********************************************************************
  * Comment
  *********************************************************************/
  void init(void)
  {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);    // Set background color to black and opaque
    glClearDepth(1.0f);                      // Set background depth to farthest
    glEnable(GL_DEPTH_TEST);      // Enable depth testing for z-culling
    glDepthFunc(GL_LEQUAL);       // Set the type of depth-test
    // glShadeModel(GL_SMOOTH);      // Enable smooth shading
    // glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);     // Nice perspective corrections
  }
  /*********************************************************************
  * Comment
  *********************************************************************/
  void hexagon()
  {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // Clear color and depth buffers
    glMatrixMode(GL_MODELVIEW);    // To operate on model-view matrix

    glPushMatrix();
    glTranslatef(1.0f, -2.0f, -7.0f); // Move right and into the screen

    glBegin(GL_POLYGON);               // Begin drawing the color cube with 6 quads

    glColor3f(0.42f, 0.56f, 0.13f);

    // glVertex3f(float (cos(11.f * M_PI / 6.f) * 0.5f), 0.5f, float (sin(11.f * M_PI / 6.f) * 0.5f));
    // glVertex3f(0, 0.5f, -0.5f);
    // glVertex3f(float (cos(7.f * M_PI / 6.f) * 0.5f), 0.5f, float (sin(7.f * M_PI / 6.f) * 0.5f));
    // glVertex3f(float (cos(5.f * M_PI / 6.f) * 0.5f), 0.5f, float (sin(5.f * M_PI / 6.f) * 0.5f));
    // glVertex3f(0, 0.5f, 0.5f);
    // glVertex3f(float (cos(M_PI / 6.f) * 0.5f), 0.5f, float (sin(M_PI / 6.f) * 0.5f));

    glVertex3f(float (cos(M_PI / 6.f) * 0.5f), 0.5f, float (sin(M_PI / 6.f) * 0.5f));
    glVertex3f(0, 0.5f, 0.5f);
    glVertex3f(float (cos(5.f * M_PI / 6.f) * 0.5f), 0.5f, float (sin(5.f * M_PI / 6.f) * 0.5f));
    glVertex3f(float (cos(7.f * M_PI / 6.f) * 0.5f), 0.5f, float (sin(7.f * M_PI / 6.f) * 0.5f));
    glVertex3f(0, 0.5f, -0.5f);
    glVertex3f(float (cos(11.f * M_PI / 6.f) * 0.5f), 0.5f, float (sin(11.f * M_PI / 6.f) * 0.5f));


    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.55f, 0.16f, 0.16f);

    glVertex3f(0, -0.5f, 0.5f);
    glVertex3f(float (cos(5.f * M_PI / 6.f) * 0.5f), -0.5f, float (sin(5.f * M_PI / 6.f) * 0.5f));
    glVertex3f(float (cos(7.f * M_PI / 6.f) * 0.5f), -0.5f, float (sin(7.f * M_PI / 6.f) * 0.5f));
    glVertex3f(0, -0.5f, -0.5f);
    glVertex3f(float (cos(11.f * M_PI / 6.f) * 0.5f), -0.5f, float (sin(11.f * M_PI / 6.f) * 0.5f));
    glVertex3f(float (cos(M_PI / 6.f) * 0.5f), -0.5f, float (sin(M_PI / 6.f) * 0.5f));

    glEnd();   // Done drawing the pyramid

    glBegin(GL_QUADS);
    // glColor3f(0.55f, 0.16f, 0.16f);

    // glVertex3f(float (cos(11.f * M_PI / 6.f) * 0.5f), -0.5f, float (sin(11.f * M_PI / 6.f) * 0.5f));
    // glVertex3f(float (cos(11.f * M_PI / 6.f) * 0.5f), 0.5f, float (sin(11.f * M_PI / 6.f) * 0.5f));
    // glVertex3f(float (cos(M_PI / 6.f) * 0.5f), 0.5f, float (sin(M_PI / 6.f) * 0.5f));
    // glVertex3f(float (cos(M_PI / 6.f) * 0.5f), -0.5f, float (sin(M_PI / 6.f) * 0.5f));

    // glVertex3f(float (cos(M_PI / 6.f) * 0.5f), -0.5f, float (sin(M_PI / 6.f) * 0.5f));
    // glVertex3f(float (cos(M_PI / 6.f) * 0.5f), 0.5f, float (sin(M_PI / 6.f) * 0.5f));
    // glVertex3f(0, 0.5f, 0.5f);
    // glVertex3f(0, -0.5f, 0.5f);

    // glVertex3f(0, -0.5f, 0.5f);
    // glVertex3f(0, 0.5f, 0.5f);
    // glVertex3f(float (cos(5.f * M_PI / 6.f) * 0.5f), 0.5f, float (sin(5.f * M_PI / 6.f) * 0.5f));
    // glVertex3f(float (cos(5.f * M_PI / 6.f) * 0.5f), -0.5f, float (sin(5.f * M_PI / 6.f) * 0.5f));

    // glVertex3f(float (cos(5.f * M_PI / 6.f) * 0.5f), -0.5f, float (sin(5.f * M_PI / 6.f) * 0.5f));
    // glVertex3f(float (cos(5.f * M_PI / 6.f) * 0.5f), 0.5f, float (sin(5.f * M_PI / 6.f) * 0.5f));
    // glVertex3f(float (cos(7.f * M_PI / 6.f) * 0.5f), 0.5f, float (sin(7.f * M_PI / 6.f) * 0.5f));
    // glVertex3f(float (cos(7.f * M_PI / 6.f) * 0.5f), -0.5f, float (sin(7.f * M_PI / 6.f) * 0.5f));

    glVertex3f(float (cos(7.f * M_PI / 6.f) * 0.5f), -0.5f, float (sin(7.f * M_PI / 6.f) * 0.5f));
    glVertex3f(float (cos(7.f * M_PI / 6.f) * 0.5f), 0.5f, float (sin(7.f * M_PI / 6.f) * 0.5f));
    glVertex3f(0, 0.5f, -0.5f);
    glVertex3f(0, -0.5f, -0.5f);

    // glVertex3f(0, -0.5f, -0.5f);
    // glVertex3f(0, 0.5f, -0.5f);
    // glVertex3f(float (cos(11.f * M_PI / 6.f) * 0.5f), 0.5f, float (sin(11.f * M_PI / 6.f) * 0.5f));
    // glVertex3f(float (cos(11.f * M_PI / 6.f) * 0.5f), -0.5f, float (sin(11.f * M_PI / 6.f) * 0.5f));

    glEnd();
    glPopMatrix();
    glutSwapBuffers(); // Swap the front and back frame buffers (double buffering)
  }
}