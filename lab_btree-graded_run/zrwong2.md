


## Score: 45/45 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c tests/basic.cpp -o .objs/tests/basic.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/basic.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lpthread -o test

```


### ✓ - [5/5] - test_insertion_idx_emp

- **Points**: 5 / 5





### ✓ - [5/5] - test_insertion_idx_small

- **Points**: 5 / 5





### ✓ - [5/5] - test_btree3_small

- **Points**: 5 / 5

```
==9295== Memcheck, a memory error detector
==9295== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9295== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==9295== Command: ./test -r xml "test_btree3_small"
==9295== 
==9295== 
==9295== HEAP SUMMARY:
==9295==     in use at exit: 0 bytes in 0 blocks
==9295==   total heap usage: 1,765 allocs, 1,765 frees, 222,808 bytes allocated
==9295== 
==9295== All heap blocks were freed -- no leaks are possible
==9295== 
==9295== For counts of detected and suppressed errors, rerun with: -v
==9295== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_btree3_small" tags="[valgrind][weight=5]" filename="tests/basic.cpp" line="114">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="10" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="10" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - test_btree3_large_seq

- **Points**: 5 / 5





### ✓ - [5/5] - test_btree3_large_rand

- **Points**: 5 / 5





### ✓ - [5/5] - test_btree64_large_seq

- **Points**: 5 / 5





### ✓ - [5/5] - test_btree64_large_rand

- **Points**: 5 / 5





### ✓ - [5/5] - test_btree128_med_rand

- **Points**: 5 / 5

```
==9305== Memcheck, a memory error detector
==9305== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9305== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==9305== Command: ./test -r xml "test_btree128_med_rand"
==9305== 
==9305== 
==9305== HEAP SUMMARY:
==9305==     in use at exit: 0 bytes in 0 blocks
==9305==   total heap usage: 2,615 allocs, 2,615 frees, 1,575,760 bytes allocated
==9305== 
==9305== All heap blocks were freed -- no leaks are possible
==9305== 
==9305== For counts of detected and suppressed errors, rerun with: -v
==9305== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_btree128_med_rand" tags="[valgrind][weight=5]" filename="tests/basic.cpp" line="169">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="20001" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="20001" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - test_btree12_strings

- **Points**: 5 / 5





---

This report was generated for **zrwong2** using **00d651e0080b0b1688be389600c3a9ee744b7fa1** (from **October 29th 2018, 12:15:00 am**)
