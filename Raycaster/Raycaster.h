// Raycaster.h

  namespace RaycasterDll
  {
      class Raycaster
      {
      public:
		  // currently just calls testRender()
		  static __declspec(dllexport) void render();
          // just displays some arbitrary graphical junk
          static __declspec(dllexport) void testRender();
		  // very much a work in progress
		  static __declspec(dllexport) int* castRays();
		  // find distance between viewer and arbitrary point
		  static __declspec(dllexport) int findDistance();
	  };
  }