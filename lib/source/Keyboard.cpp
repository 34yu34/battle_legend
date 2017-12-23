#include "Keyboard.h"


namespace Keyboard
{
  /*********************************************************************
  * Comment
  *********************************************************************/
  void keyboard(unsigned char key, int x, int y)
  {
    switch (key) {
    case 27 : /* ASCII code of the ESC key */
      exit(0);
      break;
    }
  }
}