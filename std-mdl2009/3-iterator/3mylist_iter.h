#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>

template <typename Item>    // item�����ǵ���������������˫���б�ڵ�
class ListIter
{
public :
    ///
    /// ���캯��
    ///
    ListIter(Item *p = NULL)
    :m_ptr(p)
    {
        /// NOP...
    }

    /// ����ʵ��copy ctor, ��Ϊ�������ṩȱʡ����Ϊ���㹻
    /// ����ʵ��operator=�� ��Ϊ�������ṩ��ȱʡ��Ϊ���㹻

    ///
    ///  ����ָ�������
    ///

    Item& operator*( ) const
    {
        return *m_ptr;
    }

    Item* oprrator->( ) const
    {
        return m_ptr;
    }


protected :
    item *m_ptr;                //  ����������֮�����ϵ
};




