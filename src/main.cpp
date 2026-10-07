#include <cstdlib>
#include <iostream>

#include "./core/network/NetworkManager/nm.hpp"

using namespace Network;

int main() {
  NetworkManager nm;
  nm.Init(NetworkOptions::HTTP | NetworkOptions::HTTPS);
  
  return EXIT_SUCCESS;
}
