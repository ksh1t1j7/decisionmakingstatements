//kshitij yadav 23070123075
int main() {
    char ch;
    cout << "Enter a single character: ";
    cin >> ch;

    
    ch = tolower(ch);
    if (ch >= 'a' && ch <= 'z') { 
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            cout << ch << " is a vowel." << endl;
        } else {
            cout << ch << " is a consonant." << endl;
        }
    } else {
        cout << ch << " is not a valid alphabet character." << endl;
    }

    return 0;
}