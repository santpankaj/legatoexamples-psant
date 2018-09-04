/*
 * AUTO-GENERATED _componentMain.c for the helloworld_18_07_00Component component.

 * Don't bother hand-editing this file.
 */

#include "legato.h"
#include "../liblegato/eventLoop.h"
#include "../liblegato/log.h"

#ifdef __cplusplus
extern "C" {
#endif

// Component log session variables.
le_log_SessionRef_t helloworld_18_07_00Component_LogSession;
le_log_Level_t* helloworld_18_07_00Component_LogLevelFilterPtr;

// Component initialization function (COMPONENT_INIT).
void _helloworld_18_07_00Component_COMPONENT_INIT(void);

// Library initialization function.
// Will be called by the dynamic linker loader when the library is loaded.
__attribute__((constructor)) void _helloworld_18_07_00Component_Init(void)
{
    LE_DEBUG("Initializing helloworld_18_07_00Component component library.");

    // Register the component with the Log Daemon.
    helloworld_18_07_00Component_LogSession = log_RegComponent("helloworld_18_07_00Component", &helloworld_18_07_00Component_LogLevelFilterPtr);

    //Queue the COMPONENT_INIT function to be called by the event loop
    event_QueueComponentInit(_helloworld_18_07_00Component_COMPONENT_INIT);
}


#ifdef __cplusplus
}
#endif
