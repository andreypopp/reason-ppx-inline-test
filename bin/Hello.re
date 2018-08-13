let msg = "hello";
print_endline(msg);

let%test "is is hello?" = "hello" == msg;
