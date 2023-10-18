//crc64:0414466e5a4e4809
//crc64_with_comments:7018bbf1181ee2b6
#pragma once
#include "runtime-headers.h"
#include "cl/C@User.h"
inline class_instance<C$User> f$User$$__construct(class_instance<C$User> const &v$this, string const &v$name) noexcept ;
#include "o_74/Admin@@__construct.h"
//source = [solution.php]
//46:   public function __construct($name) {
class_instance<C$User> f$User$$__construct(class_instance<C$User> const &v$this, string const &v$name) noexcept  {
//47:     parent::__construct($name);
  f$Admin$$__construct(v$this, v$name);
//48:   }
//49: }
  return v$this;
}


