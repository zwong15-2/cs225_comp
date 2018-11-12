


## Score: 150/150 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c hashes.cpp -o .objs/hashes.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c textfile.cpp -o .objs/textfile.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c tests/test-lp.cpp -o .objs/tests/test-lp.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c tests/test-dh.cpp -o .objs/tests/test-dh.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c tests/test-sc.cpp -o .objs/tests/test-sc.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/hashes.o .objs/textfile.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/test-lp.o .objs/tests/test-dh.o .objs/tests/test-sc.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lpthread -o test

```


### ✓ - [6/6] - LP::testRemoveEASY

- **Points**: 6 / 6

```
==5626== Memcheck, a memory error detector
==5626== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5626== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5626== Command: ./test -r xml "LP::testRemoveEASY"
==5626== 
==5626== 
==5626== HEAP SUMMARY:
==5626==     in use at exit: 0 bytes in 0 blocks
==5626==   total heap usage: 1,900 allocs, 1,900 frees, 242,741 bytes allocated
==5626== 
==5626== All heap blocks were freed -- no leaks are possible
==5626== 
==5626== For counts of detected and suppressed errors, rerun with: -v
==5626== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testRemoveEASY" tags="[valgrind][weight=6]" filename="tests/test-lp.cpp" line="13">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - LP::testRemoveHard

- **Points**: 10 / 10

```
==5633== Memcheck, a memory error detector
==5633== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5633== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5633== Command: ./test -r xml "LP::testRemoveHard"
==5633== 
==5633== 
==5633== HEAP SUMMARY:
==5633==     in use at exit: 0 bytes in 0 blocks
==5633==   total heap usage: 1,922 allocs, 1,922 frees, 243,445 bytes allocated
==5633== 
==5633== All heap blocks were freed -- no leaks are possible
==5633== 
==5633== For counts of detected and suppressed errors, rerun with: -v
==5633== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testRemoveHard" tags="[valgrind][weight=10]" filename="tests/test-lp.cpp" line="35">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [7/7] - LP::testResizeOnce

- **Points**: 7 / 7

```
==5638== Memcheck, a memory error detector
==5638== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5638== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5638== Command: ./test -r xml "LP::testResizeOnce"
==5638== 
==5638== 
==5638== HEAP SUMMARY:
==5638==     in use at exit: 0 bytes in 0 blocks
==5638==   total heap usage: 2,018 allocs, 2,018 frees, 247,253 bytes allocated
==5638== 
==5638== All heap blocks were freed -- no leaks are possible
==5638== 
==5638== For counts of detected and suppressed errors, rerun with: -v
==5638== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testResizeOnce" tags="[valgrind][weight=7]" filename="tests/test-lp.cpp" line="63">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [11/11] - LP::testResizeAll

- **Points**: 11 / 11

```
==5647== Memcheck, a memory error detector
==5647== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5647== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5647== Command: ./test -r xml "LP::testResizeAll"
==5647== 
==5647== 
==5647== HEAP SUMMARY:
==5647==     in use at exit: 0 bytes in 0 blocks
==5647==   total heap usage: 1,917 allocs, 1,917 frees, 240,741 bytes allocated
==5647== 
==5647== All heap blocks were freed -- no leaks are possible
==5647== 
==5647== For counts of detected and suppressed errors, rerun with: -v
==5647== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testResizeAll" tags="[valgrind][weight=11]" filename="tests/test-lp.cpp" line="84">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - LP::testInsertEasy

- **Points**: 6 / 6

```
==5659== Memcheck, a memory error detector
==5659== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5659== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5659== Command: ./test -r xml "LP::testInsertEasy"
==5659== 
==5659== 
==5659== HEAP SUMMARY:
==5659==     in use at exit: 0 bytes in 0 blocks
==5659==   total heap usage: 1,899 allocs, 1,899 frees, 242,709 bytes allocated
==5659== 
==5659== All heap blocks were freed -- no leaks are possible
==5659== 
==5659== For counts of detected and suppressed errors, rerun with: -v
==5659== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testInsertEasy" tags="[valgrind][weight=6]" filename="tests/test-lp.cpp" line="111">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - LP::testInsertHard

- **Points**: 10 / 10

