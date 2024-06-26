#include "glwidget.h"
#include <GL/glu.h>

GLWidget::GLWidget(QWidget *parent)
    : QOpenGLWidget(parent)
{
    this->R = 1;
    this->wired = false;
    this->ang = 0.5;
    connect(&Timer, SIGNAL(timeout()), this, SLOT(update()));
    Timer.start(16);
}

GLWidget::~GLWidget()
{

}

void GLWidget::initializeGL()
{
    initializeOpenGLFunctions();
    glClearColor(0, 0, 0, 1);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHT0);
    glEnable(GL_LIGHTING);
    glEnable(GL_COLOR_MATERIAL);
}

void GLWidget::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(0,0,5, 0,0,0, 0,1,0);

    ang += 0.5;
    glTranslatef(x,y,z);
    glRotatef(ang,1,1,1);

    glColor3f(1,0,0);
    if(wired)
    {
        glutWireSphere(R,20,20);
    }
    else
    {
        glutSolidSphere(R,20,20);
    }
}

void GLWidget::resizeGL(int w, int h)
{
    glViewport(0,0,w,h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0, (float)w/h, 0.01, 100.0);

}
