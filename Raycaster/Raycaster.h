// Raycaster.h

  namespace RaycasterDll
  {
      class Raycaster
      {
      public:
          // right now it just displays some arbitrary graphical junk
          static __declspec(dllexport) void render();
		  // very much a work in progress
		  static __declspec(dllexport) int* castRays();
	  };
  }