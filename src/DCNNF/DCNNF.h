#pragma once

#include<DCNNF/3rdParty/json.hpp>

namespace dcnnf{
  void convert(std::vector<uint8_t>&output,nlohmann::json const&j);
  void convert(nlohmann::json&j,std::vector<uint8_t>const&input);
}
