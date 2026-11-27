////6-8章分支，运算，函数
#include<iostream> 
////18,模板函数和显式具体化
//template<typename manbo>		//定义模板函数名
//void nuoyi(manbo& a, manbo& b);		//视情况自动替换int double
//template<>
//void nuoyi<double>(double& a, double& b);		//显式具体化，即数据匹配不使用模板，优先此定义
//using namespace std;
//int main()
//{
//
//	int i = 10;
//	int j = 20;
//	cout << "i: " << i << " j: " << j << endl;
//	cout << "乾坤大挪移" << endl;
//	nuoyi(i, j);
//	cout << "挪移后i: " << i << " j: " << j << endl;
//	double x = 33.24;
//	double y = 66.57;
//	cout << "x: " << x << " pig: " << y << endl;
//	cout << "乾坤大挪移" << endl;
//	nuoyi(x, y);
//	cout << "挪移后pig: " << x << " y: " << y << endl;
//}
//template<typename manbo>
//void nuoyi(manbo& a, manbo &b)
//{
//	manbo temp;		//ab值互换
//	temp = a;
//	a = b;
//	b = temp;
//}
//template<>			//注意空
//void nuoyi<double>(double& a, double& b)
//{
//	double temp;
//	temp = a;
//	a = b;
//	b = temp;
//	cout << " 显式具体化" << endl;
//}
////17,函数重载
//unsigned long manbo(unsigned long num, unsigned mb);		//声明两个名字相同，参数不同的函数manbo
//char *manbo(const char* str, int n );		//参数类型或个数不同可以共用一个名字。传入数字调用第一个，传入字符串调用第二个。
//int main()
//{
//	using namespace std;
//	const char *man = "hajimi!";
//	unsigned long n = 11155668;		//测试用字符串和数字
//	int i;
//	char* bo;
//	for (i = 1;i < 10;i++)
//	{
//		cout << manbo(n, i) << "\n";
//		bo = manbo(man, i);
//		cout << bo << endl;
//		delete[]bo;		//释放内存
//	}
//	return 0;
//}
//unsigned long manbo(unsigned long num, unsigned mb)
//{
//	unsigned aa = 1;
//	unsigned long n = num;
//	if (mb == 0 || num == 0)
//		return 0;
//	while (n /= 10)
//		aa++;		//算位数
//	if (aa > mb)
//	{
//		mb = aa - mb;		//把一个数字的后 mb 位砍掉。
//		while (mb--)
//			num /= 10;		//除掉后面数字
//		return num;
//	}
//	else
//		return num;
//}
//char* manbo(const char* str, int n = 1)
//{
//	if (n < 0)
//		n = 0;
//	char* p = new char[n + 1];		//内存里开辟一块空间，存放截取后字符。+1 是为了留给C++字符串结尾必须有的 \0
//	int i;
//	for (i = 0;i < n&& str[i];i++)
//		p[i] = str[i];		//复制剪切
//	while (i <= n)
//		p[i++] = '\0';		//循环把剩下空间填上 \0
//	return p;
//}
////16，引用比C语言指针的好，以及链式调用和连续赋值。
//#include<string>
//using namespace std;
//struct manbo			//定义结构体
//{
//	string name;		//string自动管理内存，输入就行
//	int made;
//	int changshi;
//	float percent;
//};
//void hajimi(const manbo& ft);		// & 用变量的名字直接操作原内存，不用*，*p
//void jimi(manbo& ft);
//manbo& jilei(manbo& target, const manbo& source);			//只读＋const
//int main()
//{
//	manbo one = { "manbo",1,1 };
//	manbo two = { "man",5,5 };
//	manbo three = { "bo",6,6 };
//	manbo four= { "ha",8,8 };
//	manbo five = { "jimi",9,9 };
//	manbo team = { "jieshu",0,0 };
//	manbo aa;
//	jimi (one);			//计算one命中率
//	hajimi (one);		//打印one
//	jilei(team, one);		//team=100%
//	hajimi(team);		//打印team
//	hajimi(jilei(team, two));		//team+two
//	jilei(jilei(team, three), four);//+3后+4
//	hajimi(team);
//	aa = jilei(team, five);		//逐步赋值
//	cout << "team:\n";
//	hajimi(team);
//	cout << "分配后:\n";
//	hajimi(aa);
//	jimi(four);			//计算four
//	jilei(aa, five) = four;		//aa=four
//	cout << "错误分配后：\n";
//	hajimi(aa);
//	return 0;
//}
//void hajimi(const manbo& ft)
//{
//	cout << "name:" << ft.name << endl;
//	cout << "made:" << ft.made<<endl;
//	cout << "changshi:" << ft.changshi << endl;
//	cout << "percent:" << ft.percent << endl;
//}
//void jimi(manbo& ft)
//{
//	if (ft.changshi != 0)
//		ft.percent = 100.0f * float(ft.made) / float(ft.changshi);
//	else
//		ft.percent = 0;
//}
//manbo& jilei(manbo& target, const manbo& source)
//{
//	target.changshi += source.changshi;
//	target.made += source.made;
//	jimi(target);
//	return target;
//}
////15，别名
//int main()
//{
//	using namespace std;
//	int manbo = 555;
//	int& man = manbo;			//man作为manbo别名，别名需声明就初始化
//	cout << "manbo=" << manbo << endl;		//注意表达式，别名，指针可以互用
//	cout << "man=" << man << endl;
//	man++;
//	cout << "manbo=" << manbo << endl;
//	cout << "man=" << man << endl;
//	cout << "manbodizhi:" << &manbo << endl;
//	cout << "mandizhi:" << &man << endl;
//}
// //14,内联函数
//inline double manbo(double x) { return x * x; }		//inline函数，调用manbo直接返回x*x。注意c语言（非c++）x为替换文本，则输入5+5时候输出5+5*5+5，需注意括号
//int main()
//{
//	using namespace std;
//	double man, bo;
//	double jimi = 11.2;
//	man = manbo(6.6);
//	bo = manbo(3.3);
//	cout << "man=" << man << "  bo=" << bo << "  jimi=" << jimi<<"\n";
//	cout << "JIMI方=" << manbo(jimi++) << "\n";
//	cout << "现在jimi=" << jimi;
//	return 0;
//}
////13,函数指针、函数指针数组、二级指针、数组指针
//const double* f1(const double ar[], int n);
//const double* f2(const double[], int);
//const double* f3(const double*, int);		//形式不同表达一样
//int main()
//{
//	using namespace std;
//	double manbo[3] = { 1155.66,2244.66,3388.66 };
//	const double* (*p1)(const double*, int) = f1;		//定义函数指针指向
//	auto p2 = f2;				//c++11中自动推断类型，类似同上
//	cout << "使用函数指针:\n";
//	cout << "\n地址		  值\n";
//	cout << (*p1)(manbo, 3) << ":" << *(*p1)(manbo, 3) << endl;		//注意*是指针定义形式还是解引用
//	cout << p2(manbo, 3) << ":" << *p2(manbo, 3) << endl;
//	const double* (*pa[3])(const double*, int) = { f1,f2,f3 };		//定义数组pa
//	auto pb = pa;			
//	cout << "\narray指针：\n";
//	cout << "\n地址		  值\n";
//	for (int i = 0;i < 3;i++)
//		cout << pa[i](manbo, 3) << ":" << *pa[i](manbo, 3) << endl;
//	cout << "\n二级指针：\n";
//	cout << "\n地址		  值\n";
//	for (int i = 0;i < 3;i++)
//		cout << pb[i](manbo, 3) << ":" << *pb[i](manbo, 3) << endl;
//	cout << "\n数组指针：\n";
//	cout << "\n地址		  值\n";
//	auto pc = &pa;							//pc指针指向pa
//	cout << (*pc)[0](manbo, 3) << ":" << *(*pc)[0](manbo, 3) << endl;
//	const double* (*(*pd)[3])(const double*, int) = &pa;		//pd指向pa地址
//	const double* pdb = (*pd)[1](manbo, 3);
//	cout << pdb << ":" << *pdb << endl;
//	cout << (*(*pd)[2])(manbo, 3) << ":" << *(*(*pd)[2])(manbo, 3) << endl;
//	return 0;
//}
//const double* f1(const double *ar, int n)
//{
//	return ar;
//}
//const double* f2(const double ar[], int)
//{
//	return ar + 1;
//}
//const double* f3(const double ar[], int)
//{
//	return ar + 2;
//}
////12，俄罗斯套娃基础
//void manbo(int n);
//int main()
//{
//	manbo(4);
//	return 0;
//}
//void manbo(int n)
//{
//	using namespace std;
//	cout << "已递归。。。" << n << "次" << endl;
//	if (n > 0)
//		manbo(n - 1);			//自己调用自己，但把n减1
//	cout << n << " manbo" << endl;;		//最后一行挪if上会完全一样数字连打2次
//}
////11,char存储字符串
//using namespace std;
//const int Seasons = 4;
//const char* season_names[Seasons] = { "Spring", "Summer", "Autumn", "Winter" };			//constchar*指向season
//void fill(double kx[]);
//void show(const double kx[]);
//int main() {
//    double kx[Seasons];
//    fill(kx);  // 输入开销
//    show(kx);  // 开销打印
//    return 0;
//}
//void fill(double kx[]) {
//    for (int i = 0; i < Seasons; i++) {
//        cout << "输入 " << season_names[i] << " 开销 ";         //输入字母或空格会导致输出异常，跳过部分季节
//        cin >> kx[i];
//    }
//}
//void show(const double kx[]) {
//    double total = 0.0; 
//    cout << "\n开销\n";
//
//    for (int i = 0; i < Seasons; i++) { 
//        cout << season_names[i] << ": " << kx[i] << endl;
//        total += kx[i]; 
//    }
//    cout << "总开销: " << total << endl; 
//}
// //10，string与函数调用
//#include<string>
//using namespace std;
//const int jimi = 5;
//void manbo(const string man[], int n);		//定义manbo，包含一个string数组和一个数
//int main()
//{
//	string list[jimi];
//	cout << "输入最喜欢的5样东西" << jimi << endl;
//	for (int i = 0;i < jimi;i++)
//	{
//		cout << i + 1 << ":";
//		getline(cin, list[i]);		//读取写入，完整放到list
//	}
//	cout << "your list:" << endl;
//	manbo(list, jimi);			//调用 manbo 函数，把数组和长度传进去进行打印
//	return 0;
//}
//void manbo(const string man[], int n)
//{
//	for (int i = 0;i < n;i++)
//	{
//		cout << i + 1 << ":" << man[i] << endl;
//	}
//}
////9，字符串做函数参数
//unsigned int manbo(const char* str ,char ch);
//int main()
//{
//	using namespace std;
//	char hajimi[15] = "hajimiha";
//	const char* man = "omjlmbohjm";		//无const可能报错
//	unsigned mh = manbo(hajimi, 'h');		//统计该数组中哪个字母
//	unsigned mm = manbo(man, 'o');
//	cout << mh << " h in " << hajimi << endl;
//	cout << mm << " m in " << man << endl;
//	return 0;
//}
//unsigned int manbo(const char* str, char ch)
//{
//	unsigned int count = 0;		// 计数，初始为0
//	while (*str)				// 没走完或没遇到 \0就接着往下
//	{
//		if (*str == ch)			//字符判断
//			count++;
//		str++;					//往下走
//	}
//	return count;
//}
// //8，数组与函数计算
//const int a = 8;
//int aabb(int arr[], int a);		//声明函数aabb，包含数组和数，		int arr[]可替换int*	arr
//int main()
//{
//	using namespace std;
//	int manbo[a] = { 1,3,5,6,7,8,66,99 };		//manbo数组有a个，具体为：
//	int aa = aabb(manbo, a);					//aabb计算manbo中a个数
//	cout << "饼干全部有：" << aa << "\n";
//	return 0;
//}
//int aabb(int arr[], int a)
//{
//	int total = 0;					//total：总数
//	for (int i = 0;i < a;i++)		//i=0为数组下标0开始
//		total = total + arr[i];		//一直加法
//		return total;
//}
// //7，函数接收两参数
//long double manbo(unsigned man, unsigned bo);
//int main()
//{
//	using namespace std;
//	long double haji, jimi;
//	cout << "从第一个数中挑选第二个数\，有多少种选择\n";			//此处类似组合数
//	while ((cin >> haji >> jimi) && jimi <= haji)
//	{
//		cout << "你有多少组合";
//		cout << manbo((unsigned)haji, (unsigned)jimi);		//不加unsigned视软件版本可能会出警告
//		cout << "下一组数(q to quit):";
//	}
//	cout << "bye\n";
//	return 0;
//}
//long double manbo(unsigned man, unsigned bo)
//{
//	long double result = 1.0;
//	long double n;
//	unsigned p;
//	for (n = man,p = bo;p > 0;n--,p--)		//注意此处分号逗号区分
//		result = result * n / p;			//Cmn组合数计算
//	return result;
//}
//	//6,函数原型和调用
//void cheers(int);		//声明（原型）名叫 cheers 的函数。接收一个整数，没有返回值
//double manbo(double x);				//声明了名叫 manbo 的函数
//double manbo(double x);
//using namespace std;
//int main()
//{
//	cheers(5);
//	cout << "输入数字" << endl;
//	double man;
//	cin >> man;
//	double jimi = manbo(man);		//调用 manbo 函数， 传入man。manbo 函数计算完立方后，把结果返回,用这个返回结果来初始化一个新的变量 jimi
//	cout << "A" << man << "的立方为";
//	cout << jimi << "\n";
//	cheers(manbo(2));
//	return 0;
//}
//void cheers(int n)
//{
//	for (int i = 0;i < n;i++)
//	{
//		cout << "hajimi";
//		cout << endl;
//	}
//}
//double manbo(double x)
//{
//	return (x * x * x);		//manbo 函数的具体实现。接收一个 double 类型的 x，计算它的立方（x* x* x），然后用 return 交还给调用它的地方。
//}
//// //5，文件写入，读取类似，只不过换几个字母
//#include<fstream>		//用来处理文件读写的头文件
//int main()
//{
//	using namespace std;
//	char manbo[50];
//	int year;
//	double man;
//	double bo;
//	ofstream jimi;		//open
//	jimi.open("hajimi.txt");		//新建/打开一个txt
//	cout << "输入品牌" << endl;
//	cin.getline(manbo, 50);		//读取包含空格的完整句子
//	cout << "输入年份" << endl;
//	cin >> year;
//	cout << "输入报价" << endl;
//	cin >> man;
//	bo = 0.8 * man;
//	cout << fixed;			//强制不使用科学计数法
//	cout.precision(2);		//控制浮点数
//	cout.setf(ios_base::showpos);		//显示正号
//	cout << "品牌" << manbo << endl;
//	cout << "year" << year << endl;
//	cout << "之前价格" << man << endl;
//	cout << "现在价格" << bo << endl;
//	jimi << fixed;					//将内容写入txt，其他与上面一样
//	jimi.precision(2);		
//	jimi.setf(ios_base::showpos);		
//	jimi << "品牌" << manbo << endl;
//	jimi << "year" << year << endl;
//	jimi << "之前价格" << man << endl;
//	jimi << "现在价格" << bo << endl;
//	jimi.close();
//	return 0;
//}
// //4，for 数组遍历文本
//const int manbo = 150;		//字符上限
//int main()
//{
//	using namespace std;
//	char jimi[manbo];
//	int kong = 0;
//	cout << "输入一段文本：\n";
//	cin.get(jimi,manbo);		//规定最大文本数
//	cout << "完整" << jimi << endl;
//	cout << "第一个字符前：\n";
//	for (int i = 0;jimi[i] != '\0';i++)		//！=\0为文本未结束就继续循环，常用于字符串
//	{
//		cout << jimi[i];
//		if (jimi[i] == '.')		//.就结束
//			break;
//		if (jimi[i] == ' ')
//			continue;
//		kong++;
//	}
//	cout << "\n" << kong<< "有效\n";
//	cout << "ok\n";
//	return 0;
//}
////3，条件运算符
//int main()
//{
//	using namespace std;
//	int a, b=0;
//	cout << "输入俩数:";
//	cin >> a>> b;		//注意c++中输入俩数不能用‘，’，应用连续提取符，逗号此处无意义
//	int c = a > b ? a : b;		//？：运算符，与c中一样
//	cout << "大的是" << c << endl;
//	return 0;
//}
////2，ctype统计
//#include <cctype> // 引入字符处理工具箱
//int main() {
//    using namespace std;
//    cout << "输入点啥，@结尾" << endl; // 提示用户输入，并说明用 @ 结束
//    char ch;
//    int kb = 0; // 统计空白字符（空格、换行、制表符等）
//    int sz = 0;      // 统计数字 (0-9)
//    int zm = 0;      // 统计字母 (a-z, A-Z)
//    int fh = 0;      // 统计标点符号 (!, ., ? 等)
//    int others = 0;     // 统计其他字符 (如 $, %, & 等)
//    cin.get(ch); // 获取第一个字符
//    // 只要输入的字符不是 '@'，就一直循环
//    while (ch != '@') {
//        if (isalpha(ch)) {       // 如果是字母
//            zm++;
//        }
//        else if (isspace(ch)) {  // 如果是空白字符
//            kb++;
//        }
//        else if (isdigit(ch)) {  // 如果是数字
//            sz++;
//        }
//        else if (ispunct(ch)) {  // 如果是标点符号
//            fh++;
//        }
//        else {                   // 如果都不是，那就是其他字符
//            others++;
//        }
//        cin.get(ch); // 获取下一个字符，准备下一次循环判断
//    }
//    // 循环结束（用户输入了@），打印最终的统计结果
//    cout << zm << " 字母, "
//        << kb << " 空白字符, "
//        << sz << " 数字, "
//        << fh << " 标点, "
//        << others << " 其他.\n";
//    return 0;
//}
////1，if与while使用
//const int manbo = 33;
//int main()
//{
//	using namespace std;
//	int n;
//	cout << "猜数字，输入1-100之间 "<< endl;
//		do
//		{
//			cin >> n;			//此处因为要先输入字母在判断，不能只使用ifelse，当cin后直接接if判断n取值，会导致输出一个else超出范围后退出程序
//			if (1 <= n && n <= 100)
//			{						
//				if (n < manbo)
//					cout << "小了" << endl;
//				else if (n > manbo)
//					cout << "大了" << endl;
//				else
//				{
//					cout << "对了" << endl;
//					cout << "结束游戏" << endl;
//				}			//注意break，不用会循环,还有括号
//			}
//			else if(n==19191)
//			{
//				cout << "manbo!" << endl;
//				cout << "超出范围" << endl;
//				cin.clear();
//				cin.ignore(10000, '\n');		//这两行清除缓存，防止输入字符时导致循环输出超出范围
//			}				
//			else
//			{
//				cout << "超出范围" << endl;
//				cin.clear();
//				cin.ignore(10000, '\n');				//此处else不需要cin n，会导致输出错位，例如连续输出3个555只输出2个超出范围
//		} while (n != manbo);
//	return 0;
//}


//isalnum 字母数字	isalpha 字母	isdigit 数字	islower 小写字母	ispunct标点符号		isspace标准空白字符		isupper大写字母		tolower大写转小写		toupper小写转大写
