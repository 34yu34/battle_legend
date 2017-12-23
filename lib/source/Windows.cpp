#include "Windows.h"


namespace Windows
{
  void reshape(GLsizei width, GLsizei height)
  {
    if (height == 0) height = 1;                 // To prevent divide by 0
    GLfloat aspect = (GLfloat)width / (GLfloat)height;

    // Set the viewport to cover the new window
    glViewport(0, 0, width, height);

    // Set the aspect ratio of the clipping volume to match the viewport
    glMatrixMode(GL_PROJECTION);   // To operate on the Projection matrix
    glLoadIdentity();              // Reset
    // Enable perspective projection with fovy, aspect, zNear and zFar
    gluPerspective(45.0f, aspect, 0.1f, 100.0f);
  }
}