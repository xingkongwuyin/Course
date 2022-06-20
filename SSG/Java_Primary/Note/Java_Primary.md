# D1



1. > java如果不配环境变量，只能在开发工具的目录下执行，想在所有的文件下执行，就需要配置环境变量
   >
   > ![](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202206181925386.png)

2. > 电脑上可以安装多个jdk，只能有一个jdk环境变量（path）。

3. > 编译文件也得转到要编译的目录下，因为java的开发工具可以全局使用了，但文件还是得在该目录下运行 

4. > 在一个源文件中可以声明class，但最多有一个public class,而且要求声明为public的类名要与文件名一致。
   >
   > 例：hello.java,该文件中的public class的类名应该是hello
   >
   > ```java
   > // hello.java
   > public class hello{
   > 	public static void main(String[ ]  args){  // args == arguments
   >        System.out.println("helloworld");
   > 	} 
   > }
   > ```

3. > 程序的入口是main方法，格式如上所示，是固定的
   >
   > * `public static void main(String[ ]  args)`

4. > 输出语句
   >
   > * System.out.println("hello");   先输出后换行  System.out.println();单纯起到换行的作用  
   > * System.out.print("hello");      只输出不换行

5. > * 编译过程：编译过后，会生成一个或多个字节码文件。字节码文件的文件名与Java源文件中的类名一致。
   > * java文件名要与公共类的类名一致，如果没有公共类，那么Java文件名字可以随意
   >
   > ![image-20220618101540049](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202206181925404.png)
   
8. > ![image-20220618101840807](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202206181925418.png)

9. > ![image-20220618141015456](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202206181959807.png)

10. > * `long b1 = 199L` ，long整型在声明时，后面需要加L,系统缺省是int
    > * `float b2 = 0.2f` , 浮点型缺省是double

11. >  编码和解码都需要一套字符集。若要解码出来的一致，需要共用一套字符集
    >
    > 文本文档使是用UTF—8字符集编码的，而命令行窗口默认是GBK解码，所以会出现乱码的情况。即’中‘，在UTF—8的编码是1234，保存是按1234的二进制编码保存的，而cmd解码时，使用GBK解码，在GBK字符集中1234对应的字符或者不是’中‘，或者找不到，就会出现乱码的情况
    >
    > ![image-20220618145329305](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202206182000388.png)

12. > 此时的容量大小是指，表示数的范围大小。比如：float的容量要比大于long的容量
    >
    > ![image-20220618161134817](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202206182000407.png)

13. > * C可以发生截断，java不可以直接发生截断，直接会编译不通过，提示精度会有损失，C语言不管这个就直接放进去
    >
    > ![image-20220618162926265](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202206182000439.png)
    >
    > ![image-20220618163121251](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202206182003855.png)
    >
    > ![image-20220618163655366](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202206182003180.png)
    >
    > * ==可以通过强制类型转换，将容量大的数据类型赋给容量小的数据类型==
    > * 在汇编中，整数字面常量是立即数的方式，即整数字面常量是是放在指令中的，当汇编时，是立即数的太大，是无法将整数所在指令，无法转成二进制指令所以就会报错
    >
    > ![image-20220618164857654](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202206182000436.png)
    >
    > ![image-20220618165759594](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202206182004710.png)
    >
    > ![image-20220618170133531](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202206182004182.png)

14. > 

2. > ![image-20220618171535610](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202206182000804.png)
   >
   > * 字符串是可以和8种数据类型做运算的,运算完后还是字符串类型
   >
   > * String类型变量的使用
   >
   >   + String属于引用数据类型，翻译为字符串
   >   + 声明String类型变量时，使用一对“”
   >   + String可以和8中数据类型变量做运算，且运算只能是连接运算：+
   >   + 运算的结果仍然是String类型
   >
   > * +号，当左右操作数都不是字符串类型，那么进行的是算术运算，否则是连接运算
   >

16. > ```java
    > char c = 'a'; // 97
    > int num = 10;
    > String s = "hello";
    > System.out.println(c + num + s); // 107hello
    > System.out.println(c + s + num);
    > System.out.println(c + (num + s));
    > System.out.println((c + num) + s);
    > System.out.println(str + num + s);
    > ```
    >
    >  
    >
    > ```java
    > System.out.printf('*' + ''\t'' + ' *' );
    > System.out.printf('*' + ('\t' + "*"));
    > // 二者的输出都是*  *
    > // 当其他数据类型和字符串类型发生运算时，其他数据里数据类型先转成字符串类型
    > ```
    >
    > 
    >
    > ```java
    > String s = "sgj";
    > int a = (int)String;
    > // byte、short、char --> int > long --> float --> double
    > // 上面是针对基本数据类型的算术运算，强制类型转换也是针对基本数据类型的
    > // 而String是引用数据类型，不能用与基本数据类型做算术运算，与基本数据类型做的
    > // 是连接
    > ```

