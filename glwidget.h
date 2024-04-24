#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QObject>
#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include <GL/glut.h>
#include <QTimer>

class GLWidget : public QOpenGLWidget, protected QOpenGLFunctions
{
    Q_OBJECT
public:
    GLWidget(QWidget *parent = nullptr);
    ~GLWidget();
    int R;
    float x,y,z;
    bool wired;
    float ang;
protected:
    void initializeGL();
    void paintGL();
    void resizeGL(int w, int h);


private:
    QTimer Timer;

};

#endif // GLWIDGET_H
