// Programmer: Mihalis Tsoukalos
// Date: Wednesday 04 June 2014
//
// A simple OpenGL program that draws a triangle.
#include "draw.h"
#include "GL/freeglut.h"
#include "GL/gl.h"

using namespace Draw;
int main(int argc, char * * argv)
{
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE);
  glutInitWindowSize(500, 500);
  glutInitWindowPosition(100, 100);
  glutCreateWindow("OpenGL - Creating a triangle");
  glutDisplayFunc(triangle);
  glutMainLoop();
  return 0;
}