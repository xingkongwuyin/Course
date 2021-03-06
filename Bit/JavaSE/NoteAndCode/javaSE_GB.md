# 初识java及数据类型_0725

1. **==path的作用==**

   + 一般在dos命令窗口，执行一个命令会先解析这个命令，查找这个命令中的程序和文件在文件目录里。dos一般会在当前目录下找，找不到就会去path路径下找。所以设置环境变量会帮助我们快速使用命令
   + 相关图例
     + ![image-20220724201813064](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202207251011246.png)
     + ![image-20220724203442168](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202207251011582.png)

2. **==为什么配置了path还要配置JAVA_HOME和CLASSPATH==**

   * 利用JAVA_HOME配置环境变量，其相当于是个变量。最好在Path中直接写目录的绝对路径

     ，因为有的电脑，一重启JAVA_HOME，这个路径就失效了。
     
   * CLASSPATH（类路径）：印象笔记

3. **==字节码文件（.class文件）是二进制文件。编译是把java文件变成字节码文件==**

   ![image-20220725154419745](https://dawn1314.oss-cn-beijing.aliyuncs.com/202207251544802.png)

4. **==文档注释==**

   ![image-20220724215050905](https://dawn1314.oss-cn-beijing.aliyuncs.com/202207251613013.png)



# 数据类型&运算符

1. **==数据类型分类==**

   * 基本数据类型

     ![image-20220726103942181](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202207261039212.png)

   * 引用数据类型

     数组、字符串、类、接口、枚举、String……

2. **==变量的分类==**

   * 局部变量：方法内部定义的变量
   * 成员变量：类和对象中成员

3. **==变量初始化==**

   + 变量在定义的时候可以不初始化，但是在使用的时候一定要初始化，不像C语言会默认初始化（随机值或者0）

     ![image-20220726115331659](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202207261153717.png)

   * java里面是没有所谓的无符号和有符号这样的说法，既能保存正数也能保存负数，最高位为符号位，相当于整型、浮点型和字符型都是有符号的

   

4. **==configuration==**

   + ![image-20220726105712928](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202207261057966.png)
   + 如果在git管理的文件夹中建立project，那么IDEA会自动管理这个文件夹
   + ![image-20220726114548598](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202207261145665.png)