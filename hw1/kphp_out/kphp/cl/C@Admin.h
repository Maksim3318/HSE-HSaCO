//crc64:db24bcb519cede46
//crc64_with_comments:0000000000000000
#pragma once

struct C$Admin: public refcountable_polymorphic_php_classes<abstract_refcountable_php_interface> {
  bool $is_valid{};
  string $name{};
  virtual ~C$Admin() = default;
  virtual const char *get_class() const  noexcept {
    return R"(Admin)";
  }

  virtual int get_hash() const  noexcept {
    return 333565744;
  }

  };

