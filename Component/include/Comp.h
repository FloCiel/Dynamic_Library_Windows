#ifdef COMPONENT_EXPORTS
#define COMPONENT_API __declspec(dllexport)
#else
#define COMPONENT_API __declspec(dllimport)
#endif

// 외부에서 호출 가능한 함수임을 명시합니다.
COMPONENT_API int add(int a, int b);