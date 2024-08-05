#include <QApplication>
#include <QWidget>
#include <QSlider>
#include <QLabel>
#include <QPixmap>
#include <QPicture>
#include <QVBoxLayout>
void setGreen(QLabel& label) {
    // QPixmap pixmap("/home/zaytsnick/Downloads/green.png");
    QPixmap pixmap("image/green.png");
    label.setPixmap(pixmap);
}
void setRed(QLabel& label) {
    //QPixmap pixmap("/home/zaytsnick/Downloads/red.png");
     QPixmap pixmap("image/red.png");
    label.setPixmap(pixmap);
}
void setYellow(QLabel& label) {
    //QPixmap pixmap("/home/zaytsnick/Downloads/yellow.png");
     QPixmap pixmap("image/yellow.png");
    label.setPixmap(pixmap);
}
int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    QWidget* window = new QWidget;
    QVBoxLayout* layout = new QVBoxLayout(window);
    QLabel label;
    setGreen(label);
    QSlider slider(Qt::Horizontal);
    layout->addWidget(&label);
    layout->addWidget(&slider);

    QObject::connect(&slider, &QSlider::valueChanged, [&slider, &label](int newValue) {
        if (newValue < 34) {
            setGreen(label);
        }
        else if (newValue > 66) {
            setRed(label);
        }
        else {
            setYellow(label);
        }

        });
    window->setFixedSize(130, 150);
    window->show();
    return a.exec();
}
