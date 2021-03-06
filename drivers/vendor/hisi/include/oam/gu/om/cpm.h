

#ifndef __CPM_H__
#define __CPM_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include "vos.h"
#include "pslog.h"
#include "omnvinterface.h"

#pragma pack(4)

/*****************************************************************************
  2 宏定义
*****************************************************************************/

#define CPM_LOGIC_PHY_PORT(enLogicPort)     (g_astCPMLogicPortCfg[enLogicPort].enPhyPort)
#define CPM_LOGIC_SEND_FUNC(enLogicPort)    (g_astCPMLogicPortCfg[enLogicPort].pSendFunc)
#define CPM_LOGIC_RCV_FUNC(enLogicPort)     (g_astCPMLogicPortCfg[enLogicPort].pRcvFunc)

#define CPM_PHY_SEND_FUNC(enPhyPort)        (g_astCPMPhyPortCfg[enPhyPort].pSendFunc)
#define CPM_PHY_RCV_FUNC(enPhyPort)         (g_astCPMPhyPortCfg[enPhyPort].pRcvFunc)

/*****************************************************************************
  3 枚举定义
*****************************************************************************/

enum
{
    CPM_AT_COMM,
    CPM_OM_COMM,
    CPM_DIAG_COMM,
    CPM_PCVOICE_COMM,
    CPM_COMM_BUTT
};
typedef VOS_UINT32  CPM_LOGIC_PORT_ENUM_UINT32;

enum
{
    CPM_SEND_OK,
    CPM_SEND_FUNC_NULL,
    CPM_SEND_PARA_ERR,
    CPM_SEND_ERR,
    CPM_SEND_BUTT
};
typedef VOS_UINT32 CPM_SEND_RESULT_ENUM_UINT32;

/*****************************************************************************
  4 全局变量声明
*****************************************************************************/


/*****************************************************************************
  5 消息头定义
*****************************************************************************/


/*****************************************************************************
  6 消息定义
*****************************************************************************/



/*****************************************************************************
  7 STRUCT定义
*****************************************************************************/
typedef VOS_UINT32 (*CPM_FUNC)(VOS_UINT8 *pucData, VOS_UINT32 ulLen);

/* 保存物理通道的属性 */
typedef struct
{
    CPM_FUNC                    pSendFunc;
    CPM_FUNC                    pRcvFunc;
}CPM_PHY_PORT_CFG_STRU;

/* 保存逻辑通道的属性 */
typedef struct
{
    CPM_PHY_PORT_ENUM_UINT32    enPhyPort;
    CPM_FUNC                    pSendFunc;
    CPM_FUNC                    pRcvFunc;
}CPM_LOGIC_PORT_CFG_STRU;

/*****************************************************************************
  8 UNION定义
*****************************************************************************/


/*****************************************************************************
  9 OTHERS定义
*****************************************************************************/


/*****************************************************************************
  10 函数声明
*****************************************************************************/
VOS_VOID   CPM_PhySendReg(CPM_PHY_PORT_ENUM_UINT32 enPhyPort, CPM_FUNC pSendFunc);
VOS_VOID   CPM_LogicRcvReg(CPM_LOGIC_PORT_ENUM_UINT32 enLogicPort, CPM_FUNC pRcvFunc);
CPM_PHY_PORT_ENUM_UINT32 CPM_QueryPhyPort(CPM_LOGIC_PORT_ENUM_UINT32 enLogicPort);
VOS_VOID   CPM_ConnectPorts(CPM_PHY_PORT_ENUM_UINT32 enPhyPort, CPM_LOGIC_PORT_ENUM_UINT32 enLogicPort);
VOS_VOID   CPM_DisconnectPorts(CPM_PHY_PORT_ENUM_UINT32 enPhyPort, CPM_LOGIC_PORT_ENUM_UINT32 enLogicPort);
VOS_UINT32 CPM_NotifyChangePort(AT_PHY_PORT_ENUM_UINT32 enPhyPort, CPM_LOGIC_PORT_ENUM_UINT32 enLogicPort);
VOS_VOID CPM_PnpAppPortCB(CPM_PHY_PORT_ENUM_UINT32 enPhyPort, VOS_BOOL bPortState);
VOS_UINT32 CPM_InitPhyPort(VOS_VOID);
VOS_UINT32 CPM_ComSend(CPM_LOGIC_PORT_ENUM_UINT32 enLogicPort, VOS_UINT8 *pucData, VOS_UINT32 ulLen);
VOS_UINT32 CPM_ComRcv(CPM_PHY_PORT_ENUM_UINT32 enPhyPort, VOS_UINT8 *pucData, VOS_UINT32 ulLen);

/*AT提供给OM注册端口接收函数的接口*/
extern VOS_VOID AT_RcvFuncReg(AT_PHY_PORT_ENUM_UINT32 ulPhyPort, CPM_FUNC pRcvFunc);

/*AT提供给OM查询发送数据的函数接口*/
extern CPM_FUNC AT_QuerySndFunc(AT_PHY_PORT_ENUM_UINT32 ulPhyPort);


#if ((VOS_OS_VER == VOS_WIN32) || (VOS_OS_VER == VOS_NUCLEUS))
#pragma pack()
#else
#pragma pack(0)
#endif


#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of cpm.h */
