///c++11 ����1�����ģ�������Ƶ�
///http://blog.csdn.net/coolmeme/article/details/43986163
///http://blog.csdn.net/shinehoo/article/details/5722362
///  STLԴ������ PDF-119/534

#include <iostream>

template <typename T>
class C             //  ��������汾�������TΪ��������
{
    // NOP...
};


template <typename T>
class C<T*>             //  ��������汾j��������"TΪԭ��ָ������"
{
    //  TΪԭ��ָ�����TΪ�κ��ͱ��һ������һ������������
    // NOP...
};


template <typename Iter>
struct iterator_traits
{
    typedef typename I::value_type value_type��
};


template <class Iter>
//typename Iter::value_type          ///  ��һ����func�ķ���ֵ����
typename iterator_traits<Iter>::value_type
func(Iter iter)
{
    ///
    return *iter;
}


template<class Iter>
struct iterator_traits<Iter*>
{
    typedef T value_type;
};


int main(void)
{
    MyIter<int> ite(new int(8));
    std::cout <<func(ite) <<std::endl;
    return 0;
}
