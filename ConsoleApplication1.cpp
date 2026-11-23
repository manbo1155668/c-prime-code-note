//c++primeplus1-4.3章笔记
#include <iostream> 
#include<cmath>
#include<climits>

// //11，string与数组输出
//#include<string>
//int main()
//{
//	using namespace std;
//	char charr1[20];
//	char charr2[20] = "manbo";
//	string str1;							//str会自动处理大小，调整长度不必定义
//	string str2 = "hajimi";
//	string str3;
//	cout << "输入一种字符大于3的猫";
//	cin >> charr1;
//	cout << "输入另一种字符大于3的猫";		//运行时若2种猫输入均不超过3，运行时由于内存越界会报错
//	cin >> str1;
//	cout << "猫有" << charr1 << "和" << charr2  <<"以及"<< str1 << "和" << str2 << endl;
//	cout << "第三个字母在" << charr1 << "是" << charr1[2] << endl;
//	cout << "第三个字母在" << str1 << "是" << str1[2] << endl;
//	return 0;
//}
// //10，getline换行符
//int main()
//{
//	using namespace std;
//	const  int manbo = 20;
//	char name[manbo];
//	char chide[manbo];
//	cout << "输入名字\n";
//	cin.getline(name,manbo);	//输入字符串，遇到换行符结束
//	cout << "输入想吃的\n";		
//	cin.getline(chide, manbo);	//若是使用get，调用两次时中间要用cin.get()清除缓冲区换行符，否则第二次调用会直接结束
//	cout << "想吃" << chide;	//get检查错误更容易点
//	cout << "名字" << name << endl;		//上述两种读取空行后输入会阻断，可用 cin.clear()回复输入
//	return 0;
//}
// // //9,float与计算	
//int main()
//{
//	using namespace std;
//	float manbo, hajimi;
//	cout.setf(ios_base::fixed, ios_base::floatfield);	//上节8所述，以小数输出
//	cout << "输入数字:";
//	cin >> manbo;
//	cout << "输入另一个数:";
//	cin >> hajimi;
//	cout << "manbo=" << manbo << "hajimi=" << hajimi << endl;
//	cout << "m+n=" << manbo + hajimi << "m-n=" << manbo - hajimi << endl;			//如果此处出现如11.17+50.25应等于61.42，输出却为61.4999998，此为f精度所致
//	cout << "m*n=" << manbo * hajimi << "m/n=" << manbo / hajimi << endl;	// 		//注意“%”为整形，不能用在f
// 
// int jisuan=5+3*2;	
// int jisuan2 = 120 / 4 * 5;	//乘除从左到右
// short chicken=20;			//计算bool，char，unsigned/signed char，short会将值转换为int
// cout << chicken << endl;	//c11中，转换优先级为long double》double》float》整形》均符号转高级》一有一无看级别》无符转有符》看二进制？（此处我也不确定，欢迎指教）
// cout << jisuan << endl;
// cout << jisuan2 << endl;
//	return 0;
//}
// //8,float double精度差异
//int main()
//{
//	using namespace std;
//	cout.setf(ios_base::fixed, ios_base::floatfield);	//强制浮点数以小数形式输出
//	float a = 10.0 / 3.0;		//至少6位精确
//	double b = 10.0 / 3.0;		//至少13位精确
//	const float million = 1.0e6;
//	cout << "a=" << a;
//	cout << " m*a=" << million * a;
//	cout << " 10ma=" << 10 * million * a << endl;
//	cout << " b=" << b;
//	cout << " mb=" << million * b << endl;
//	return 0;
//}
// //7.进制显示数
//int main()
//{
//	using namespace std;
//	int a = 55;
//	int b = 0x99;
//	int c = 013;
//	cout << "a=" << a << endl;	//55 55
//	cout << "b=" << b << endl;	//153 0x99
//	cout << "c=" << c << endl;	//11 13
//	cout << hex;							//16进制显示整数
//	cout << "a=" << a << endl;	//37 55
//	cout << oct;							//8进制
//	cout << "a=" << a << endl;	//67 55
//	return 0;
//}
// //6,数据溢出
//#define ZERO 0	//规定ZERO=0
//int main()
//{
//	using namespace std;
//	short manbo= SHRT_MAX;
//	unsigned short hajimi = manbo;	//unsigned存储0和正数，相对short存储翻倍
//	cout << "manbo有" << manbo << "元且hajimi有"<<hajimi;
//	cout << "元存款" << endl;
//	cout << "都存1元" << endl << "现在";
//		manbo = manbo + 1;
//	hajimi = hajimi + 1;	
//	cout << "manbo有" << manbo << "元hajimi有" << hajimi;
//		cout << "元存款\nmanbo爆仓了" << endl;			//+1后short数据溢出
//	manbo = ZERO;
//	hajimi = ZERO;
//	cout << "manbo有" << manbo << "元且hajimi有" << hajimi;
//	cout << "元存款" << endl;
//	cout<< "都取1元买彩票" << endl << "现在";
//		manbo = manbo - 1;
//	hajimi = hajimi - 1;
//	cout << "manbo有" << manbo << "元hajimi有" << hajimi;
//		cout << "元存款\nhajimi中奖了" << endl;			//unsigned只存0-正数，—1后溢出变为另一端最大
//	return 0;
//}
// //5，极限，注意INT_MAX等为头文件climit定义
//int main()
//{
//    using namespace std;
//    int M = INT_MAX;		//此处m a n bo均为变量
//    short A = SHRT_MAX;
//    long N = LONG_MAX;
//    long long BO = LLONG_MAX;
//    cout << "int is " << sizeof(int) << " 字节" << endl;	//int类型名在此运算需加括号
//    cout << "short is " << sizeof A << " 字节" << endl;	//变量名在此运算可选加括号
//    cout << "long is" << sizeof N<< " 字节" << endl;
//    cout << "long long is " << sizeof BO << " 字节" << endl << endl;
//
//    cout << "最大极限：" << endl;
//    cout << "int ：" << M << endl;
//    cout << "short ：" << A << endl;
//    cout << "long ：" << N << endl;
//    cout << "long long ：" << BO << endl << endl;
//
//    cout << "int 最小：" << INT_MIN << endl;
//    cout << "每字节位数：" << CHAR_BIT << endl;
//
//    return 0;
//}
// //4，简易换算	函数特性
//int shitou(int);	//函数头，原型（声明)
//int main()
//{
//	using namespace std;
//	int st;
//	cout << "输入待换算石重";
//	cin >> st;
//	int jin = shitou(st);	//接收返回值
//	cout << st << "英石约等于";
//	cout<<jin<< "斤" << endl;
//	return 0;
//}
//int shitou(int st)
//{
//	return st * 13;		//返回值，函数体
//}

