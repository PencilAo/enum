#define _CRT_SECURE_NO_WARNINGS

                      //枚举
enum Day
{
   //枚举常量
    Mon,   //0
    Tues,  //1            //用逗号隔开
    Wed,   //2
    Thur,  //3
    Fri,   //4
    Sat,   //5
    Sun    //6
};
int main()
{
    enum Day d = Fri;
    printf("%d %d", Mon, d);   //打印出0 4
    return 0;
}
enum Day
{
    Mon = 1,   // 只要改这一个后面的依次排
    Tues,                                     //用逗号隔开
    Wed,   
    Thur,  
    Fri,   
    Sat,   
    Sun    
};
int main()
{
    enum Day d = Fri;
    printf("%d %d", Mon, d);   //打印出1 5
    return 0;
}