//crc64:9a1b58ed30775e35
//crc64_with_comments:08467078e03cce1f
#include "runtime-headers.h"
#include "o_74/AccountFactory@@newAccount.h"
#include "o_74/Admin@@__construct.h"
#include "o_74/User@@__construct.h"
extern string v$const_string$us42f9bf2813e1cf30;

extern string v$const_string$us9fcbae9d722e8efe;

extern string v$const_string$usc1085493f6a2f018;

extern string v$const_string$usc873c765ff28a8b5;

//source = [solution.php]
//22:   public static function newAccount($name, $account_type) {
class_instance<C$Admin> f$AccountFactory$$newAccount(string const &v$name, string const &v$account_type) noexcept  {
  string v$condition_on_switch$uc8a569cf24f5915a_0;
  bool v$matched_with_one_case$uc8a569cf24f5915a_0 = false;
//23:   // runtime known class replaced by switch-case
//24:     switch ($account_type) {
  {
    v$condition_on_switch$uc8a569cf24f5915a_0 = f$strval (v$account_type);
    v$matched_with_one_case$uc8a569cf24f5915a_0 = false;
    switch (v$condition_on_switch$uc8a569cf24f5915a_0.hash()) {
      case 4112944472938345301:
      if (!v$matched_with_one_case$uc8a569cf24f5915a_0) {
//25:       case 'User':
        if (!equals (v$condition_on_switch$uc8a569cf24f5915a_0, v$const_string$usc1085493f6a2f018)) {
          goto switch_goto$uc8a569cf24f5915a_0;
        } else {
          v$matched_with_one_case$uc8a569cf24f5915a_0 = true;
        }
      }
//26: return new User($name);
      {
        return f$User$$__construct(class_instance<C$User>().alloc(), v$name);
      }
      case -1652293684569292275:
      if (!v$matched_with_one_case$uc8a569cf24f5915a_0) {
//27:       case 'Admin':
        if (!equals (v$condition_on_switch$uc8a569cf24f5915a_0, v$const_string$us42f9bf2813e1cf30)) {
          goto switch_goto$uc8a569cf24f5915a_0;
        } else {
          v$matched_with_one_case$uc8a569cf24f5915a_0 = true;
        }
      }
//28: return new Admin($name);
      {
        return f$Admin$$__construct(class_instance<C$Admin>().alloc(), v$name);
      }
      default:
      switch_goto$uc8a569cf24f5915a_0:;
      v$matched_with_one_case$uc8a569cf24f5915a_0 = true;
//29:       default:
//30: throw new Exception('Invalid account type.');
      {
        {
          THROW_EXCEPTION (f$_exception_set_location(f$Exception$$__construct(class_instance<C$Exception>().alloc(), v$const_string$us9fcbae9d722e8efe), v$const_string$usc873c765ff28a8b5, 30_i64));
          return {};
        }
        ;
      }
    }
  };
}


