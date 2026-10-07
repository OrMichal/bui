#include "./app.hpp"

Application::Application() {
  
}

int Application::AssignNetworkManager(NetworkManager* nm) {
  Nm = nm;
  return 0;
}

int Application::Run() {
  return 0;
}
