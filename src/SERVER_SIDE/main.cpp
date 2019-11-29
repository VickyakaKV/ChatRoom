#include <iostream>
#include "mythread.h"
#include "server.h"


 //!
 //!Actually allocate clients

using namespace std;

int main() {
  cout << "Running!" << endl;

  Server *s;
  s = new Server();

  //Main loop
  s->AcceptAndDispatch();

  return 0;
}
