#define _CRT_SECURE_NO_WARNINGS

                      //ö��
enum Day
{
   //ö�ٳ���
    Mon,   //0
    Tues,  //1            //�ö��Ÿ���
    Wed,   //2
    Thur,  //3
    Fri,   //4
    Sat,   //5
    Sun    //6
};
int main()
{
    enum Day d = Fri;
    printf("%d %d", Mon, d);   //��ӡ��0 4
    return 0;
}
enum Day
{
    Mon = 1,   // ֻҪ����һ�������������
    Tues,                                     //�ö��Ÿ���
    Wed,   
    Thur,  
    Fri,   
    Sat,   
    Sun    
};
int main()
{
    enum Day d = Fri;
    printf("%d %d", Mon, d);   //��ӡ��1 5
    return 0;
}