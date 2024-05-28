#include <fcntl.h>
#include "minunit.h"

#include "libft.h"

#include "tests_ft_isalpha.c"
#include "tests_ft_atoi.c"
#include "tests_ft_itoa.c"
#include "tests_ft_toupper.c"

int main() {
	
	MU_RUN_SUITE(ft_toupper_test_suite);
	MU_RUN_SUITE(ft_isalpha_test_suite);
	MU_RUN_SUITE(ft_itoa_test_suite);
	MU_RUN_SUITE(ft_atoi_test_suite);

	MU_REPORT();
	return MU_EXIT_CODE;
}
