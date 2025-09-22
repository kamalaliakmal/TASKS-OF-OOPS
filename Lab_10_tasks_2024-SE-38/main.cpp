#include <iostream>
#include <fstream>
#include <string>
using namespace std;

 //  ===================== TASK 01 ==========================

int main() {
    // 1. Write to file
    fstream fileout("notes.txt", ios::out);
    fileout << "Assalmun Alaikum, today's topic is File Handling." << endl;
    fileout << "Today we will discuss about creating a file." << endl;
    fileout << "Now start the class.\n" << endl;
    fileout.close();

    // 2. Read file
    fstream filein("notes.txt", ios::in);
    string s;
    cout << "--- File Content Before Append ---" << endl;
    while (getline(filein, s)) {
        cout << s << endl;
    }
    filein.close();

    // 3. Append file
    fstream file_A("notes.txt",ios::app);
	file_A<<"Kamal Ali Akmal is here."<<endl;
	file_A<<"My Roll no is 2024-SE-38."<<endl;
	file_A<<"My Registration No is 2024-UMDB-004775."<<endl;
	file_A.close();

    cout << "\nData appended successfully.\n";

    return 0;
}

 //  ===================== TASK 02 ==========================

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("notes.txt");  // open existing file
    if (!file) {
        cout << "File not found!" << endl;
        return 1;
    }

    string line;
    int count = 0;

    while (getline(file, line)) {
        count++;   // increment for each line
    }

    file.close();

    cout << "Total number of lines in file = " << count << endl;

    return 0;
}

 //  ===================== TASK 03 ==========================

 int main() { 
    fstream filein("notes.txt",ios::in);   // Open source file in read mode
    fstream fileout("copy.txt",ios::out);   // Open destination file in write mode
    string line;
    int lineCount = 0;

    // Check if source file opened successfully
    if (!filein) {
        cout << "Error: Unable to open notes.txt" << endl;
        return 1;
    }

    // Copy line by line and count
    while (getline(filein, line)) {
        fileout << line << endl;   // Write line to copy.txt
        lineCount++;
    }

    filein.close();
    fileout.close();

    cout << "Content copied to copy.txt successfully." << endl;
    cout << "Total number of lines in the file: " << lineCount << endl;

    return 0;
}

 //  ===================== TASK 04 ==========================

int main(){
	
	fstream filestd("Students.txt",ios::out);
	filestd<<"====================================================="<<endl;
	filestd<<"||   Name          | Roll No   |   Registration No ||"<<endl;
	filestd<<"||-------------------------------------------------||"<<endl;
	filestd<<"||Kamal Ali Akmal  | 2024-SE-38|  2024-UMDB-004775 ||"<<endl;
	filestd<<"||Saqlain Mushtaq  | 2024-SE-38|  2024-UMDB-004772 ||"<<endl;
	filestd<<"||Jawahir Ali      | 2024-SE-38|  2024-UMDB-004771 ||"<<endl;
	filestd<<"-----------------------------------------------------"<<endl;
	filestd.close();
	
	fstream filein("Students.txt",ios::in);
	string s;
	while (getline(filein,s)){
		cout<<s<<endl;
	} 
	filein.close(); 
	
	return 0;
}    













