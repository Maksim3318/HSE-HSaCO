//crc64:ae2d669f26cdd704
//crc64_with_comments:55da5a8c8d0e60d5
#include "runtime-headers.h"
#include "o_74/validate_accounts.h"
#include "cl/C@Admin.h"
//source = [solution.php]
//51: function validate_accounts($accounts) {
void f$validate_accounts(array< class_instance<C$Admin> > const &v$accounts) noexcept  {
  class_instance<C$Admin> v$a;
  array< class_instance<C$Admin> > v$tmp_expr$u5e5a340009c8f869_0;
  decltype(const_begin(v$tmp_expr$u5e5a340009c8f869_0)) v$tmp_expr$u5e5a340009c8f869_0$it;
  decltype(const_begin(v$tmp_expr$u5e5a340009c8f869_0)) v$tmp_expr$u5e5a340009c8f869_0$it$end;
//52:   // call by name fixed for variable
//53:   /** @var Admin $a */
  ;
//54:   foreach ($accounts as $a) {
  {
    v$tmp_expr$u5e5a340009c8f869_0 = v$accounts;
    v$tmp_expr$u5e5a340009c8f869_0$it = const_begin(v$tmp_expr$u5e5a340009c8f869_0);
    v$tmp_expr$u5e5a340009c8f869_0$it$end = const_end(v$tmp_expr$u5e5a340009c8f869_0);
    for (; v$tmp_expr$u5e5a340009c8f869_0$it != v$tmp_expr$u5e5a340009c8f869_0$it$end; ++v$tmp_expr$u5e5a340009c8f869_0$it) {
      v$a = v$tmp_expr$u5e5a340009c8f869_0$it.get_value();
//55:     $a->is_valid = !empty($a->name);
      v$a->$is_valid = !f$empty(v$a->$name);

    }
    clear_array(v$tmp_expr$u5e5a340009c8f869_0);
  };
  return ;
}


