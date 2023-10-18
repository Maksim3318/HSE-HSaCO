//crc64:13390965aaf09e61
//crc64_with_comments:0000000000000000
#include "runtime-headers.h"
#include "server/php-init-scripts.h"
#include "o_64/src_initial96377ddff2b9434b.h"

void global_init_php_scripts() noexcept ;
void init_php_scripts() noexcept ;

void const_vars_init() noexcept ;

void tl_str_const_init() noexcept ;
const char *get_php_scripts_version() noexcept {
  return "unknown";
}

char **get_runtime_options([[maybe_unused]] int *count) noexcept {
  return nullptr;
}

void global_init_php_scripts()  noexcept {
  const_vars_init();
}

void f$src_initial96377ddff2b9434b$run()  noexcept {
  TRY_CALL_VOID (void, f$src_initial96377ddff2b9434b());
  finish (0, false);
}

void f$src_initial96377ddff2b9434b$global_reset()  noexcept {
  void f$src_initial96377ddff2b9434b$global_vars_reset();
  f$src_initial96377ddff2b9434b$global_vars_reset();
}

void init_php_scripts()  noexcept {
  void init_shape_demangler();
  init_shape_demangler();

  f$src_initial96377ddff2b9434b$global_reset();
  set_script (f$src_initial96377ddff2b9434b$run, f$src_initial96377ddff2b9434b$global_reset);
}