```
==5662== Memcheck, a memory error detector
==5662== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5662== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5662== Command: ./test -r xml "LP::testInsertHard"
==5662== 
==5662== 
==5662== HEAP SUMMARY:
==5662==     in use at exit: 0 bytes in 0 blocks
==5662==   total heap usage: 1,921 allocs, 1,921 frees, 243,413 bytes allocated
==5662== 
==5662== All heap blocks were freed -- no leaks are possible
==5662== 
==5662== For counts of detected and suppressed errors, rerun with: -v
==5662== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testInsertHard" tags="[valgrind][weight=10]" filename="tests/test-lp.cpp" line="131">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - DH::testRemoveEASY

- **Points**: 6 / 6

```
==5675== Memcheck, a memory error detector
==5675== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5675== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5675== Command: ./test -r xml "DH::testRemoveEASY"
==5675== 
==5675== 
==5675== HEAP SUMMARY:
==5675==     in use at exit: 0 bytes in 0 blocks
==5675==   total heap usage: 1,900 allocs, 1,900 frees, 242,741 bytes allocated
==5675== 
==5675== All heap blocks were freed -- no leaks are possible
==5675== 
==5675== For counts of detected and suppressed errors, rerun with: -v
==5675== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testRemoveEASY" tags="[valgrind][weight=6]" filename="tests/test-dh.cpp" line="15">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - DH::testRemoveHard

- **Points**: 10 / 10

```
==5686== Memcheck, a memory error detector
==5686== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5686== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5686== Command: ./test -r xml "DH::testRemoveHard"
==5686== 
==5686== 
==5686== HEAP SUMMARY:
==5686==     in use at exit: 0 bytes in 0 blocks
==5686==   total heap usage: 1,922 allocs, 1,922 frees, 243,445 bytes allocated
==5686== 
==5686== All heap blocks were freed -- no leaks are possible
==5686== 
==5686== For counts of detected and suppressed errors, rerun with: -v
==5686== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testRemoveHard" tags="[valgrind][weight=10]" filename="tests/test-dh.cpp" line="36">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [7/7] - DH::testResizeOnce

- **Points**: 7 / 7

```
==5715== Memcheck, a memory error detector
==5715== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5715== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5715== Command: ./test -r xml "DH::testResizeOnce"
==5715== 
==5715== 
==5715== HEAP SUMMARY:
==5715==     in use at exit: 0 bytes in 0 blocks
==5715==   total heap usage: 2,019 allocs, 2,019 frees, 247,285 bytes allocated
==5715== 
==5715== All heap blocks were freed -- no leaks are possible
==5715== 
==5715== For counts of detected and suppressed errors, rerun with: -v
==5715== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testResizeOnce" tags="[valgrind][weight=7]" filename="tests/test-dh.cpp" line="64">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [11/11] - DH::testResizeAll

- **Points**: 11 / 11

```
==5720== Memcheck, a memory error detector
==5720== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5720== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5720== Command: ./test -r xml "DH::testResizeAll"
==5720== 
==5720== 
==5720== HEAP SUMMARY:
==5720==     in use at exit: 0 bytes in 0 blocks
==5720==   total heap usage: 1,917 allocs, 1,917 frees, 240,741 bytes allocated
==5720== 
==5720== All heap blocks were freed -- no leaks are possible
==5720== 
==5720== For counts of detected and suppressed errors, rerun with: -v
==5720== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testResizeAll" tags="[valgrind][weight=11]" filename="tests/test-dh.cpp" line="85">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - DH::testInsertEasy

- **Points**: 6 / 6

```
==5728== Memcheck, a memory error detector
==5728== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5728== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5728== Command: ./test -r xml "DH::testInsertEasy"
==5728== 
==5728== 
==5728== HEAP SUMMARY:
==5728==     in use at exit: 0 bytes in 0 blocks
==5728==   total heap usage: 1,899 allocs, 1,899 frees, 242,709 bytes allocated
==5728== 
==5728== All heap blocks were freed -- no leaks are possible
==5728== 
==5728== For counts of detected and suppressed errors, rerun with: -v
==5728== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testInsertEasy" tags="[valgrind][weight=6]" filename="tests/test-dh.cpp" line="111">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - DH::testInsertHard

- **Points**: 10 / 10

