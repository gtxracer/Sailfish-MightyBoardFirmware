#ifndef MACHINEID_HH_
#define MACHINEID_HH_

#if !defined(PLATFORM_THE_REPLICATOR_STR)
#define THE_REPLICATOR_STR "MakerBot"
#else
#define THE_REPLICATOR_STR PLATFORM_THE_REPLICATOR_STR
#endif

#if !defined(PLATFORM_MACHINE_ID)
#define MACHINE_ID 0xD314 // Replicator 1
#else
#define MACHINE_ID PLATFORM_MACHINE_ID
#endif

#if !defined(PLATFORM_HBP_PRESENT)
#define DEFAULT_HBP_PRESENT 1
#else
#define DEFAULT_HBP_PRESENT PLATFORM_HBP_PRESENT
#endif

#if !defined(PLATFORM_TOOLHEAD_OFFSET_X)
#define TOOLHEAD_OFFSET_X 3107
#else
#define TOOLHEAD_OFFSET_X PLATFORM_TOOLHEAD_OFFSET_X
#endif

#if !defined(PLATFORM_TOOLHEAD_OFFSET_Y)
#define TOOLHEAD_OFFSET_Y 0
#else
#define TOOLHEAD_OFFSET_Y PLATFORM_TOOLHEAD_OFFSET_Y
#endif

#endif
