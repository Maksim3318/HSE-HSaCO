//crc64:77fb148bcefe5716
//crc64_with_comments:3d4ab1f06835557d
#include "runtime-headers.h"
#include "o_74/src_solutionc873c765ff28a8b5.h"
#include "o_74/main.h"
extern bool v$src_solutionc873c765ff28a8b5$called;

//source = [solution.php]
//21: class AccountFactory {
Optional < bool > f$src_solutionc873c765ff28a8b5() noexcept  {
  v$src_solutionc873c765ff28a8b5$called = true;
//90:   /** @param Admin $a */
//91:   $validated_accounts = array_filter($accounts, function (Admin $a) {
//92:     return $a->is_valid;
//93:   });
//94:   $names = collect_names($validated_accounts);
//95:   // kPHP is case sensetive, function name changed
//96:   print_names($names);
//97: }
//98: 
//99: main();
  TRY_CALL_VOID_ (f$main(), return {});
  return Optional<bool>{};
}


