/* 
 * ������Ϊ��ѡ���Դ������
 * �������İ�Ȩ(����Դ�뼰�����Ʒ����汾)��һ�й������С�
 * ����������ʹ�á�������������
 * ��Ҳ�������κ���ʽ���κ�Ŀ��ʹ�ñ�����(����Դ�뼰�����Ʒ����汾)���������κΰ�Ȩ���ơ�
 * =====================
 * ����: ������
 * ����: sunmingbao@126.com
 */

#ifndef  __DEBUG_H__
#define  __DEBUG_H__

#include <stdint.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

#define    DBG_PRINT(fmt, args...) \
    do \
    { \
        printf("DBG:%s(%d)-%s:\n"fmt"\n", __FILE__,__LINE__,__FUNCTION__,##args); \
        fflush(stdout); \
    } while (0)

#define    DBG_PRINT_S(fmt, args...) \
    do \
    { \
        printf("DBG:%s(%d)-%s:\n"fmt"\n", strrchr(__FILE__, '/')+1,__LINE__,__FUNCTION__,##args); \
        fflush(stdout); \
    } while (0)

#define    DBG_PRINT_QUIT(fmt, args...) \
    do \
    { \
        printf("DBG:%s(%d)-%s:\n"fmt"\n", __FILE__,__LINE__,__FUNCTION__,##args); \
        fflush(stdout); \
        exit(1); \
    } while (0)

#define    ERR_DBG_PRINT(fmt, args...) \
    do \
    { \
        printf("ERR_DBG:%s(%d)-%s:\n"fmt": %s\n", __FILE__,__LINE__,__FUNCTION__,##args, strerror(errno)); \
        fflush(stdout); \
    } while (0)

#define    ERR_DBG_PRINT_QUIT(fmt, args...) \
    do \
    { \
        printf("ERR_DBG_QUIT:%s(%d)-%s:\n"fmt": %s\n", __FILE__,__LINE__,__FUNCTION__,##args, strerror(errno)); \
        fflush(stdout); \
        exit(1); \
    } while (0)

void print_mem(void *start_addr, uint32_t length);


#endif
