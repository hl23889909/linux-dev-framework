/* 
 * ������Ϊ��ѡ���Դ������
 * �������İ�Ȩ(����Դ�뼰�����Ʒ����汾)��һ�й������С�
 * ����������ʹ�á�������������
 * ��Ҳ�������κ���ʽ���κ�Ŀ��ʹ�ñ�����(����Դ�뼰�����Ʒ����汾)���������κΰ�Ȩ���ơ�
 * =====================
 * ����: ������
 * ����: sunmingbao@126.com
 */

#ifndef  __COMMON_H__
#define  __COMMON_H__

#define    ARRAY_SIZE(array_name)    (sizeof(array_name)/sizeof(array_name[0]))
#define    MEMBER_OFFSET(type_name, member_name)    ((unsigned long)(void *)(&(((type_name *)NULL)->member_name)))

#endif
