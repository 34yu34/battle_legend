// Programmer: Mihalis Tsoukalos
// Date: Wednesday 04 June 2014
//
// A simple OpenGL program that draws a triangle.
#include "Engine.h"
#include "Keyboard.h"
#include "Windows.h"
#include "GL/glut.h"
#include "GL/gl.h"

int main(int argc, char * * argv)
{
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_DOUBLE);
  glutInitWindowSize(640, 480);
  glutInitWindowPosition(100, 100);
  glutCreateWindow("HEX");
  Engine::init();
  glutDisplayFunc(Engine::hexagon);
  glutReshapeFunc(Windows::reshape);
  glutKeyboardFunc(Keyboard::keyboard);
  glutMainLoop();
  return 0; /* ANSI C requires main to return int. */
}