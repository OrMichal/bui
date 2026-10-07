#pragma once
#include "../network/NetworkManager/nm.hpp"

using namespace Network;

class Application {
  public:
    NetworkManager* Nm;
    int Run();
    Application();
    int AssignNetworkManager(NetworkManager* nm);
};
