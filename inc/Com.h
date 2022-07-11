/* >>>START FLAG<<<
 * LICENSE:        MIT
 * Location:       ./inc/Com.h
 *                 @Aeron
 * Content:        TODO: fill this 
 *
 * >>>END FLAG<<<
*/

/*
 * Supported:
 * @[SWS_Com_00819]
 * 
 * Unsupported:
 * 
 * <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
 * -------------------- Separator --------------------
 * >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 * Define Com_StatusType
*/
typedef enum Com_Status {
    COM_UINIT = 0,
    COM_INIT = 1
} Com_StatusType;


/*
 * Supported:
 * @[SWS_Com_00820]
 * 
 * Unsupported:
 * 
 * <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
 * -------------------- Separator --------------------
 * >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 * Define Com_SignalIdType
 * TODO:
 * - uint16 should be supported at C_Mock.h
 * - Com_SignalIdType range inspection([0, SignalIdMax]) shall be excuted when computing
 * @Aeron
*/
#define Com_SignalIdType uint16

/*
 * Supported:
 * @[SWS_Com_00821]
 * 
 * Unsupported:
 * 
 * <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
 * -------------------- Separator --------------------
 * >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 * Define Com_SignalGroupIdType
 * TODO:
 * - uint16 should be supported at C_Mock.h
 * - Com_SignalGroupIdType range inspection([0, SignalGroupIdMax]) shall be excuted when computing
 * @Aeron
*/
#define Com_SignalGroupIdType uint16

/*
 * Supported:
 * @[SWS_Com_00822]
 * 
 * Unsupported:
 * 
 * <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
 * -------------------- Separator --------------------
 * >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 * Define Com_IpduGroupIdType
 * TODO:
 * - uint16 should be supported at C_Mock.h
 * - Com_IpduGroupIdType range inspection([0, IpduGroupIdMax]) shall be excuted when computing
 * @Aeron
*/
#define Com_IpduGroupIdType uint16

/*
 * Supported:
 * @[SWS_Com_00825]
 * 
 * Unsupported:
 * 
 * <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
 * -------------------- Separator --------------------
 * >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 * Define Com_ConfigType
 * This is the type of the data structure containing the initialization data for COM.
 * TODO:
 * - Fill the Config information which is needed by COM
 * @Aeron
*/
typedef struct Com_Config {

} Com_ConfigType;

/*
 * Supported:
 * @[SWS_Com_00865]
 * 
 * Unsupported:
 * 
 * <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
 * -------------------- Separator --------------------
 * >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 * Define COM_SERVICE_NOT_AVAILABLE
 * The corresponding I-PDU group is stopped
*/
#define COM_SERVICE_NOT_AVAILABLE 0x80

/*
 * Supported:
 * @[SWS_Com_00865]
 * 
 * Unsupported:
 * 
 * <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
 * -------------------- Separator --------------------
 * >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 * Define COM_BUSY
 * This function is currently not available, because a resource is currently in use
*/
#define COM_BUSY 0x81

/*
 * Supported:
 * @[SWS_Com_00432]
 * 
 * Unsupported:
 * 
 * <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
 * -------------------- Separator --------------------
 * >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 * Declare Com_Init()
 * @param       config containing the initialization data for COM.
 * @return      void
 * @brief       initiate COM Module and prepare for the future action
*/
void Com_Init (
    const Com_ConfigType* config
);

/*
 * Supported:
 * @[SWS_Com_00130]
 * @[SWS_Com_00129] 
 * 
 * Unsupported:
 * 
 * <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
 * -------------------- Separator --------------------
 * >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 * Declare Com_DeInit()
 * @param       void
 * @return      void
 * @brief       Stop any communication, Put the COM into NOT INITIALIZED STATE
*/
void Com_DeInit (
    void
);

/*
 * Supported:
 * @[SWS_Com_91001]
 * 
 * Unsupported:
 * 
 * <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
 * -------------------- Separator --------------------
 * >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 * TODO: 
 *      - bool Type should be supported at C_Mock.h
 *      - uint16
 * @Aeron
 * 
 * Declare Com_IpduGroupStart()
 * @param       IpduGroupId     I-PDU Group Id
 *              initialize      if it is true, all pdu shall be (re-)initialized before group started
 * @return      void
 * @brief       start IPDU Group then IPDU will behave like what we configured
*/
void Com_IpduGroupStart (
    Com_IpduGroupIdType IpduGroupId,
    bool initialize
);

/*
 * Supported:
 * @[SWS_Com_91002]
 * 
 * Unsupported:
 * 
 * <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
 * -------------------- Separator --------------------
 * >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 * TODO: 
 *      - uint16
 * @Aeron
 * 
 * Declare Com_IpduGroupStop()
 * @param       IpduGroupId     I-PDU Group Id
 * @return      void
 * @brief       stop IPDU Group which means IPDU will stop running
*/
void Com_IpduGroupStop (
    Com_IpduGroupIdType IpduGroupId
);


/*
 * Supported:
 * @[SWS_Com_91004]
 * 
 * Unsupported:
 * 
 * <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
 * -------------------- Separator --------------------
 * >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 * TODO: 
 *      - uint16
 * @Aeron
 * 
 * Declare Com_EnableReceptionDM()
 * @param       IpduGroupId     I-PDU Group Id
 * @return      void
 * @brief       enable reception DM for IPDU within IPDU Group
*/
void Com_EnableReceptionDM (
    Com_IpduGroupIdType IpduGroupId
);

/*
 * Supported:
 * @[SWS_Com_91003]
 * 
 * Unsupported:
 * 
 * <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
 * -------------------- Separator --------------------
 * >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 * TODO: 
 *      - uint16
 * @Aeron
 * 
 * Declare Com_DisableReceptionDM()
 * @param       IpduGroupId     I-PDU Group Id
 * @return      void
 * @brief       disable reception DM for IPDU within IPDU Group
*/
void Com_DisableReceptionDM (
    Com_IpduGroupIdType IpduGroupId
);

/*
 * Supported:
 * @[SWS_Com_00194]
 * 
 * Unsupported:
 * 
 * <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
 * -------------------- Separator --------------------
 * >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 * Declare Com_GetStatus()
 * @param       void
 * @return      Com_StatusType indicates the State of COM
 * @brief       indicates the State of COM at the time in which a invocation to this func
*/
Com_StatusType Com_GetStatus (
    void
);


/*
 * Supported:
 * @[SWS_Com_00426]
 * 
 * Unsupported:
 * 
 * <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
 * -------------------- Separator --------------------
 * >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 * TODO: 
 *      - Std_VersionInfoType should be supported at ./mock/autosar_mock/StandardTypes.h
 * @Aeron
 * 
 * Declare Com_GetVersionInfo()
 * @param       versioninfo parameter out, info will be store into the place at which the pointer point 
 * @return      void
 * @brief       indicates the version information of COM
*/
void Com_GetVersionInfo (
    Std_VersionInfoType *versioninfo
);