# D2

1. > ![image-20220619163322865](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202206191633920.png)

2. > 对于多个运算符在一起的表达式，从会变得角度我们也可以看出，一般指令有两个操作数，也就是说按照运算符的优先级，先运算哪两个操作数，将这两个操作数送到寄存器的时候，还要看是否两个操作数的类型需要转换，处理完这个运算符，再处理下一个运算符。类型转换，是发生在运算符的两个操作数之间，而不是一上来直接就把所有的数据转换容量最大的数据类型，什么时候用到这个运算符，什么时候考虑运算符两侧的操作数类型转换的事情
   >
   > ![image-20220619164946840](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202206191649882.png)

3. > 取模返回值的正负和被模数一致
   >
   > ![image-20220619170023363](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202206191700390.png)
   >
   > <img src="https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202206191704729.png" alt="image-20220619170409699" style="zoom:200%;" />

4. > * ++,不会改变本身的数据类型，这是因为加1，1的数据类型和变量的数据类型一致
   >
   > ```java
   > short s1 = 10;
   > s1 = s1 + 1 // 错误
   > s1 = (short)(s1 + 1); // 正确
   > s1++;
   >     
   > ```
   >
   > * 如果整型字面常量的大小小于数据类型所能装的大小，那么也可以不用强转，但是字符型必须要后面加个f当是单精度时
   >
   >   ![image-20220619172004121](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202206191720157.png)
   >
   >   
   >
   >   ```java
   >   byte b = 127;
   >   b1++ ;//结果是-128，因为自增加1，1的数据类型和b1的一致，所以导致了溢出
   >   ```

5. > ```java
   > // 连续赋值
   > int i ,j;
   > i = j = 10;   // (1)
   > int i = 10, j = 10;
   > 
   > ```
   >
   > ![image-20220619173040281](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202206191730321.png)

6. > * +=等这些赋值运算符，不会改变数据类型。有以下两种情况
   >
   > ```java
   > short s = 10;
   > s = s + 10；// 错误
   > s += 10;    // 正确
   > 
   > 
   > // 1. 变量 
   > int a = 1000;
   > byte b = 0;
   > b += a;	
   > // 因为a的容量更大，所以b要先转，再与a进行运算，最后在强制类型转换成b的数据类型
   > 
   > // 2. 字面常量
   > short s = 10;
   > s += 10;
   > // s要先转成int,最后再转成short
   > 
   > 
   > // 总结
   >  s += a 
   > //虽然上面式子可以写成s = s + a，可是遵循的规则是，s和a转成容量更大数据类型，   最后的结果再强制类型转换成s的数据类型     
   > ```

7. > ```java
   > num++++;
   > (num++)++;  // 这两种方式都不可以
   > ```

8. > * 对于布尔类型，& | 是逻辑运算符，对于int等数据类型就是位运算符
   >
   > * 区分&和&&
   >
   >   * 相同点1：& 与 && 的运算结果一致
   >   * 相同点2：当符号左边是ture,二者都会进行符号右边的运算
   >   * 不同点：  当符号左边是false时，&执行左边的操作，而&&不会
   >
   >   ```java
   >   boolean b = false;
   >   int num = 10;
   >   // 1
   >   if(b1 & (num++))；
   >    System.out.println(num);  // num = 11
   >         
   >   // 2 
   >   if(b1 && (num++));
   >   System.out.println(num);  // num = 10
   >         
   >   // 这就是逻辑与和短路与的区别，短路与&&，当左边为假时，右边就不参与运算
   >   ```
   >
   > <img src="https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202206191954576.png" alt="image-20220619195424544" style="zoom:200%;" />

9. > ![image-20220619195924387](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202206191959419.png)
   >
   > ![image-20220619195720953](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202206191957991.png)

10. > ![image-20220619202432539](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202206192024586.png)

11. > * 一个workspace可以有多个project
    > * 一个project可以有多个包
    >
    > ![image-20220619221616471](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202206192216504.png)

12. > * 按住ctrl键，同时鼠标指向类名，点击就可以看见源码
    >
    >   ![image-20220619222938578](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202206192241192.png)
    >
    >   ![image-20220619223249095](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202206192232121.png)

