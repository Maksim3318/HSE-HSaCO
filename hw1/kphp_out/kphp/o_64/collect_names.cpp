//crc64:63252caded4bc178
//crc64_with_comments:1c45962643797be3
#include "runtime-headers.h"
#include "o_64/collect_names.h"
#include "o_l/lambda@u56848333f9dc1d8f_0.h"
//source = [initial.php]
//57: function collect_names($accounts) {
array< string > f$collect_names(array< class_instance<C$Admin> > const &v$accounts) noexcept  {
//source = [initial.php]
//59:   return array_map(function (Admin $a) {
  return f$array_map([](auto &&... args)  noexcept {
    return f$lambda$u56848333f9dc1d8f_0(std::forward<decltype(args)>(args)...);
//60:     return $a->name;
//61:   }, $accounts);
  }, v$accounts);
}


