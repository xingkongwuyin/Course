# 初识java及数据类型_0725

1. **==path的作用==**

   + 一般在dos命令窗口，执行一个命令会先解析这个命令，查找这个命令中的程序和文件在文件目录里。dos一般会在当前目录下找，找不到就会去path路径下找。所以设置环境变量会帮助我们快速使用命令
   + 相关图例
     + ![image-20220724201813064](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202207251011246.png)
     + ![image-20220724203442168](https://dawn1314.oss-cn-beijing.aliyuncs.com/typora202207251011582.png)

2. **==为什么配置了path还要配置JAVA_HOME和CLASSPATH==**

   * 利用JAVA_HOME配置环境变量，其相当于是个变量。最好在Path中直接写目录的绝对路径

     ，因为有的电脑，一重启JAVA_HOME，这个路径就失效了。
     
   * classpath：印象笔记

3. **==字节码文件（.class文件）是二进制文件。编译是把java文件变成字节码文件==**

   ![image-20220725154419745](https://dawn1314.oss-cn-beijing.aliyuncs.com/202207251544802.png)

4. **==文档注释==**

   ![image-20220724215050905](https://dawn1314.oss-cn-beijing.aliyuncs.com/202207251613013.png)