# D3

1. > ![image-20220620064640834](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202206200646883.png)

2. > ```java
   > // 1. 
   > int num;   // 声明
   > num = 20;  // 初始化
   > 
   > // 2. 
   > int num = 10; // 声明 + 初始化
   > ```

3. > ```java
   > // 1. 一维数组的声明和初始化
   > 
   > // 1.1 静态初始化：数组的初始化和数组元素的赋值操作同时进行
   > int[] ids;      // 声明
   > ids = new int[]{1,2,3,4};
   > 
   > int[] ids = {1,2,3}; // 也是可以，这叫类型推断，前面的int[]不能省
   > 
   > // 1.2 动态初始化：数组的初始化和数组元素的赋值操作分开进行
   > String[] names = new String[3];  // 3是元素个数
   > 
   > // 错误写法
   > int[] arr1 = new int[];
   > int[5] arr2 = new int[];
   > int[] arr3 = new int[3]{12,2,3,4};
   > 
   > // 总结
   > // 数组一旦初始化，其长度就确定了		
   > ```
   >
   > ![image-20220620070435929](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202206200704963.png)

4. > 数组的初始化
   >
   > * boolean 在内存中，false是用0充当，true是用1充当
   >
   > * null表示空值，没有数值
   >
   > * ```java
   >   boolean[] arr4 = new boolean[]{ture, false};
   >   // 这种方式也属于静态初始化，但是一开始初始化为false，后面用{true，false}
   >   // 给覆盖掉了
   >   ```
   >
   >   
   >
   > ![image-20220620072126965](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202206200721001.png)
   >
   > ![image-20220620073321148](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202206200733185.png)

5. > ![image-20220620073743757](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202206200737797.png)

6. > 数组的内存解析
   >
   > ```java
   > int[] arr;
   > arr = new[]{1,2,3};
   > // 内存
   > // 先在栈区开辟一个arr的变量空间，后再堆区创建一个数组存放{1, 2, 3}
   > // 最后把堆区开辟数组的首元素的地址赋给arr
   > ```
   >
   > ![image-20220620074837100](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202206200748130.png)

7. > * ctrl + d 选中后删除
   > * ctrl + shift + f 选中后调整

8. > 二维数组
   >
   > * ```java
   >   // 静态初始化
   >   int[][] arr = {{1,2,3},{13}};  // 自动类型推导
   >   ```
   >
   > * 二维数组可以看成是其元素是一维数组，所以其长度是一位数组的个数

9. > ![image-20220620082409497](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202206200824540.png)
   >
   > ![image-20220620082551733](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202206200825769.png)

10. > ![image-20220620132206793](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202206201322852.png)

 # D4

1. > ![image-20220620192859886](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202206201930862.png)

2. > 如果方法没有返回值，则方法声明时使用void来表示，没有返回值的方法，就不使用
   >
   > 返回值，如果使用return，只能用“return ；”，表示结束此方法。

3. > `ctrl + shift + h`,可以搜索类

4. > ==return关键字的使用==
   >
   > * 结束方法
   > * 针对于有返回值类型的方法，使用`return 数据`方法所要的数据
   >
   > ==注意==
   >
   > * return关键字后面不可以声明执行语句
   > * 方法的使用中，可以调用当前类的属性和方法。特殊的，方法A调用方法A,即递归方法（需要设计结束条件）

5. > ==理解万事万物皆对象==
   >
   > * 在java语言范畴中，将功能和结构等都封装到类中，通过类的实例化，来调用具体的功能结构，

6. > ==内存解析的说明==
   >
   > * 引用类型的变量，存在栈中，只能可能存储两类值：null、地址值（含变量的类型）

7. > ==匿名对象的使用==
   >
   > * 创建的对象，没有显示的赋给一个变量名，即匿名对象
   > * 匿名对象只能调用一次。
   > * 可以形参使用，即`mail(new phone())`,mai是个方法，形参类型是phone。
   >
   > ```java
   > class Person{
   >     int name;
   >     int age;
   > }
   > new Person().name; // 创建完直接调用
   > new Person().name; // 上下两个的对象不一致，因为每new一次，就创建一个对象
   >                    //  只不过这里创建的是匿名对象    
   > ```

8. > ==方法重载==
   >
   > * 定义：在同一个类中，允许一个以上的同名方法，只要它们的参数个数或者参数类型不同即可
   >
   >   两同：同一个类，相同方法名
   >
   > * 判断是否重载
   >
   >   跟方法的权限修饰符、返回值类型、形参类型名、方法体都没有关系
   >
   > ![image-20220620213437789](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202206202134826.png)
   >
   > ![image-20220620213448856](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202206202134884.png)

