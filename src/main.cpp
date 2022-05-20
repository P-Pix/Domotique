#include <iostream>
#include "../include/graphiqueCourbe.hpp"

#include <gtkmm-3.0/gtkmm.h>

/*
class HelloWorld : public Gtk::Window
{

public:
  HelloWorld();
  virtual ~HelloWorld();

protected:
  //Signal handlers:
  void on_button_clicked();

  //Member widgets:
  Gtk::Button m_button;
};

HelloWorld::HelloWorld()
: m_button("Hello World")   // creates a new button with label "Hello World".
{
  // Sets the border width of the window.
  set_border_width(10);

  // When the button receives the "clicked" signal, it will call the
  // on_button_clicked() method defined below.
  m_button.signal_clicked().connect(sigc::mem_fun(*this,
              &HelloWorld::on_button_clicked));

  // This packs the button into the Window (a container).
  add(m_button);

  // The final step is to display this newly created widget...
  m_button.show();
}

HelloWorld::~HelloWorld()
{
}

void HelloWorld::on_button_clicked()
{
  std::cout << "Hello World" << std::endl;
}

int main (int argc, char *argv[])
{
  auto app = Gtk::Application::create(argc, argv, "org.gtkmm.example");

  HelloWorld helloworld;

  //Shows the window and returns when it is closed.
  return app->run(helloworld);
}
*/

int main(int argc, char **argv) {
    GraphiqueCourbe g;
    for (int i = 1; i < MAX_INDEX + 45; i++) {
        g.addValue(i*i);
    }
    g.print();
    for (int i = 0; i < 3; i++) {
        g.removeValue(i * i);
    }
    std::cout << g << std::endl;
    return EXIT_SUCCESS;
}