#ifdef COMPONENT_EXPORTS
#define COMPONENT_API __declspec(dllexport)
#else
#define COMPONENT_API __declspec(dllimport)
#endif

// �ܺο��� ȣ�� ������ �Լ����� ����մϴ�.
COMPONENT_API int add(int a, int b);