# 背景
如今跨平台编码是非常常见的事情，当平台改变，（本文中甚至只需要编译器改变），那么数据类型的大小便会改变，**这种数据类型长度随着编译器变化变化的特点有时会摧毁我们的代码**！

# 痛点

聚个栗子：
```c
int variable_1 = 0;
printf ( "\nSize of variable_1 = %d bytes.", sizeof ( variable_1 ) );
```

你以为打印结果是4？NO!

实际上int”的大小完全取决于用于编译代码的编译器。事实上，它甚至不依赖于处理器。因此，如果我们在带有16位编译器的32位处理器上编译上述代码，代码将给出如下输出：


```c
Size of variable_1 = 2 bytes
```



类似地，如果我们使用64位编译器在64位处理器上编译上述代码，则该代码将给出如下输出：


```c
“Size of variable_1 = 8 bytes”
````



那么，我们如何编写与代码编译器无关的代码呢？一种方法是在平台或编译器之间移植时不断更改所有变量的类型。但这不是我们想要做的。“聪明的人用聪明的方式做聪明的事。”要聪明！

# typedef语法
```c
typedef 数据类型 别名
```

# 解决方法

因此，我们从这里开始使用数据类型的typedef进行编码。我们直接使用以下typedef来代替数据类型：

1. `uint8 for an unsigned data type of size 8 bits`
2. `int8 for a signed data type of size 8 bits`
3. `uint16 for an unsigned data type of size 16 bits`
4. `int16 for a signed data type of size 16 bits`
5. `uint32 for an unsigned data type of size 32 bits`
6. `int32 for a signed data type of size 32 bits`
7. `uint64 for an unsigned data type of size 64 bits`
8. `int64 for a signed data type of size 64 bits`

但是生活并没有那么容易！在大多数微控制器系列中，都缺少uint32_t等typedef库（它在stdint.h中定义）。在这样的平台上，我们需要使用语句sizeof（<data_type>）来计算这些数据类型的大小，然后定义typedefs。此外，我们可以有多个支持代码的微控制器-在这种情况下，我们根据代码编译的微控制器定义typedefs。不没那么难，看看吧：
