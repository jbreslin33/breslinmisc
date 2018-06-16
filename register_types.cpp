/* register_types.cpp */

#include "register_types.h"
#include "class_db.h"
#include "autolist.h"
#include "FrameCounter.h"
#include "iniFileLoaderBase.h"
#include "PriorityQueue.h"
#include "Smoother.h"
#include "Stream_Utility_Functions.h"
#include "TypeToString.h"
#include "utils.h"

void register_breslinmisc_types() {

        ClassDB::register_class<FrameCounter>();
        ClassDB::register_class<iniFileLoaderBase>();
        ClassDB::register_class<Smoother>();
        ClassDB::register_class<TypeToString>();
}

void unregister_breslinmisc_types() {
   //nothing to do here
}
