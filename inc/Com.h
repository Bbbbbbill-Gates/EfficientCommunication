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
*/
void Com_Init(
    const Com_ConfigType* config
)