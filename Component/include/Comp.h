#ifdef COMPONENT_EXPORTS
#define COMPONENT_DEF __declspec(dllexport)
#else
#define COMPONENT_DEF __declspec(dllimport)
#endif

COMPONENT_DEF int add(int a, int b);