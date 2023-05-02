/* 

Giovanni Vichiatti Mori   32054033
Gustavo Coleto de Freitas 32076451
João Vitor Teles Centrone 32033125

As APIs gráficas são conjuntos de ferramentas para desenvolvedores de software criarem e manipularem gráficos, imagens e animações em aplicativos. Algumas das APIs gráficas mais conhecidas são OpenGL e DirectX.

OpenGL é uma API gráfica livre e de código aberto que suporta uma ampla variedade de plataformas, incluindo Windows, macOS e Linux. A pipeline de renderização do OpenGL é documentada de forma abrangente em seu guia de referência, que inclui as funções disponíveis para desenhar primitivas gráficas e controlar o comportamento do pipeline.

Exemplo de código que demonstra o uso de API gráfica abaixo utilizando OpenGL:
*/

#include <GL/glut.h>
void display()
{
  glClear(GL_COLOR_BUFFER_BIT);
  glBegin(GL_TRIANGLES);
  glColor3f(1.0, 0.0, 0.0);
  glVertex2f(0.0, 1.0);
  glColor3f(0.0, 1.0, 0.0);
  glVertex2f(-1.0, -1.0);
  glColor3f(0.0, 0.0, 1.0);
  glVertex2f(1.0, -1.0);
  glEnd();
  glFlush();
}
int main(int argc, char** argv)
{
  glutInit(&argc, argv);
  glutCreateWindow("OpenGL Test");
  glutDisplayFunc(display);
  glutMainLoop();
  return 0;
}
