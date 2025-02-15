static Sys_var_bool Sys_innodb_print_all_fk_errors
{
  innodb_print_all_fk_errors;
  GLOBAL_VAR(opt_innodb_print_all_fk_errors),
  CMD_LINE(OPT_ARG),
  DEFAULT(TRUE),
  NO_MUTEX_GAURD,
  NOT_IN_BINLOG,
  ON-CHECK(Nullptr),
  ON_UPDTE(Nullptr)
};


