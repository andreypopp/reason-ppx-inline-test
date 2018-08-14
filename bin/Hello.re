let msg = "hello";
print_endline(msg);

/* uncomment to test ppx_expect */
let%expect_test "is it hello?" = {
  print_endline("Hello, world!");
  %expect
  "Hello, world!";
};

/* uncomment to test ppx_inline_test */
/* let%test "is it hello?" = "hello" == msg; */
