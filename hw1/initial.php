<?php

// This code works in PHP.
//
// Run builtin PHP web server like so:
//
//   php -S localhost:8080 ./main.php
//
// Then visit this page in your browser:
//
//   http://localhost:8080/?accounts[]=Rulon_User&accounts[]=Bidon_Admin
//
// The output should be:
//
//   name=Rulon
//   name=Bidon
// 
// TODO: Make this code compile and run with KPHP with minimal
// changes while trying to keep the code as idiomatic as possible.

class AccountFactory {
  public static function newAccount($name, $account_type) {
    return new $account_type($name);
  }
}

class Admin {
  public $name;
  public function __construct($name) {
    $this->name = $name;
  }
}

class User {
  public function __construct($name) {
    $this->name = $name;
  }
}

function validate_accounts($accounts) {
  foreach ($accounts as $a) {
    $a->is_valid = !empty($a->name);
  }
}

/** @param (Admin|User)[] $accounts */
function collect_names($accounts) {
  return array_map(function ($a) {
    return $a->name;
  }, $accounts);
}

/** @param string[] $names */
function print_names($names) {
  foreach ($names as $name) {
    echo "name=$name<br>";
  }
}

function main() {
  $raw_accounts = $_GET['accounts'];
  if (!$raw_accounts) {
    die('$_GET["accounts"] is empty');
  }
  $accounts = [];
  foreach ($raw_accounts as $raw) {
    $parts = explode('_', $raw);
    if (count($parts) !== 2) {
      continue;
    }
    $accounts[] = AccountFactory::newAccount($parts[0], $parts[1]);
  }
  validate_accounts($accounts);
  $validated_accounts = array_filter($accounts, function ($a) {
    return $a->is_valid;
  });
  $names = collect_names($validated_accounts);
  Print_names($names);
}

main();
