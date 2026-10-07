#pragma once
#include <queue>
#include "../NetworkOptions/nmoptions.hpp"
#include "../Request/req.hpp"

namespace Network {
  class NetworkManager {
    public:
      int EnqueueHTTPRequest(Request req);
      int Init(int options);

    private:
      std::queue<Request> _queue;
      int _options;
      int _timer_ms;
  };
}
