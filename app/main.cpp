#include <app_public/application.hpp>
#include <iostream>
int main(int argv, char *argc[]) {
  std::cout << "Starting application " << argc[0] << std::endl;

  Application app;

  return 0;
}
