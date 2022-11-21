#ifndef SRC_SAVE_H_
#define SRC_SAVE_H_

#include <QDialog>

namespace Ui {
class Save;
}

class Save : public QDialog {
  Q_OBJECT

 public:
  explicit Save(QWidget *parent = nullptr);
  ~Save();

 private slots:
  void on_image_clicked();
  void on_gif_clicked();

 private:
  Ui::Save *ui;

 signals:
  void signalSaveType(int type_save);
};

#endif  // SRC_SAVE_H_
