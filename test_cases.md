Test Case for %i and %d
long int l = INT_MAX - 1024;

	_printf("%d\n", 1024);
	printf("%d\n", 1024);

	_printf("%d\n", -1024);
	printf("%d\n", -1024);

	_printf("%d\n", 0);
	printf("%d\n", 0);

	_printf("%d\n", INT_MAX);
	printf("%d\n", INT_MAX);

	_printf("%d\n", INT_MIN);
	printf("%d\n", INT_MIN);

	_printf("%d\n", l);
	printf("%d\n", l);

	_printf("%d\n", l);
	printf("%d\n", l);

	_printf("There is %d bytes in %d KB\n", 1024, 1);
	printf("There is %d bytes in %d KB\n", 1024, 1);

	_printf("%d - %d = %d\n", 1024, 2048, -1024);
	printf("%d - %d = %d\n", 1024, 2048, -1024);

	_printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));

	_printf("%i\n", 1024);
	printf("%i\n", 1024);

	_printf("%i\n", -1024);
	printf("%i\n", -1024);

	_printf("%i\n", 0);
	printf("%i\n", 0);

	_printf("%i\n", INT_MAX);
	printf("%i\n", INT_MAX);

	_printf("%i\n", INT_MIN);
	printf("%i\n", INT_MIN);

	_printf("%i\n", l);
	printf("%i\n", l);

	_printf("%i\n", l);
	printf("%i\n", l);

	_printf("There is %i bytes in %i KB\n", 1024, 1);
	printf("There is %i bytes in %i KB\n", 1024, 1);

	_printf("%i - %i = %i\n", 1024, 2048, -1024);
	printf("%i - %i = %i\n", 1024, 2048, -1024);

	_printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));

	_printf("%d == %i\n", 1024, 1024);
	printf("%d == %i\n", 1024, 1024);

	_printf("iddi%diddiiddi\n", 1024);
	printf("iddi%diddiiddi\n", 1024);

	_printf("%d\n", 10000);
	printf("%d\n", 10000);


Test case for %b

long int l = UINT_MAX + 1024;
	_printf("%b", 1024);

	_printf("%b", -1024);

	_printf("%b", 0);

	_printf("%b", UINT_MAX);

	_printf("%b", l);

	_printf("There is %b bytes in %b KB\n", 1024, 1);

	_printf("%b - %b = %b\n", 2048, 1024, 1024);


Test case for %x, %X, %o, %u

long int l = UINT_MAX + 1024;
	long int res = INT_MAX * 2;

	_printf("%u\n", 1024);
	printf("%u\n", 1024);

	_printf("%u\n", -1024);
	printf("%u\n", -1024);

	_printf("%u\n", 0);
	printf("%u\n", 0);

	_printf("%u\n", UINT_MAX);
	printf("%u\n", UINT_MAX);

	_printf("%u\n", l);
	printf("%u\n", l);

	_printf("There is %u bytes in %u KB\n", 1024, 1);
	printf("There is %u bytes in %u KB\n", 1024, 1);

	_printf("%u - %u = %u\n", 2048, 1024, 1024);
	printf("%u - %u = %u\n", 2048, 1024, 1024);

	_printf("%u + %u = %u\n", INT_MAX, INT_MAX, res);
	printf("%u + %u = %u\n", INT_MAX, INT_MAX, res);

	_printf("%o\n", 1024);
	printf("%o\n", 1024);

	_printf("%o\n", -1024);
	printf("%o\n", -1024);

	_printf("%o\n", 0);
	printf("%o\n", 0);

	_printf("%o\n", UINT_MAX);
	printf("%o\n", UINT_MAX);

	_printf("%o\n", l);
	printf("%o\n", l);

	_printf("There is %o bytes in %o KB\n", 1024, 1);
	printf("There is %o bytes in %o KB\n", 1024, 1);

	_printf("%o - %o = %o\n", 2048, 1024, 1024);

	_printf("%o + %o = %o\n", INT_MAX, INT_MAX, res);
	printf("%o + %o = %o\n", INT_MAX, INT_MAX, res);

	_printf("%x\n", 1024);
	printf("%x\n", 1024);

	_printf("%x\n", -1024);
	printf("%x\n", -1024);

	_printf("%x\n", 0);
	printf("%x\n", 0);

	_printf("%x\n", UINT_MAX);
	printf("%x\n", UINT_MAX);

	_printf("%x\n", l);
	printf("%x\n", l);

	_printf("There is %x bytes in %x KB\n", 1024, 1);
	printf("There is %x bytes in %x KB\n", 1024, 1);

	_printf("%x - %x = %x\n", 2048, 1024, 1024);
	printf("%x - %x = %x\n", 2048, 1024, 1024);

	_printf("%x + %x = %x\n", INT_MAX, INT_MAX, res);
	printf("%x + %x = %x\n", INT_MAX, INT_MAX, res);

	_printf("%X\n", 1024);
	printf("%X\n", 1024);

	_printf("%X\n", -1024);
	printf("%X\n", -1024);

	_printf("%X\n", 0);
	printf("%X\n", 0);

	_printf("%X\n", UINT_MAX);
	printf("%X\n", UINT_MAX);

	_printf("%X\n", l);
	printf("%X\n", l);

	_printf("There is %X bytes in %X KB\n", 1024, 1);
	printf("There is %X bytes in %X KB\n", 1024, 1);

	_printf("%X - %X = %X\n", 2048, 1024, 1024);
	printf("%X - %X = %X\n", 2048, 1024, 1024);

	_printf("%X + %X = %X\n", INT_MAX, INT_MAX, res);
	printf("%X + %X = %X\n", INT_MAX, INT_MAX, res);

	_printf("%u == %o == %x == %X\n", 1024, 1024, 1024, 1024);
	printf("%u == %o == %x == %X\n", 1024, 1024, 1024, 1024);