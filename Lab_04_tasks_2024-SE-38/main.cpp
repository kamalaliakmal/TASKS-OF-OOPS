#include<iostream>
#include<string>
#include"singleInheritance.h"
#include"multilevelInheritance.h"
#include"hierarchicalInheritance.h"
#include"multipleInheritance.h"
using namespace std;

      //            TASK 01
      
//int main(){
//	
//	Person P("Kashif",45);
//	cout<<"~; Persons Info :~"<<endl;
//	cout<<"  --------------"<<endl;
//	P.display_person_info();
//	
//	Student S("Kamal",20,78);
//	cout<<"~; Students Info :~"<<endl;
//	cout<<"  --------------"<<endl;
//	S.display_student_info(); 
//	
//	return 0;

       
     //            TASK 02  
     
int main() {
    Manager m;
    cout << "--- Enter Manager Details ---" << endl;
    m.get_manager();

    cout << "\n--- Manager Full Details ---" << endl;
    m.show_manager();

    return 0;
}


     //            TASK 03 
     
//int main() {
//    Developer dev;
//    Designer des;
//
//    cout << "--- Enter Developer Info ---" << endl;
//    dev.get_developer();
//
//    cout << "\n--- Enter Designer Info ---" << endl;
//    des.get_designer();
//
//    cout << "\n--- Developer Info ---" << endl;
//    dev.show_developer();
//
//    cout << "\n--- Designer Info ---" << endl;
//    des.show_designer();
//
//    return 0;
//}

      //            TASK 04 
      
//int main() {
//    Photocopier myDevice;
//
//    // Calling all functions
//    cout << "--- Device Functions ---" << endl;
//    myDevice.scan_document();
//    myDevice.print_document();
//    myDevice.photocopy();
//
//    return 0;
//}