// //3，函数定义必须用（），声明也是	int void return double不可做为	变量或函数名，cout可做变量 对象之一
//void simon(int);		//声明函数
//int main()
//{
//	using namespace std;
//	simon(3);		//第一次调用
//	cout << "输入整数";
//	int manbo;
//	cin >> manbo;
//	simon(manbo);		//第二次调用，manbo为变量
//	cout << "ok" << endl;
//	return 0;
//}
//void simon(int n)
//{
//	using namespace std;
//	cout << "simon 说, 你应该输入" << n << "个整数" << endl;
//}
// //2，此处额外调用cmath，写math.h也行
//int main()
//{
//	using namespace std;
//	double area;
//	cout << "输入面积";
//	cin >> area;
//	double side;
//	side = sqrt(area);
//	cout << "结果" <<side<< endl;
//	return 0;
//}
// //1，类似c#，仅替换scanf printf，不需"",()
//int main()
//{
//	using namespace std;    ///命名空间，别放头文件
//	int carrots;
//	cout << "你有几个萝卜?\n"<<endl;
//	cin >> carrots;
//	cout<<"还有俩. ";    //注意符号方向
//	carrots = carrots + 2;
//	cout << "你现在有" << carrots << "萝卜." << endl;  //此处较printf简易许多
//   return 0;
//}


/*0，c语言基础*/
/*一个标准的C程序包含预处理指令、全局声明、main函数和自定义函数。程序必须有且只有一个main函数，程序从main函数的最上面开始顺序向下执行。*/
/*编译预处理：#include、#define等在编译前由预处理器执行*/
/*基本数据类型：整型（int 4字节、short 2、long 4-8）、浮点型（float 4、double 8）、字符型（char）以及布尔型（_Bool或bool 1）。*/
/*数组：存储多个同类型值的连续内存空间，下标从0开始。		枚举（enum）：定义一组命名的整数常量。*/
/*程序结构：if - else、switch - case）、循环（for、while、do - while，注意default，break，continue运行*/
/*指针：保存变量地址的变量。 & 用于取地址， * 用于解引用（指针指向的值）。*/
/*指针与数组：当指针pa指向数组首元素时， * (pa + i)与a[i]等价*/
/*动态内存管理：malloc 分配指定内存，未初始化；calloc	分配精确的内存，初始化0；realloc	调整已分配内存的大小 free 释放*/
/*结构体（struct）：独立空间，总大小是所有之和。互不干扰。*/
/*联合体（union）：共享空间。联合体的大小等于其最大成员的大小。只能有一个成员保存有效的数据。（均需考虑分配的空闲内存即内存对齐）（结构体.成员/指针->成员）*/
/*文件操作：fopen打开*file，fclose关闭fp=fopen"data.bin","rb",rwa读写追加，二进制中rb wb*/
/*符合返回真      isdigit 0-9		islower a-z		isupper A-Z		isalpha	a-z/A-Z	isalnum A-Z/a-z/0-9*/
/*strlen 计算长度		strcpy复制		strcat链接		strcmp比较		strncpy限定长度复制*/
/*static 局部变量———生命周期     全局变量———作用域    修饰函数后只能在当前.c文件使用*/
/*以及c一些常用内容prinf scanf sizeof static extern ascll编码 大端小端 string库str系列 ctype库is系列 */
/*优先级：初等（括号/下标）>单目>算术>移位>关系>相等>位运算>逻辑>三目>赋值>逗号。单目、三目及赋值右结合，其余左结合*/  
/*条件表达式 ? 表达式1 : 表达式2  即条件表达式真选择1，假选择2(类ifelse)，    例a>b?a:b  注意多三目式时从右到左运算*/


//c++基本名词解释
// cout 输出；cin 输入；endl 较\n更快看结果，但运行更慢；cmath 数学库；sqrt 开平方函数；iostream 输出流；using namespace std; 省略std: std 命名空间；climits极限
//0x 十六进制；01/2/3/4/5/6/7 八进制；93/45/76首位非0十进制
