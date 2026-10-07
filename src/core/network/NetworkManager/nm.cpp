#include "./nm.hpp"
#include <queue>

using namespace Network;

int NetworkManager::Init(int options) {
  _options = options;
  return 0;
}

int NetworkManager::EnqueueHTTPRequest(Request req) {
  _queue.push(req);
  return 0;
}
