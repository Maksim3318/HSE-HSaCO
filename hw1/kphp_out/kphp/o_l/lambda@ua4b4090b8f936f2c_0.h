//crc64:2659bc246783ada0
//crc64_with_comments:8aaecb136aa6964c
#pragma once
#include "runtime-headers.h"
#include "cl/C@Admin.h"
inline bool f$lambda$ua4b4090b8f936f2c_0(class_instance<C$Admin> const &v$a) noexcept ;
//source = [solution.php]
//91:   $validated_accounts = array_filter($accounts, function (Admin $a) {
bool f$lambda$ua4b4090b8f936f2c_0(class_instance<C$Admin> const &v$a) noexcept  {
//92:     return $a->is_valid;
  return v$a->$is_valid;
}


