#include <iostream>
#include <deque>

using namespace std;

int main(){
  deque<int> d;
  int cards;
  while(cin >> cards && cards != 0){

    if(cards == 1){
      cout << "Discarded cards:" << endl;
      cout << "Remaining card: " << 1 << endl;
      continue;
    }
    
    for(int i = cards; i >= 1; i--){
      d.push_back(i);
      //y cout << "prueba" << endl;
    }

    // while(!d.empty()){
    //   cout << d.back() << " " << endl;
    //   d.pop_back();
    // }


    
    cout << "Discarded cards:";
     while(!d.empty()){
       cout << ' ' << d.back();
       if(d.size() > 2) cout << ',';
       d.pop_back();
       d.push_front(d.back());
       d.pop_back();
       if(d.size() == 1){
	 cout << endl;
	 cout << "Remaining card: " << d.back() << endl;
	 d.pop_back();
       }
       
     }

     

  }
  return 0;
}
