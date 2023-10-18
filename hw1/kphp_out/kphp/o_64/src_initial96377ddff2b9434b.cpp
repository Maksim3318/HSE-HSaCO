//crc64:7587bf4a7731f1b2
//crc64_with_comments:3d4ab1f06835557d
#include "runtime-headers.h"
#include "o_64/src_initial96377ddff2b9434b.h"
#include "o_64/main.h"
extern bool v$src_initial96377ddff2b9434b$called;

//source = [initial.php]
//21: class AccountFactory {
Optional < bool > f$src_initial96377ddff2b9434b() noexcept  {
  v$src_initial96377ddff2b9434b$called = true;
//84:   validate_accounts($accounts);
//85:   /** @param Admin $a */
//86:   $validated_accounts = array_filter($accounts, function (Admin $a) {
//87:     return $a->is_valid;
//88:   });
//89:   $names = collect_names($validated_accounts);
//90:   print_names($names);
//91: }
//92: 
//93: main();
  TRY_CALL_VOID_ (f$main(), return {});
  return Optional<bool>{};
}


