


## Score: 0/0 (0.00%)


### ✗ - [0/0] - Output from `make`

- **Points**: 0 / 0

```
In file included from tests/basic.cpp:19:
In file included from tests/../util.h:3:
In file included from tests/../binarytree.h:241:
tests/../binarytree.cpp:132:59: fatal error: no viable conversion from '__wrap_iter<std::__1::vector<int, std::__1::allocator<int> > *>' to '__wrap_iter<BinaryTree<int>::Node **>'
    for(typename vector< BinaryTree<T>::Node *>::iterator traverse = paths.begin(); traverse != paths.end(); ++traverse){
                                                          ^          ~~~~~~~~~~~~~
tests/basic.cpp:188:10: note: in instantiation of member function 'BinaryTree<int>::getPaths' requested here
    tree.getPaths(treePaths);
         ^
/class/cs225/lm35/bin/../include/c++/v1/iterator:1109:7: note: candidate constructor (the implicit copy constructor) not viable: no known conversion from 'iterator' (aka '__wrap_iter<pointer>') to 'const std::__1::__wrap_iter<BinaryTree<int>::Node **> &' for 1st argument
class __wrap_iter
      ^
/class/cs225/lm35/bin/../include/c++/v1/iterator:1109:7: note: candidate constructor (the implicit move constructor) not viable: no known conversion from 'iterator' (aka '__wrap_iter<pointer>') to 'std::__1::__wrap_iter<BinaryTree<int>::Node **> &&' for 1st argument
class __wrap_iter
      ^
/class/cs225/lm35/bin/../include/c++/v1/iterator:1232:31: note: candidate constructor not viable: no known conversion from 'iterator' (aka '__wrap_iter<pointer>') to 'iterator_type' (aka 'BinaryTree<int>::Node **') for 1st argument
    _LIBCPP_INLINE_VISIBILITY __wrap_iter(iterator_type __x) _NOEXCEPT : __i(__x) {}
                              ^
/class/cs225/lm35/bin/../include/c++/v1/iterator:1131:28: note: candidate template ignored: disabled by 'enable_if' [with _Up = std::__1::vector<int, std::__1::allocator<int> > *]
        typename enable_if<is_convertible<_Up, iterator_type>::value>::type* = 0) _NOEXCEPT
                           ^
1 error generated.
make: *** [basic.o] Error 1

```
```
clang++ -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -c  tests/basic.cpp

```


---

This report was generated for **zrwong2** using **0efb5c273facca6c381bf87bedf19a578fb33a51** (from **October 8th 2018, 12:15:00 am**)
