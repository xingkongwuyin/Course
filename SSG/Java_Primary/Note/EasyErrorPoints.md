## DAY01

1. ```java
   // 显示编译不通过，而不是发生截断，变成0
   byte b1 = 128;
   ```

   ![image-20220726143819286](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202207261718317.png)

2. ```java
   // 声明long型变量必须以"l"或"L"结尾
   short s1 = 128;
   long l = 12324L;
   ```

3. + java的浮点型常量默认是double，声明folat型常量，须后加”f“或”F“
   + 整型常量默认是int

4. ```java
   // 利用unicode编码初始化char
   char c1 = '\u0123';
   ```

5. * Unicode:

     一种编码，将世界上所有的符号都纳入其中。每一个符号都给与一个独一无二的编码，但是它只规定了符号的二进制编码，却没有规定这个二进制代码该如何存储，即无法区分Unicode和ASCLL。

   + UTF-8 ：是在互联网上使用最广的一种 Unicode 的实现方式。
   + GBK（ANSI）：中文编码集

6. boolean

   ![image-20220726151426344](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202207261718303.png)

7. 转义字符

   ![image-20220726151902121](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202207261718349.png)

8. 基本数据类型转换

   + 自动类型提升

     1）当容量小的数据类型的变量于容量大的数据类型做运算（+ - = ……）时，结果自动提升为容量大的数据类型

     2）容量小的无法像容量大的转换，如`float f = 12.3; `,会编译不通过

     2）容量： 表示数的范围的大小，不是所占内存空间的大小

     

     ```java
     // 对于"="左边的只能用等于或者大于右边的数据类型进行接收
     // 通俗来讲，就是考虑左边容不容的下的问题
     byte b1 = 128;
     int i1 = 12;
     // 无法进行接收
     byte b2 = i1 + b1;
     // 用一个比int更大的数据类型接收就可以
     long L = i1 + b1;
     // 在赋值之前，int型数据会转成float型,不是直接就把int的二进制序列
     // 放到float的内存空间中，这中间还有转化（int和float对于数据的编码不同）
     float f = i1 + b1;
     ```

     ![image-20220726152723708](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202207261718351.png)

     ![image-20220726152804779](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202207261718291.png)

     ![image-20220726163932744](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202207261718281.png)

     ![image-20220726153648599](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202207261718750.png)

   + 强制类型转换

     1）解决容量大的数据类型转向容量小的数据类型（截断）

   * 变量运算的两种特殊情况

     1）

     ```java
     // 1. 
     // 发生自动类型提升
     long L1 = 123;
     // 2. 
     // 编译报错:过大的整数
     // 右值是先放到int，但是放不下（如下图）
     long L2 = 12432543654765879;
     // 这样就不会报错
     long L3 = 12432543654765879L;
     
     // 3.
     // 右值默认是double，小容量不能放到大容量中
     float f1 = 123.9;
     // 4.
     // 后面必须加f
     // "2."中不用加L，是因为long的容量更大
     // (1) 直接按float存储
     // (2) 先double存储，然后再强制类型转换
     float f2 = 123.9f; （1）
     float f2 = (float)123.9;
     ```

     ![image-20220726162807552](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202207261718715.png)

     2）

     + 整型常量：默认是int
     + 浮点型常量：默认是double

9. 字符串

   + ![image-20220726164210965](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202207261718747.png)

   * 字符串可以和8种（包含布尔类型）基本数据类型做运算，且运算只能是连接运算（连接运算符：+），运算的结果是String。基本数据类型先转成String。

     ![image-20220726165101701](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202207261718745.png)

   * ```java
     char a = 'a';
     int num = 10;
     Stirng s = "abc";
     System.out.println(a + num + s); // 107abc,因为是a先与num做运算
     ```

   * ```java
     // error : 下面进行的不是连接运算
     // String与基本数据类型进行的有且仅有连接运算(+ - * / () 等不是连接运算)
     String s = 4;
     int num = s;
     ```

     

   * ![image-20220726165818530](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202207261718763.png)

10. * ![image-20220726185859698](https://dawn1314.oss-cn-beijing.aliyuncs.com/202207261858740.png)









