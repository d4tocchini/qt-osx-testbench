
#include "openglwindow.h"
#include "glcontent.h"

extern bool g_animate;

OpenGLWindow::OpenGLWindow()
    : QOpenGLWindow(QOpenGLWindow::NoPartialUpdate)
{
    frame = 0;
}

void OpenGLWindow::paintGL()
{
//    qDebug() << "paintGL" << this;
    drawSimpleGLContent(frame);
    if (g_animate) {
        ++frame;
        update();
    }
}

void OpenGLWindow::resizeGL(int w, int h)
{

}

#include "moc_openglwindow.cpp"

