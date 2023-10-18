//crc64:3d6c787d35e5a477
//crc64_with_comments:0000000000000000
#pragma once
#include "cl/C@Admin.h"

struct C$User final : public C$Admin {
  const char *get_class() const  noexcept  final {
    return R"(User)";
  }

  int get_hash() const  noexcept  final {
    return -157093864;
  }

  };