9. > ![image-20220620214853423](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202206202148454.png)
   >
   > ![image-20220620215100107](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202206202151183.png)
   >
   > ```java
   > show (String ... sts);
   > // 使用
   > show("aa", "bb");
   > show({"aa", "bb"});
   > // 把可变形参看作数组名就可以，遍历其中的元素时，和数组一致，都有
   > // strs.length strs[1]
   > ```

10. > ![image-20220620220016821](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202206202200852.png)

11. > 
    >  * 类中属性的使用
    >  * 
    >  * 属性(成员变量) VS 局部变量
    >  * 
    >  * 1. 相同点：
    >  * 		1.1 定义变量的格式：数据类型 变量名 = 变量值 
    >  * 		1.2 先声明，后使用
    >  * 		1.3 变量都有其作用域
    >  * 
    >  * 
    >  * 2. 不同点
    >  * 		2.1 在类中声明的位置不同
    >  * 			属性：直接在类的一对{}内
    >  *          局部变量：声明在方法内、方法形参、代码块内、构造器形参、构造器内部的变量
    >  *        
    >  *		2.2 关于权限修饰符的不同
    >  *			属性：          可以在声明其属性时，指明其权限，使用权限修饰符
    >  *			              常用的权限修饰符：private、public、缺省、protected
    >  *			局部变量：       不可以使用权限修饰符。但其所在的方法可以写，可以认为方法写了，
    >  *				          里面的局部变量跟方法的一致
    >  *		2.3	默认初始化值的情况:          
    >  * 		    类的属性：       根据其类型都有默认初始化值。跟之前的一致。
    >  * 						  整型(byte short int long) 0
    >  *                        浮点型(float double) 0.0
    >  *                        字符型(char): 0
    >  *                        布尔型(boolean): false
    >  *                        
    >  *                        引用数据类型(类、数组、接口、字符串): null
    >  *          局部变量：       无初始化值。意味着在调用局部变量之前，一定要显示赋值
    >  *                        特别地: 形参在调用时，再赋值即可
    >  *     2.4 在内存中加载的位置
    >  *         属性:           加载到堆空间(非static)
    >  * 局部变量:        加载到栈空间                        	

12. > * 一. Java面向对象学习的三条主线
    >  * 1. java类及类的成员，属性、方法、构造器（这三个最重要）；代码快和内部类
    >  * 
    >  * 2. 面向对象的三大特征：封装、继承、多态性  
    >  * 
    >  * 3. 关键字：this、super、static、final、interface、pakage、import等
    >  * 
    >  * 
    >  * 
    >  * 
    >  * leaning:
    >  * 1. 面向过程： 怎么做，强调做的过程
    >  * 2. 面向对象: 谁来做，把做的功能封装进对象，强调能实现该功能的人
    >  * 
    >  *  面向对象的两个要素
    >  *  1. 类：对一类事物的描述，是抽象的、概念上的定义。 可以理解成抽象概念上的人
    >  *  2. 对象：是实际存在的该类事物的每个个体，因而也被称为实例（instance）。 可以理解成实实在在的某个人
    >  *  3. 面向对象设计的重点是类的设计
    >  *  4. 设计类，就是设计类的成员
    >  *  
    >  *  注意：对象是实现功能的，得具有实现类中对象功能的功能，而类中的对象得具有功能来让类创建的对象实现。类中调用
    >  *      就是来实现类中对象功能，这也体现出类创建的对象有实现类内对象的功能的功能。例如，电话有打电话的功能
    >  *      而人有实现打电话的这个功能的功能，这个功能就是调用 

13. > * 一、设计类，就是设计类的成员
    >  * 
    >  *    Field = 属性 = 成员变量 = 域、字段
    >  *    Method = 方法 = 函数
    >  *    创建类的对象 = 类的实例化 = 实例化类
    >  *    
    >  * 二、类和对象的使用（类和对象思想的落地）
    >  *    1. 创建类、设计类的成员
    >  *    2. 创建类的对象
    >  *    3. 通过“对象.属性”或“对象.方法”，调用对象的结构   
    >  *    
    >  * 三、如果创建了一个类的多个对象，则每个对象都独立拥有一套类的属性（非static)
    >  * 	  意味着: 如果我们修改一个对象的属性a,则不影响另外一个对象a的属性值

14. > 当一个类中有多个方法时，调用这些方法时，会为这些方法单独开辟一些内存空间
