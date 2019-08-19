#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>

#include "fibonacci.h"

///* A test case that does nothing and succeeds. */
static void null_test_success(void **state) {
	fibonacci(6);
	int i = 5;
	assert_int_equal(i, 5);
}

int main(void) {
	const struct CMUnitTest tests[] = {
			cmocka_unit_test(null_test_success),
	};
	return cmocka_run_group_tests(tests, NULL, NULL);
}
