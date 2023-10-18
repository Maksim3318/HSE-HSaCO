//crc64:89a17e5aff980609
//crc64_with_comments:7018bbf1181ee2b6
#pragma once
#include "runtime-headers.h"
#include "cl/C@User.h"
inline class_instance<C$User> f$User$$__construct(class_instance<C$User> const &v$this, string const &v$name) noexcept ;
#include "o_64/Admin@@__construct.h"
//source = [initial.php]
//44:   public function __construct($name) {
class_instance<C$User> f$User$$__construct(class_instance<C$User> const &v$this, string const &v$name) noexcept  {
//45:     parent::__construct($name);
  f$Admin$$__construct(v$this, v$name);
//46:   }
//47: }
  return v$this;
}


