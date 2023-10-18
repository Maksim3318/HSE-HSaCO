//crc64:6e6a3e03c239effe
//crc64_with_comments:c73a637c12e4f582
#include "runtime-headers.h"
#include "o_64/main.h"
#include "cl/C@Admin.h"
#include "o_64/AccountFactory@@newAccount.h"
#include "o_64/collect_names.h"
#include "o_64/print_names.h"
#include "o_64/validate_accounts.h"
#include "o_l/lambda@ua4b4090b8f936f2c_0.h"
extern mixed v$_GET;

extern string v$const_string$us17440fdc24cfd854;

extern string v$const_string$us4c516c8e57be73bf;

extern string v$const_string$used7d3779a1d2d266;

extern array< Unknown > v$const_array$us68788cf2824807c5;

//source = [initial.php]
//71: function main() {
void f$main() noexcept  {
  array< class_instance<C$Admin> > v$accounts;
  array< string > v$names;
  array< string > v$parts;
  mixed v$raw;
  mixed v$raw_accounts;
  mixed v$tmp_expr$ua4b4090b8f936f2c_0;
  decltype(const_begin(v$tmp_expr$ua4b4090b8f936f2c_0)) v$tmp_expr$ua4b4090b8f936f2c_0$it;
  decltype(const_begin(v$tmp_expr$ua4b4090b8f936f2c_0)) v$tmp_expr$ua4b4090b8f936f2c_0$it$end;
  array< class_instance<C$Admin> > v$validated_accounts;
//72:   $raw_accounts = $_GET['accounts'];
  v$raw_accounts = v$_GET.get_value (v$const_string$us17440fdc24cfd854, 1926875143400074046_i64);
//73:   if (!$raw_accounts) {
  if (!f$boolval (v$raw_accounts)) {
//74:     die('$_GET["accounts"] is empty');
    f$die(v$const_string$us4c516c8e57be73bf);
  };
//75:   }
//76:   $accounts = [];
  v$accounts = v$const_array$us68788cf2824807c5;
//77:   foreach ($raw_accounts as $raw) {
  {
    v$tmp_expr$ua4b4090b8f936f2c_0 = check_not_null (check_not_false (v$raw_accounts));
    v$tmp_expr$ua4b4090b8f936f2c_0$it = const_begin(v$tmp_expr$ua4b4090b8f936f2c_0);
    v$tmp_expr$ua4b4090b8f936f2c_0$it$end = const_end(v$tmp_expr$ua4b4090b8f936f2c_0);
    for (; v$tmp_expr$ua4b4090b8f936f2c_0$it != v$tmp_expr$ua4b4090b8f936f2c_0$it$end; ++v$tmp_expr$ua4b4090b8f936f2c_0$it) {
      v$raw = v$tmp_expr$ua4b4090b8f936f2c_0$it.get_value();
//78:     $parts = explode('_', $raw);
      v$parts = f$explode(v$const_string$used7d3779a1d2d266, f$strval (v$raw));
//79:     if (count($parts) !== 2) {
      if (!(equals (f$count(v$parts), 2_i64))) {
//80:       continue;
        continue;
      };
//81:     }
//82:     $accounts[] = AccountFactory::newAccount($parts[0], $parts[1]);
      (v$accounts).push_back (TRY_CALL_ (class_instance<C$Admin>, f$AccountFactory$$newAccount(f$make_clone(v$parts.get_value (0_i64)), f$make_clone(v$parts.get_value (1_i64))), return ));

    }
    clear_array(v$tmp_expr$ua4b4090b8f936f2c_0);
  };
//83:   }
//84:   validate_accounts($accounts);
  f$validate_accounts(v$accounts);
//source = [initial.php]
//86:   $validated_accounts = array_filter($accounts, function (Admin $a) {
  v$validated_accounts = f$array_filter(v$accounts, [](auto &&... args)  noexcept {
    return f$lambda$ua4b4090b8f936f2c_0(std::forward<decltype(args)>(args)...);
  });
//87:     return $a->is_valid;
//88:   });
//89:   $names = collect_names($validated_accounts);
  v$names = f$collect_names(v$validated_accounts);
//90:   print_names($names);
  f$print_names(v$names);
  return ;
}


