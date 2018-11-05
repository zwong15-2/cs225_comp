


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
==19847== Memcheck, a memory error detector
==19847== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19847== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==19847== Command: ./test -r xml "LP::testRemoveEASY"
==19847== 
==19847== 
==19847== HEAP SUMMARY:
==19847==     in use at exit: 0 bytes in 0 blocks
==19847==   total heap usage: 1,900 allocs, 1,900 frees, 242,741 bytes allocated
==19847== 
==19847== All heap blocks were freed -- no leaks are possible
==19847== 
==19847== For counts of detected and suppressed errors, rerun with: -v
==19847== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19850== Memcheck, a memory error detector
==19850== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19850== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==19850== Command: ./test -r xml "LP::testRemoveHard"
==19850== 
==19850== 
==19850== HEAP SUMMARY:
==19850==     in use at exit: 0 bytes in 0 blocks
==19850==   total heap usage: 1,922 allocs, 1,922 frees, 243,445 bytes allocated
==19850== 
==19850== All heap blocks were freed -- no leaks are possible
==19850== 
==19850== For counts of detected and suppressed errors, rerun with: -v
==19850== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19865== Memcheck, a memory error detector
==19865== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19865== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==19865== Command: ./test -r xml "LP::testResizeOnce"
==19865== 
==19865== 
==19865== HEAP SUMMARY:
==19865==     in use at exit: 0 bytes in 0 blocks
==19865==   total heap usage: 2,018 allocs, 2,018 frees, 247,253 bytes allocated
==19865== 
==19865== All heap blocks were freed -- no leaks are possible
==19865== 
==19865== For counts of detected and suppressed errors, rerun with: -v
==19865== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19874== Memcheck, a memory error detector
==19874== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19874== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==19874== Command: ./test -r xml "LP::testResizeAll"
==19874== 
==19874== 
==19874== HEAP SUMMARY:
==19874==     in use at exit: 0 bytes in 0 blocks
==19874==   total heap usage: 1,917 allocs, 1,917 frees, 240,741 bytes allocated
==19874== 
==19874== All heap blocks were freed -- no leaks are possible
==19874== 
==19874== For counts of detected and suppressed errors, rerun with: -v
==19874== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19877== Memcheck, a memory error detector
==19877== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19877== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==19877== Command: ./test -r xml "LP::testInsertEasy"
==19877== 
==19877== 
==19877== HEAP SUMMARY:
==19877==     in use at exit: 0 bytes in 0 blocks
==19877==   total heap usage: 1,899 allocs, 1,899 frees, 242,709 bytes allocated
==19877== 
==19877== All heap blocks were freed -- no leaks are possible
==19877== 
==19877== For counts of detected and suppressed errors, rerun with: -v
==19877== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19880== Memcheck, a memory error detector
==19880== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19880== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==19880== Command: ./test -r xml "LP::testInsertHard"
==19880== 
==19880== 
==19880== HEAP SUMMARY:
==19880==     in use at exit: 0 bytes in 0 blocks
==19880==   total heap usage: 1,921 allocs, 1,921 frees, 243,413 bytes allocated
==19880== 
==19880== All heap blocks were freed -- no leaks are possible
==19880== 
==19880== For counts of detected and suppressed errors, rerun with: -v
==19880== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19885== Memcheck, a memory error detector
==19885== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19885== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==19885== Command: ./test -r xml "DH::testRemoveEASY"
==19885== 
==19885== 
==19885== HEAP SUMMARY:
==19885==     in use at exit: 0 bytes in 0 blocks
==19885==   total heap usage: 1,900 allocs, 1,900 frees, 242,741 bytes allocated
==19885== 
==19885== All heap blocks were freed -- no leaks are possible
==19885== 
==19885== For counts of detected and suppressed errors, rerun with: -v
==19885== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19901== Memcheck, a memory error detector
==19901== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19901== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==19901== Command: ./test -r xml "DH::testRemoveHard"
==19901== 
==19901== 
==19901== HEAP SUMMARY:
==19901==     in use at exit: 0 bytes in 0 blocks
==19901==   total heap usage: 1,922 allocs, 1,922 frees, 243,445 bytes allocated
==19901== 
==19901== All heap blocks were freed -- no leaks are possible
==19901== 
==19901== For counts of detected and suppressed errors, rerun with: -v
==19901== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19906== Memcheck, a memory error detector
==19906== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19906== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==19906== Command: ./test -r xml "DH::testResizeOnce"
==19906== 
==19906== 
==19906== HEAP SUMMARY:
==19906==     in use at exit: 0 bytes in 0 blocks
==19906==   total heap usage: 2,019 allocs, 2,019 frees, 247,285 bytes allocated
==19906== 
==19906== All heap blocks were freed -- no leaks are possible
==19906== 
==19906== For counts of detected and suppressed errors, rerun with: -v
==19906== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19911== Memcheck, a memory error detector
==19911== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19911== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==19911== Command: ./test -r xml "DH::testResizeAll"
==19911== 
==19911== 
==19911== HEAP SUMMARY:
==19911==     in use at exit: 0 bytes in 0 blocks
==19911==   total heap usage: 1,917 allocs, 1,917 frees, 240,741 bytes allocated
==19911== 
==19911== All heap blocks were freed -- no leaks are possible
==19911== 
==19911== For counts of detected and suppressed errors, rerun with: -v
==19911== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19929== Memcheck, a memory error detector
==19929== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19929== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==19929== Command: ./test -r xml "DH::testInsertEasy"
==19929== 
==19929== 
==19929== HEAP SUMMARY:
==19929==     in use at exit: 0 bytes in 0 blocks
==19929==   total heap usage: 1,899 allocs, 1,899 frees, 242,709 bytes allocated
==19929== 
==19929== All heap blocks were freed -- no leaks are possible
==19929== 
==19929== For counts of detected and suppressed errors, rerun with: -v
==19929== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19950== Memcheck, a memory error detector
==19950== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19950== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==19950== Command: ./test -r xml "DH::testInsertHard"
==19950== 
==19950== 
==19950== HEAP SUMMARY:
==19950==     in use at exit: 0 bytes in 0 blocks
==19950==   total heap usage: 1,921 allocs, 1,921 frees, 243,413 bytes allocated
==19950== 
==19950== All heap blocks were freed -- no leaks are possible
==19950== 
==19950== For counts of detected and suppressed errors, rerun with: -v
==19950== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==19961== Memcheck, a memory error detector
==19961== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19961== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==19961== Command: ./test -r xml "SC::testRemoveEASY"
==19961== 
==19961== 
==19961== HEAP SUMMARY:
==19961==     in use at exit: 0 bytes in 0 blocks
==19961==   total heap usage: 1,899 allocs, 1,899 frees, 243,448 bytes allocated
==19961== 
==19961== All heap blocks were freed -- no leaks are possible
==19961== 
==19961== For counts of detected and suppressed errors, rerun with: -v
==19961== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20003== Memcheck, a memory error detector
==20003== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20003== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==20003== Command: ./test -r xml "SC::testRemoveHard"
==20003== 
==20003== 
==20003== HEAP SUMMARY:
==20003==     in use at exit: 0 bytes in 0 blocks
==20003==   total heap usage: 1,921 allocs, 1,921 frees, 244,328 bytes allocated
==20003== 
==20003== All heap blocks were freed -- no leaks are possible
==20003== 
==20003== For counts of detected and suppressed errors, rerun with: -v
==20003== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20009== Memcheck, a memory error detector
==20009== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20009== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==20009== Command: ./test -r xml "SC::testResizeOnce"
==20009== 
==20009== 
==20009== HEAP SUMMARY:
==20009==     in use at exit: 0 bytes in 0 blocks
==20009==   total heap usage: 2,055 allocs, 2,055 frees, 253,736 bytes allocated
==20009== 
==20009== All heap blocks were freed -- no leaks are possible
==20009== 
==20009== For counts of detected and suppressed errors, rerun with: -v
==20009== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20014== Memcheck, a memory error detector
==20014== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20014== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==20014== Command: ./test -r xml "SC::testResizeAll"
==20014== 
==20014== 
==20014== HEAP SUMMARY:
==20014==     in use at exit: 0 bytes in 0 blocks
==20014==   total heap usage: 1,924 allocs, 1,924 frees, 242,304 bytes allocated
==20014== 
==20014== All heap blocks were freed -- no leaks are possible
==20014== 
==20014== For counts of detected and suppressed errors, rerun with: -v
==20014== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20021== Memcheck, a memory error detector
==20021== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20021== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==20021== Command: ./test -r xml "SC::testInsertEasy"
==20021== 
==20021== 
==20021== HEAP SUMMARY:
==20021==     in use at exit: 0 bytes in 0 blocks
==20021==   total heap usage: 1,898 allocs, 1,898 frees, 243,400 bytes allocated
==20021== 
==20021== All heap blocks were freed -- no leaks are possible
==20021== 
==20021== For counts of detected and suppressed errors, rerun with: -v
==20021== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==20034== Memcheck, a memory error detector
==20034== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20034== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==20034== Command: ./test -r xml "SC::testInsertHard"
==20034== 
==20034== 
==20034== HEAP SUMMARY:
==20034==     in use at exit: 0 bytes in 0 blocks
==20034==   total heap usage: 1,920 allocs, 1,920 frees, 244,280 bytes allocated
==20034== 
==20034== All heap blocks were freed -- no leaks are possible
==20034== 
==20034== For counts of detected and suppressed errors, rerun with: -v
==20034== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **zrwong2** using **92ff1291a87f804fc84e55f3691b511fddf54496** (from **November 5th 2018, 12:15:00 am**)