```
==5733== Memcheck, a memory error detector
==5733== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5733== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5733== Command: ./test -r xml "DH::testInsertHard"
==5733== 
==5733== 
==5733== HEAP SUMMARY:
==5733==     in use at exit: 0 bytes in 0 blocks
==5733==   total heap usage: 1,921 allocs, 1,921 frees, 243,413 bytes allocated
==5733== 
==5733== All heap blocks were freed -- no leaks are possible
==5733== 
==5733== For counts of detected and suppressed errors, rerun with: -v
==5733== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testInsertHard" tags="[valgrind][weight=10]" filename="tests/test-dh.cpp" line="131">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - SC::testRemoveEASY

- **Points**: 6 / 6

```
==5737== Memcheck, a memory error detector
==5737== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5737== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5737== Command: ./test -r xml "SC::testRemoveEASY"
==5737== 
==5737== 
==5737== HEAP SUMMARY:
==5737==     in use at exit: 0 bytes in 0 blocks
==5737==   total heap usage: 1,899 allocs, 1,899 frees, 243,448 bytes allocated
==5737== 
==5737== All heap blocks were freed -- no leaks are possible
==5737== 
==5737== For counts of detected and suppressed errors, rerun with: -v
==5737== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testRemoveEASY" tags="[valgrind][weight=6]" filename="tests/test-sc.cpp" line="14">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - SC::testRemoveHard

- **Points**: 10 / 10

```
==5750== Memcheck, a memory error detector
==5750== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5750== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5750== Command: ./test -r xml "SC::testRemoveHard"
==5750== 
==5750== 
==5750== HEAP SUMMARY:
==5750==     in use at exit: 0 bytes in 0 blocks
==5750==   total heap usage: 1,921 allocs, 1,921 frees, 244,328 bytes allocated
==5750== 
==5750== All heap blocks were freed -- no leaks are possible
==5750== 
==5750== For counts of detected and suppressed errors, rerun with: -v
==5750== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testRemoveHard" tags="[valgrind][weight=10]" filename="tests/test-sc.cpp" line="35">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [7/7] - SC::testResizeOnce

- **Points**: 7 / 7

```
==5762== Memcheck, a memory error detector
==5762== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5762== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5762== Command: ./test -r xml "SC::testResizeOnce"
==5762== 
==5762== 
==5762== HEAP SUMMARY:
==5762==     in use at exit: 0 bytes in 0 blocks
==5762==   total heap usage: 2,055 allocs, 2,055 frees, 253,736 bytes allocated
==5762== 
==5762== All heap blocks were freed -- no leaks are possible
==5762== 
==5762== For counts of detected and suppressed errors, rerun with: -v
==5762== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testResizeOnce" tags="[valgrind][weight=7]" filename="tests/test-sc.cpp" line="63">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [11/11] - SC::testResizeAll

- **Points**: 11 / 11

```
==5767== Memcheck, a memory error detector
==5767== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5767== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5767== Command: ./test -r xml "SC::testResizeAll"
==5767== 
==5767== 
==5767== HEAP SUMMARY:
==5767==     in use at exit: 0 bytes in 0 blocks
==5767==   total heap usage: 1,924 allocs, 1,924 frees, 242,304 bytes allocated
==5767== 
==5767== All heap blocks were freed -- no leaks are possible
==5767== 
==5767== For counts of detected and suppressed errors, rerun with: -v
==5767== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testResizeAll" tags="[valgrind][weight=11]" filename="tests/test-sc.cpp" line="84">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - SC::testInsertEasy

- **Points**: 6 / 6

```
==5772== Memcheck, a memory error detector
==5772== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5772== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5772== Command: ./test -r xml "SC::testInsertEasy"
==5772== 
==5772== 
==5772== HEAP SUMMARY:
==5772==     in use at exit: 0 bytes in 0 blocks
==5772==   total heap usage: 1,898 allocs, 1,898 frees, 243,400 bytes allocated
==5772== 
==5772== All heap blocks were freed -- no leaks are possible
==5772== 
==5772== For counts of detected and suppressed errors, rerun with: -v
==5772== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testInsertEasy" tags="[valgrind][weight=6]" filename="tests/test-sc.cpp" line="110">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - SC::testInsertHard

- **Points**: 10 / 10

```
==5779== Memcheck, a memory error detector
==5779== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5779== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==5779== Command: ./test -r xml "SC::testInsertHard"
==5779== 
==5779== 
==5779== HEAP SUMMARY:
==5779==     in use at exit: 0 bytes in 0 blocks
==5779==   total heap usage: 1,920 allocs, 1,920 frees, 244,280 bytes allocated
==5779== 
==5779== All heap blocks were freed -- no leaks are possible
==5779== 
==5779== For counts of detected and suppressed errors, rerun with: -v
==5779== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testInsertHard" tags="[valgrind][weight=10]" filename="tests/test-sc.cpp" line="130">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **zrwong2** using **59e8646c4ce669a6b22aea8bfff35af81b77f098** (from **November 5th 2018, 12:15:00 am**)
