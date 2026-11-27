////4-5结构 指针 循环
#include <iostream>
#include<vector>
#include<ctime>
// //13,延迟循环
//int main()
//{
//	using namespace std;
//	cout << "输入等待时间";
//	float manbo;
//	cin >> manbo;
//	clock_t delay = manbo * CLOCKS_PER_SEC;		//delay 需等待时钟节拍	大写一串 一秒多少时钟节拍
//	cout << "starting\a\n";
//	clock_t start = clock();		//按下秒表（记录起点）
//	while (clock() - start < delay);		//当前时间减去起始时间
//	cout << "done\a\n";		
//	return 0;
}
//// //12,for访问字符串
//int main()
//{
//	using namespace std;
//	cout << "输入单词";
//	string word;
//	cin >> word;
//	for (int i = word.size() - 1;i >= 0;i--)		///word.size() 的返回值类型是 size_t（一种无符号整数类型）。如果 word 是一个空字符串（""），那么 word.size() 的值是 0
//		cout << word[i];
//	cout << "\nok\n";
//	return 0;
//}
// //11,阶乘
//const int manbo = 15;//定义不修改的常量
//int main()
//{
//	long long jiecheng[manbo];		//manbo=15
//	jiecheng[1] = jiecheng[0] = 1ll;		//明确long long避免溢出
//	for (int i = 2; i < manbo; i++)		//i++可替换为i=i+by，by为自定义数
//	{
//		jiecheng[i] = i * jiecheng[i - 1];		//计算
//	}
//	for (int i = 0;i < manbo;i++)
//	{
//		std::cout << i << "!= " << jiecheng[i] << std::endl;
//	}
//	return 0;
//}
// //10，基础for循环
//int main()
//{
//	using namespace std;
//	cout<<"输入循环次数";
// int jimi;
// cin>>jimi;
// cout<<jimi<<endl;
// int i;
// if (0 < jimi && jimi > 20)
// {
//	 cout << "太多了，最多20次" << endl;
//	 jimi = 20;
// }
// else
//	 cout<<"太少了，弄不了" << endl;
//	for (i = 0;i < jimi;i++)
//		cout << "manbo!" << endl;
//	cout << "stop" << endl;
//	return 0;
//}
// //9，内存分配
// #include<array>
//int main()
//{
//	using namespace std;
//	double a1[4] = { 1.1,2.2,3.3,4.4 };
//	vector<double>a2(4);		//动态分配，数值可变
//	a2[0] = 1.0 / 3.0;
//	a2[1] = 1.0 / 5.0;
//	a2[2] = 1.0 / 6.0;
//	a2[3] = 1.0 / 7.0;
//	array<double, 4>a3 = { 1.55,4.11,3.55,2.15 };		//静态分配，内容固定
//	array<double, 4>a4;
//	a4 = a3;		//可将一个array赋给另一个array
//	cout << "a1[2]" << a1[2] << " zai " << &a1[2] << endl;
//	cout << "a2[2]" << a2[2] << " zai " << &a2[2] << endl;
//	cout << "a3[2]" << a3[2] << " zai " << &a3[2] << endl;
//	cout << "a4[2]" << a4[2] << " zai " << &a4[2] << endl;
//	a1[-2] = 10.5;		//会被转换为*(a1-2)=10.5， 移动 16 字节，然后将 10.5 写入该地址。属于越界访问，可能会崩溃或覆盖其他变量		使用a2.at(1)可在运行时捕捉非法索引
//	cout << "a1[-2]" << a1[-2] << " zai " << &a1[-2] << endl;
//	cout << "a3[2]" << a3[2] << " zai " << &a3[2] << endl;
//	cout << "a4[2]" << a4[2] << " zai " << &a4[2] << endl;
//	return 0;
//}
// // //8，delete使用
//#include <cstring>
//using namespace std;
//char* manbo (void);		//声明不要有=
//int main()
//{
//	char* man;
//	man = manbo();
//	cout << man << "zai  " << (int*)manbo << endl;
//	delete[]man;
//	man = manbo();
//	cout << man << "zai  " << (int*)manbo << endl;
//	delete[]man;
//	return 0;
//}
//char* manbo()
//{
//	char hajimi[80];
//	cout << "输入点啥\n";
//	cin >> hajimi;		//当心缓存泄露
//	char* pn = new char[strlen(hajimi) + 1];
//	strcpy_s(pn, strlen(hajimi) + 1, hajimi);		//	strcpy(pn, hajimi);会报error C4996,微软担心缓冲区溢出，所以强行把它标记为“不安全”
//	return pn;
//}													//此处输入后示例显示地址应为不同，但本代码显示为相同，ai说多释放了一次内存，但经本人比对结构似乎并无不同，或为vs版本区别	
// //7，指针使用
//int main()
//{
//    using namespace std;
//    double manbo[3] = { 10000.0, 20000.0, 30000.0 };		//数组声明是长度即固定，用new声明可以在运行时更改
//    short hajimi[3] = { 3, 2, 1 }; 
//    double* pm = manbo;											//pm声明指向double，初始化为manbo第一个元素地址  manbo=&manbo[0]
//    short* ph = &hajimi[0];
//    cout << "初始状态: pm = " << pm << ", *pm= " << *pm << endl;
//    pm =pm + 1;																//指针加 1，内存地址增加的字节数 = 指针类型的大小
//    cout << "加1后: pm = " << pm << ", *pm= " << *pm << endl << endl;
//    cout << "初始状态: ph= "<<ph<< ", *ph= " << *ph << endl;
//    ph =ph+1;
//    cout << "加1后:   pn = " << ph << ", *ph = " << *ph << endl << endl;
//    cout << "使用数组表示: hajimi[0] = " << hajimi[0] << ", hajimi[1] = " << hajimi[1] << endl;
//    cout << "使用指针表示: *hajimi = " << *hajimi << ", *(hajimi+1) = " << *(hajimi+ 1) << endl << endl;
//    cout << "sizeof(manbo)= " << sizeof(manbo) << " (数组节数)" << endl;										//sizeof对数组求数组长，对指针求指针长		
//    cout << "sizeof(ph)= " << sizeof(ph) << " (指针字节数)" << endl;
//    return 0;
//}
// //6，动态分配数组
//int main()
//{
//	using namespace std;
//	double* manbo = new double[3];		//新建一个double类型的数组，大小为3，指针manbo指向数组首地址  前一个double表示数组元素类型，后一个表示数组类型
//	manbo[0] = 2;	
//	manbo[1] = 5;
//	manbo[2] = 6;
//	cout << "manbo[0] = " << manbo[0] << endl;
//	manbo = manbo + 1;					//+1后double + 8 个字节，manbo 的地址向后移动了 8 字节，解引用指向[1]。
//	cout << "manbo[0]现在=" << manbo[0] << endl;		//manbo[i] 和 *(mannbo + i) 是等价的，数组名manbo会被解释为第一个元素的地址（即 &manbo[0]）。
//	cout << "manbo[1] = " << manbo[1] << endl;
//	manbo = manbo - 1;	//此处若不减1，manbo指向的地址就不是数组首地址，程序会报错
// delete[] manbo;		//释放动态分配的内存
//	return 0;
//}
// //5，动态分配
//int main()
//{
//    using namespace std;
//    int nights = 1001;               
//    int* pt = new int;               // 动态分配一个能装int的内存空间，并把地址给pt。数组同理
//    *pt = 1001; 
//    cout << "nights value = ";
//    cout << nights << ": location " << &nights << endl; 
//    cout << "int *pt value = ";
//    cout << *pt << ": location " << pt << endl;         // 打印pt指向空间里的值，以及pt里存的地址
//    delete pt;                        // 释放pt指向的内存，与new配套使用
//    return 0;
//}
// //4,指针声明
//using namespace std;
//int main() {
//    int manbo = 6;
//    int* pmanbo;		//int* a，int *a，int*a均可
//    pmanbo = &manbo;
//    int dizhi = 100;
//    int* pdizhi = &dizhi;			// 打印解引用和原变量的值
//    cout << *pmanbo << endl; 
//    cout << manbo << endl << endl;		// 打印两个变量的内存地址
//    cout << &dizhi << " " << &manbo << endl;		// 打印两个指针里存的地址
//    cout << pdizhi << " " << pmanbo << endl;
//    *pmanbo = *pmanbo + 1;
//    cout << manbo << endl; // 7
//    return 0;
//}
// //3，结构数组
//struct manbo
//{
//	char name[20];
//	float tiji;
//	double jiage;
//};
//int main()
//{
//	using namespace std;
//	manbo hajimi[2] =
//	{
//	{ "man",5.5,6.6 },		//注意数组{}以及两元素用‘，’分割
//	{ "jimi", 30, 40 }
//	};
//	cout << "a " << hajimi[0].name << "and " << hajimi[1].name << endl;		//注意[]访问数组元素
//	cout << "a+b " << hajimi[0].jiage + hajimi[1].jiage << endl;
//	return 0;
//}
// //2,成员赋值
//using namespace std;
//struct manbo
//{
//    char name[20];
//    float tiji;
//    double jiage;
//};		//此处可以直接写结构变量名
//int main()
//{
//    manbo hajimi =
//    {
//        "sunflowers",
//        0.20,
//        12.49
//    };
//    manbo choice;                    // 声明一个未初始化的结构体变量
//    cout << "hajimi: " << hajimi.name << " for yuan";
//    cout << hajimi.jiage << endl;
//    choice = hajimi;                     // 结构体整体赋值
//    cout << "choice: " << choice.name << " for yuan";
//    cout << choice.jiage << endl;
//    return 0;
//}
// //1，结构声明
//struct manbo	//声明结构变量，注意花括号和最后分号 manbo为新定义结构体的名  注意外部与局部声明区别
//{
//	char name[20];
//	float tiji;
//	double yuan;
//};						
//int main()
//{
//	using namespace std;
//	manbo wanju =		//wanju为结构变量名
//	{
//	"hajimi",		
//	1.88,
//	29.99
//	};					//以上内容可放一行{"hajimi",1.88,29.99}
//	manbo wanou =		//wanou同上
//	{
//	"game",
//	3.11,
//	32.99
//	};
//	cout << "你想要的" << wanou.name;		//注意使用结构变量名.具体变量名
//	cout << "and " << wanju.name << endl;
//	cout << "你需要支付" << wanju.yuan + wanou.yuan << endl;		//注意结构体成员的访问
//	return 0;
//}						//也可将name指定为string对象，注意std

//特点简述
//string	自动管理内存处理文本
//struct	不同类型打包描述一个"实体"（如学生、商品）
//union	     共享内存、节省空间	
//enum	    命名整数常量状态码、选项
//指针	    存地址、动态内存、函数传参
//new		int* p1 = new int，注意与delete配合使用，delete a，注意数组delete 【】a
//static/外部定义		静态存储；			new delete		动态存储；		自动存储		函数内常规变量
//ctime clock CLOCKS_PER_SEC每秒系统单位数
//cin.get(忽略空格换行制表)
