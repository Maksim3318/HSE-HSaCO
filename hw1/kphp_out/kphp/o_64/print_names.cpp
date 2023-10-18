//crc64:e8d6ad50270abc6f
//crc64_with_comments:9ddf9f840d5be9ec
#include "runtime-headers.h"
#include "o_64/print_names.h"
extern string v$const_string$us1fe1a8d8fb9a6d18;

extern string v$const_string$us590ce86cce246342;

//source = [initial.php]
//65: function print_names($names) {
void f$print_names(array< string > const &v$names) noexcept  {
  string v$name;
  array< string > v$tmp_expr$ub88328b6e30e720c_0;
  decltype(const_begin(v$tmp_expr$ub88328b6e30e720c_0)) v$tmp_expr$ub88328b6e30e720c_0$it;
  decltype(const_begin(v$tmp_expr$ub88328b6e30e720c_0)) v$tmp_expr$ub88328b6e30e720c_0$it$end;
//66:   foreach ($names as $name) {
  {
    v$tmp_expr$ub88328b6e30e720c_0 = v$names;
    v$tmp_expr$ub88328b6e30e720c_0$it = const_begin(v$tmp_expr$ub88328b6e30e720c_0);
    v$tmp_expr$ub88328b6e30e720c_0$it$end = const_end(v$tmp_expr$ub88328b6e30e720c_0);
    for (; v$tmp_expr$ub88328b6e30e720c_0$it != v$tmp_expr$ub88328b6e30e720c_0$it$end; ++v$tmp_expr$ub88328b6e30e720c_0$it) {
      v$name = v$tmp_expr$ub88328b6e30e720c_0$it.get_value();
//67:     echo "name=$name<br>";
      {
        f$echo(str_concat(v$const_string$us590ce86cce246342, v$name, v$const_string$us1fe1a8d8fb9a6d18));
      };

    }
    clear_array(v$tmp_expr$ub88328b6e30e720c_0);
  };
  return ;
}


