


## Score: 50/50 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c coloredout.cpp -o .objs/coloredout.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c tests/basic.cpp -o .objs/tests/basic.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/coloredout.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/basic.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lpthread -o test

```


### ✓ - [10/10] - test_find

- **Points**: 10 / 10

```
==9626== Memcheck, a memory error detector
==9626== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9626== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==9626== Command: ./test -r xml "test_find"
==9626== 
==9626== 
==9626== HEAP SUMMARY:
==9626==     in use at exit: 0 bytes in 0 blocks
==9626==   total heap usage: 1,687 allocs, 1,687 frees, 217,400 bytes allocated
==9626== 
==9626== All heap blocks were freed -- no leaks are possible
==9626== 
==9626== For counts of detected and suppressed errors, rerun with: -v
==9626== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_find" tags="[valgrind][weight=10]" filename="tests/basic.cpp" line="34">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="5" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="5" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - test_insert_small

- **Points**: 5 / 5





### ✓ - [10/10] - test_insert_find

- **Points**: 10 / 10





### ✓ - [10/10] - test_insert_big

- **Points**: 10 / 10

```
==9937== Memcheck, a memory error detector
==9937== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9937== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==9937== Command: ./test -r xml "test_insert_big"
==9937== 
==9937== 
==9937== HEAP SUMMARY:
==9937==     in use at exit: 0 bytes in 0 blocks
==9937==   total heap usage: 1,731 allocs, 1,731 frees, 226,684 bytes allocated
==9937== 
==9937== All heap blocks were freed -- no leaks are possible
==9937== 
==9937== For counts of detected and suppressed errors, rerun with: -v
==9937== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_insert_big" tags="[valgrind][weight=10]" filename="tests/basic.cpp" line="104">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - test_remove_small

- **Points**: 5 / 5





### ✓ - [10/10] - test_remove_big

- **Points**: 10 / 10

```
==10204== Memcheck, a memory error detector
==10204== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10204== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10204== Command: ./test -r xml "test_remove_big"
==10204== 
==10204== 
==10204== HEAP SUMMARY:
==10204==     in use at exit: 0 bytes in 0 blocks
==10204==   total heap usage: 1,743 allocs, 1,743 frees, 228,348 bytes allocated
==10204== 
==10204== All heap blocks were freed -- no leaks are possible
==10204== 
==10204== For counts of detected and suppressed errors, rerun with: -v
==10204== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_remove_big" tags="[valgrind][weight=10]" filename="tests/basic.cpp" line="172">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **zrwong2** using **f1f61956a81e804d5ef89da32b1b1f88e2270ae6** (from **October 22nd 2018, 12:15:00 am**)
