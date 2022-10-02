#include <iostream>

using namespace std;

void usd(){
    int input;
    float usd;
    float eur = 1.04;
    float jpy = 144.39;
    float gbp = 0.93;
    float aud = 1.54;
    float cad = 1.37;
    float chf = 0.99;
    float cnh = 7.16948;
    float hkd = 7.85;
    float nzd = 1.78;
    cout << "\t\tUS Dollar (USD)" << endl;
    cout << " 1.| \tke Euro (EUR)" << endl;
    cout << " 2.| \tke Japanese Yen (JPY)" << endl;
    cout << " 3.| \tke Pound Sterling (GBP)" << endl;
    cout << " 4.| \tke Australian Dollar (AUD)" << endl;
    cout << " 5.| \tke Canadian Dollar (CAD)" << endl;
    cout << " 6.| \tke Swiss Franc (CHF)" << endl;
    cout << " 7.| \tke Chinese Renmibi (CNH)" << endl;
    cout << " 8.| \tke Hong Kong Dollar (HKD)" << endl;
    cout << " 9.| \tke New Zealand Dollar (NZD)" << endl;
    cin >> input;
    if(input == 1){
        cout << "Masukkan jumlah US Dollar: ";
        cin >> usd;
        cout << usd << " US Dollar sama dengan " << eur * usd << " Euro" << endl;
    }
    else if(input == 2){
        cout << "Masukkan jumlah US Dollar: ";
        cin >> usd;
        cout << usd << " US Dollar sama dengan " << jpy * usd << " Japanese Yen" << endl;
    }
    else if(input == 3){
        cout << "Masukkan jumlah US Dollar: ";
        cin >> usd;
        cout << usd << " US Dollar sama dengan " << gbp * usd << " Pound Sterling" << endl;
    }
    else if(input == 4){
        cout << "Masukkan jumlah US Dollar: ";
        cin >> usd;
        cout << usd << " US Dollar sama dengan " << aud * usd << " Australian Dollar" << endl;
    }
    else if(input == 5){
        cout << "Masukkan jumlah US Dollar: ";
        cin >> usd;
        cout << usd << " US Dollar sama dengan " << cad * usd << " Canadian Dollar" << endl;
    }
    else if(input == 6){
        cout << "Masukkan jumlah US Dollar: ";
        cin >> usd;
        cout << usd << " US Dollar sama dengan " << chf * usd << " Swiss Franc" << endl;
    }
    else if(input == 7){
        cout << "Masukkan jumlah US Dollar: ";
        cin >> usd;
        cout << usd << " US Dollar sama dengan " << cnh * usd << " Chinese Rembini" << endl;
    }
    else if(input == 8){
        cout << "Masukkan jumlah US Dollar: ";
        cin >> usd;
        cout << usd << " US Dollar sama dengan " << hkd * usd << " Hong Kong Dollar" << endl;
    }
    else if(input == 9){
        cout << "Masukkan jumlah US Dollar: ";
        cin >> usd;
        cout << usd << " US Dollar sama dengan " << nzd * usd << " New Zealand Dollar" << endl;
    }
    else{
        cout << "ERROR: Input yang anda masukkan salah!" << endl;
    }
}

void eur(){
    int input;
    float eur;
    float usd = 0.98;
    float jpy = 141.9;
    float gbp = 0.87;
    float aud = 1.52;
    float cad = 1.35;
    float chf = 0.96;
    float cnh = 7.00184;
    float hkd = 7.69;
    float nzd = 1.75;
    cout << "\t\tEuro (EUR)" << endl;
    cout << " 1.| \tke US Dollar (USD)" << endl;
    cout << " 2.| \tke Japanese Yen (JPY)" << endl;
    cout << " 3.| \tke Pound Sterling (GBP)" << endl;
    cout << " 4.| \tke Australian Dollar (AUD)" << endl;
    cout << " 5.| \tke Canadian Dollar (CAD)" << endl;
    cout << " 6.| \tke Swiss Franc (CHF)" << endl;
    cout << " 7.| \tke Chinese Renmibi (CNH)" << endl;
    cout << " 8.| \tke Hong Kong Dollar (HKD)" << endl;
    cout << " 9.| \tke New Zealand Dollar (NZD)" << endl;
    cin >> input;
    if(input == 1){
        cout << "Masukkan jumlah Euro: ";
        cin >> eur;
        cout << eur << " Euro sama dengan " << usd * eur << " US Dollar" << endl;
    }
    else if(input == 2){
        cout << "Masukkan jumlah Euro: ";
        cin >> eur;
        cout << eur << " Euro sama dengan " << jpy * eur << " Japanese Yen" << endl;
    }
    else if(input == 3){
        cout << "Masukkan jumlah Euro: ";
        cin >> eur;
        cout << eur << " Euro sama dengan " << gbp * eur << " Pound Sterling" << endl;
    }
    else if(input == 4){
        cout << "Masukkan jumlah Euro: ";
        cin >> eur;
        cout << eur << " Euro sama dengan " << aud * eur << " Australian Dollar" << endl;
    }
    else if(input == 5){
        cout << "Masukkan jumlah Euro: ";
        cin >> eur;
        cout << eur << " Euro sama dengan " << cad * eur << " Canadian Dollar" << endl;
    }
    else if(input == 6){
        cout << "Masukkan jumlah Euro: ";
        cin >> eur;
        cout << eur << " Euro sama dengan " << chf * eur << " Swiss Franc" << endl;
    }
    else if(input == 7){
        cout << "Masukkan jumlah Euro: ";
        cin >> eur;
        cout << eur << " Euro sama dengan " << cnh * eur << " Chinese Rembini" << endl;
    }
    else if(input == 8){
        cout << "Masukkan jumlah Euro: ";
        cin >> eur;
        cout << eur << " Euro sama dengan " << hkd * eur << " Hong Kong Dollar" << endl;
    }
    else if(input == 9){
        cout << "Masukkan jumlah Euro: ";
        cin >> eur;
        cout << eur << " Euro sama dengan " << nzd * eur << " New Zealand Dollar" << endl;
    }
    else{
        cout << "ERROR: Input yang anda masukkan salah!" << endl;
    }
}

void jpy(){
    int input;
    float jpy;
    float usd = 0.0069;
    float eur = 0.0070;
    float gbp = 0.0061;
    float aud = 0.0107;
    float cad = 0.0095;
    float chf = 0.0068;
    float cnh = 0.0493;
    float hkd = 0.0542;
    float nzd = 0.0123;
    cout << "\t\tJapanese Yen (JPY)" << endl;
    cout << " 1.| \tke US Dollar (USD)" << endl;
    cout << " 2.| \tke Euro (EUR)" << endl;
    cout << " 3.| \tke Pound Sterling (GBP)" << endl;
    cout << " 4.| \tke Australian Dollar (AUD)" << endl;
    cout << " 5.| \tke Canadian Dollar (CAD)" << endl;
    cout << " 6.| \tke Swiss Franc (CHF)" << endl;
    cout << " 7.| \tke Chinese Renmibi (CNH)" << endl;
    cout << " 8.| \tke Hong Kong Dollar (HKD)" << endl;
    cout << " 9.| \tke New Zealand Dollar (NZD)" << endl;
    cin >> input;
    if(input == 1){
        cout << "Masukkan jumlah Japanese Yen: ";
        cin >> jpy;
        cout << jpy << " Japanese Yen sama dengan " << jpy * usd << " US Dollar" << endl;
    }
    else if(input == 2){
        cout << "Masukkan jumlah Japanese Yen: ";
        cin >> jpy;
        cout << jpy << " Japanese Yen sama dengan " << jpy * eur << " Euro" << endl;
    }
    else if(input == 3){
        cout << "Masukkan jumlah Japanese Yen: ";
        cin >> jpy;
        cout << jpy << " Japanese Yen sama dengan " << gbp * jpy << " Pound Sterling" << endl;
    }
    else if(input == 4){
        cout << "Masukkan jumlah Japanese Yen: ";
        cin >> jpy;
        cout << jpy << " Japanese Yen sama dengan " << aud * jpy << " Australian Dollar" << endl;
    }
    else if(input == 5){
        cout << "Masukkan jumlah Japanese Yen: ";
        cin >> jpy;
        cout << jpy << " Japanese Yen sama dengan " << cad * jpy << " Canadian Dollar" << endl;
    }
    else if(input == 6){
        cout << "Masukkan jumlah Japanese Yen: ";
        cin >> jpy;
        cout << jpy << " Japanese Yen sama dengan " << chf * jpy << " Swiss Franc" << endl;
    }
    else if(input == 7){
        cout << "Masukkan jumlah Japanese Yen: ";
        cin >> jpy;
        cout << jpy << " Japanese Yen sama dengan " << cnh * jpy << " Chinese Rembini" << endl;
    }
    else if(input == 8){
        cout << "Masukkan jumlah Japanese Yen: ";
        cin >> jpy;
        cout << jpy << " Japanese Yen sama dengan " << hkd * jpy << " Hong Kong Dollar" << endl;
    }
    else if(input == 9){
        cout << "Masukkan jumlah Japanese Yen: ";
        cin >> jpy;
        cout << jpy << " Japanese Yen sama dengan " << nzd * jpy << " New Zealand Dollar" << endl;
    }
    else{
        cout << "ERROR: Input yang anda masukkan salah!" << endl;
    }
}

void gbp(){
    int input;
    float gbp;
    float usd = 1.11;
    float eur = 1.13;
    float jpy = 161.63;
    float aud = 1.73;
    float cad = 1.54;
    float chf = 1.102;
    float cnh = 7.97;
    float hkd = 8.76;
    float nzd = 1.995;
    cout << "\t\tPound Sterling (GBP)" << endl;
    cout << " 1.| \tke US Dollar (USD)" << endl;
    cout << " 2.| \tke Euro (EUR)" << endl;
    cout << " 3.| \tke Japanese Yen (JPY)" << endl;
    cout << " 4.| \tke Australian Dollar (AUD)" << endl;
    cout << " 5.| \tke Canadian Dollar (CAD)" << endl;
    cout << " 6.| \tke Swiss Franc (CHF)" << endl;
    cout << " 7.| \tke Chinese Renmibi (CNH)" << endl;
    cout << " 8.| \tke Hong Kong Dollar (HKD)" << endl;
    cout << " 9.| \tke New Zealand Dollar (NZD)" << endl;
    cin >> input;
    if(input == 1){
        cout << "Masukkan jumlah Pound Sterling: ";
        cin >> gbp;
        cout << gbp << " Pound Sterling sama dengan " << usd * gbp << " US Dollar" << endl;
    }
    else if(input == 2){
        cout << "Masukkan jumlah Pound Sterling: ";
        cin >> gbp;
        cout << gbp << " Pound Sterling sama dengan " << gbp * eur << " Euro" << endl;
    }
    else if(input == 3){
        cout << "Masukkan jumlah Pound Sterling: ";
        cin >> gbp;
        cout << gbp << " Pound Sterling sama dengan " << gbp * jpy << " Japanese Yen" << endl;
    }
    else if(input == 4){
        cout << "Masukkan jumlah Pound Sterling: ";
        cin >> gbp;
        cout << gbp << " Pound Sterling sama dengan " << aud * gbp << " Australian Dollar" << endl;
    }
    else if(input == 5){
        cout << "Masukkan jumlah Pound Sterling: ";
        cin >> gbp;
        cout << gbp << " Pound Sterling sama dengan " << cad * gbp << " Canadian Dollar" << endl;
    }
    else if(input == 6){
        cout << "Masukkan jumlah Pound Sterling: ";
        cin >> gbp;
        cout << gbp << " Pound Sterling sama dengan " << chf * gbp << " Swiss Franc" << endl;
    }
    else if(input == 7){
        cout << "Masukkan jumlah Pound Sterling: ";
        cin >> gbp;
        cout << gbp << " Pound Sterling sama dengan " << cnh * gbp << " Chinese Rembini" << endl;
    }
    else if(input == 8){
        cout << "Masukkan jumlah Pound Sterling: ";
        cin >> gbp;
        cout << gbp << " Pound Sterling sama dengan " << hkd * gbp << " Hong Kong Dollar" << endl;
    }
    else if(input == 9){
        cout << "Masukkan jumlah Pound Sterling: ";
        cin >> gbp;
        cout << gbp << " Pound Sterling sama dengan " << nzd * gbp << " New Zealand Dollar" << endl;
    }
    else{
        cout << "ERROR: Input yang anda masukkan salah!" << endl;
    }
}

void aud(){
    int input;
    float aud;
    float usd = 0.64;
    float eur = 0.65;
    float jpy = 92.82;
    float gbp = 0.57;
    float cad = 0.88;
    float chf = 0.63;
    float cnh = 4.58;
    float hkd = 5.03;
    float nzd = 1.14;
    cout << "\t\tPound Sterling (GBP)" << endl;
    cout << " 1.| \tke US Dollar (USD)" << endl;
    cout << " 2.| \tke Euro (EUR)" << endl;
    cout << " 3.| \tke Japanese Yen (JPY)" << endl;
    cout << " 4.| \tke Pound Sterling (GBP)" << endl;
    cout << " 5.| \tke Canadian Dollar (CAD)" << endl;
    cout << " 6.| \tke Swiss Franc (CHF)" << endl;
    cout << " 7.| \tke Chinese Renmibi (CNH)" << endl;
    cout << " 8.| \tke Hong Kong Dollar (HKD)" << endl;
    cout << " 9.| \tke New Zealand Dollar (NZD)" << endl;
    cin >> input;
    if(input == 1){
        cout << "Masukkan jumlah Australian Dollar: ";
        cin >> aud;
        cout << aud << " Australian Dollar sama dengan " << usd * aud << " US Dollar" << endl;
    }
    else if(input == 2){
        cout << "Masukkan jumlah Australian Dollar: ";
        cin >> aud;
        cout << aud << " Australian Dollar sama dengan " << aud * eur << " Euro" << endl;
    }
    else if(input == 3){
        cout << "Masukkan jumlah Australian Dollar: ";
        cin >> aud;
        cout << aud << " Australian Dollar sama dengan " << aud * jpy << " Japanese Yen" << endl;
    }
    else if(input == 4){
        cout << "Masukkan jumlah Australian Dollar: ";
        cin >> aud;
        cout << aud << " Australian Dollar sama dengan " << aud * gbp << " Pound Sterling" << endl;
    }
    else if(input == 5){
        cout << "Masukkan jumlah Australian Dollar: ";
        cin >> aud;
        cout << aud << " Australian Dollar sama dengan " << cad * aud << " Canadian Dollar" << endl;
    }
    else if(input == 6){
        cout << "Masukkan jumlah Australian Dollar: ";
        cin >> aud;
        cout << aud << " Australian Dollar sama dengan " << chf * aud << " Swiss Franc" << endl;
    }
    else if(input == 7){
        cout << "Masukkan jumlah Australian Dollar: ";
        cin >> aud;
        cout << aud << " Australian Dollar sama dengan " << cnh * aud << " Chinese Rembini" << endl;
    }
    else if(input == 8){
        cout << "Masukkan jumlah Australian Dollar: ";
        cin >> aud;
        cout << aud << " Australian Dollar sama dengan " << hkd * aud << " Hong Kong Dollar" << endl;
    }
    else if(input == 9){
        cout << "Masukkan jumlah Australian Dollar: ";
        cin >> aud;
        cout << aud << " Australian Dollar sama dengan " << nzd * aud << " New Zealand Dollar" << endl;
    }
    else{
        cout << "ERROR: Input yang anda masukkan salah!" << endl;
    }
}

void cad(){
    int input;
    float cad;
    float usd = 0.72;
    float eur = 0.73;
    float jpy = 104.61;
    float gbp = 0.64;
    float aud = 1.12;
    float chf = 0.71;
    float cnh = 5.16;
    float hkd = 5.67;
    float nzd = 1.29;
    cout << "\t\tPound Sterling (GBP)" << endl;
    cout << " 1.| \tke US Dollar (USD)" << endl;
    cout << " 2.| \tke Euro (EUR)" << endl;
    cout << " 3.| \tke Japanese Yen (JPY)" << endl;
    cout << " 4.| \tke Pound Sterling (GBP)" << endl;
    cout << " 5.| \tke Australian Dollar (AUD)" << endl;
    cout << " 6.| \tke Swiss Franc (CHF)" << endl;
    cout << " 7.| \tke Chinese Renmibi (CNH)" << endl;
    cout << " 8.| \tke Hong Kong Dollar (HKD)" << endl;
    cout << " 9.| \tke New Zealand Dollar (NZD)" << endl;
    cin >> input;
    if(input == 1){
        cout << "Masukkan jumlah Canadian Dollar: ";
        cin >> cad;
        cout << cad << " Canadian Dollar sama dengan " << usd * cad << " US Dollar" << endl;
    }
    else if(input == 2){
        cout << "Masukkan jumlah Canadian Dollar: ";
        cin >> cad;
        cout << cad << " Canadian Dollar sama dengan " << cad * eur << " Euro" << endl;
    }
    else if(input == 3){
        cout << "Masukkan jumlah Canadian Dollar: ";
        cin >> cad;
        cout << cad << " Australian Dollar sama dengan " << cad * jpy << " Japanese Yen" << endl;
    }
    else if(input == 4){
        cout << "Masukkan jumlah Canadian Dollar: ";
        cin >> cad;
        cout << cad << " Canadian Dollar sama dengan " << cad * gbp << " Pound Sterling" << endl;
    }
    else if(input == 5){
        cout << "Masukkan jumlah Canadian Dollar: ";
        cin >> cad;
        cout << cad << " Canadian Dollar sama dengan " << cad * aud << " Australian Dollar" << endl;
    }
    else if(input == 6){
        cout << "Masukkan jumlah Canadian Dollar: ";
        cin >> cad;
        cout << cad << " Canadian Dollar sama dengan " << chf * cad << " Swiss Franc" << endl;
    }
    else if(input == 7){
        cout << "Masukkan jumlah Canadian Dollar: ";
        cin >> cad;
        cout << cad << " Canadian Dollar sama dengan " << cnh * cad << " Chinese Rembini" << endl;
    }
    else if(input == 8){
        cout << "Masukkan jumlah Canadian Dollar: ";
        cin >> cad;
        cout << cad << " Canadian Dollar sama dengan " << hkd * cad << " Hong Kong Dollar" << endl;
    }
    else if(input == 9){
        cout << "Masukkan jumlah Canadian Dollar: ";
        cin >> cad;
        cout << cad << " Canadian Dollar sama dengan " << nzd * cad << " New Zealand Dollar" << endl;
    }
    else{
        cout << "ERROR: Input yang anda masukkan salah!" << endl;
    }
}

void chf(){
    int input;
    float chf;
    float usd = 1.01;
    float eur = 1.03;
    float jpy = 146.63;
    float gbp = 0.90;
    float aud = 1.57;
    float cad = 1.40;
    float cnh = 7.23;
    float hkd = 7.95;
    float nzd = 1.81;
    cout << "\t\tPound Sterling (GBP)" << endl;
    cout << " 1.| \tke US Dollar (USD)" << endl;
    cout << " 2.| \tke Euro (EUR)" << endl;
    cout << " 3.| \tke Japanese Yen (JPY)" << endl;
    cout << " 4.| \tke Pound Sterling (GBP)" << endl;
    cout << " 5.| \tke Australian Dollar (AUD)" << endl;
    cout << " 6.| \tke Canadian Dollar (CAD)" << endl;
    cout << " 7.| \tke Chinese Renmibi (CNH)" << endl;
    cout << " 8.| \tke Hong Kong Dollar (HKD)" << endl;
    cout << " 9.| \tke New Zealand Dollar (NZD)" << endl;
    cin >> input;
    if(input == 1){
        cout << "Masukkan jumlah Swiss Franc: ";
        cin >> chf;
        cout << chf << " Swiss Franc sama dengan " << usd * chf << " US Dollar" << endl;
    }
    else if(input == 2){
        cout << "Masukkan jumlah Swiss Franc: ";
        cin >> chf;
        cout << chf << " Swiss Franc sama dengan " << chf * eur << " Euro" << endl;
    }
    else if(input == 3){
        cout << "Masukkan jumlah Swiss Franc: ";
        cin >> chf;
        cout << chf << " Swiss Franc sama dengan " << chf * jpy << " Japanese Yen" << endl;
    }
    else if(input == 4){
        cout << "Masukkan jumlah Swiss Franc: ";
        cin >> chf;
        cout << chf << " Swiss Franc sama dengan " << chf * gbp << " Pound Sterling" << endl;
    }
    else if(input == 5){
        cout << "Masukkan jumlah Swiss Franc: ";
        cin >> chf;
        cout << chf << " Swiss Franc sama dengan " << chf * aud << " Australian Dollar" << endl;
    }
    else if(input == 6){
        cout << "Masukkan jumlah Swiss Franc: ";
        cin >> chf;
        cout << chf << " Swiss Franc sama dengan " << chf * cad << " Canadian Dollar" << endl;
    }
    else if(input == 7){
        cout << "Masukkan jumlah Swiss Franc: ";
        cin >> chf;
        cout << chf << " Swiss Franc sama dengan " << cnh * chf << " Chinese Rembini" << endl;
    }
    else if(input == 8){
        cout << "Masukkan jumlah Swiss Franc: ";
        cin >> chf;
        cout << chf << " Swiss Franc sama dengan " << hkd * chf << " Hong Kong Dollar" << endl;
    }
    else if(input == 9){
        cout << "Masukkan jumlah Swiss Franc: ";
        cin >> chf;
        cout << chf << " Swiss Franc sama dengan " << nzd * chf << " New Zealand Dollar" << endl;
    }
    else{
        cout << "ERROR: Input yang anda masukkan salah!" << endl;
    }
}

void cnh(){
    int input;
    float cnh;
    float usd = 0.14;
    float eur = 0.14;
    float jpy = 20.26;
    float gbp = 0.12;
    float aud = 0.21;
    float cad = 0.19;
    float chf = 0.13;
    float hkd = 1.09;
    float nzd = 0.25;
    cout << "\t\tChinese Renmibi (CNH)" << endl;
    cout << " 1.| \tke US Dollar (USD)" << endl;
    cout << " 2.| \tke Euro (EUR)" << endl;
    cout << " 3.| \tke Japanese Yen (JPY)" << endl;
    cout << " 4.| \tke Pound Sterling (GBP)" << endl;
    cout << " 5.| \tke Australian Dollar (AUD)" << endl;
    cout << " 6.| \tke Canadian Dollar (CAD)" << endl;
    cout << " 7.| \tke Swiss Francs (CHF)" << endl;
    cout << " 8.| \tke Hong Kong Dollar (HKD)" << endl;
    cout << " 9.| \tke New Zealand Dollar (NZD)" << endl;
    cin >> input;
    if(input == 1){
        cout << "Masukkan jumlah Chinese Renmibi: ";
        cin >> cnh;
        cout << cnh << " Chinese Renmibi sama dengan " << usd * cnh << " US Dollar" << endl;
    }
    else if(input == 2){
        cout << "Masukkan jumlah Chinese Renmibi: ";
        cin >> cnh;
        cout << cnh << " Chinese Renmibi sama dengan " << cnh * eur << " Euro" << endl;
    }
    else if(input == 3){
        cout << "Masukkan jumlah Chinese Renmibi: ";
        cin >> cnh;
        cout << cnh << " Chinese Renmibi sama dengan " << cnh * jpy << " Japanese Yen" << endl;
    }
    else if(input == 4){
        cout << "Masukkan jumlah Chinese Renmibi: ";
        cin >> cnh;
        cout << cnh << " Chinese Renmibi sama dengan " << cnh * gbp << " Pound Sterling" << endl;
    }
    else if(input == 5){
        cout << "Masukkan jumlah Chinese Renmibi: ";
        cin >> cnh;
        cout << cnh << " Chinese Renmibi sama dengan " << cnh * aud << " Australian Dollar" << endl;
    }
    else if(input == 6){
        cout << "Masukkan jumlah Chinese Renmibi: ";
        cin >> cnh;
        cout << cnh << " Chinese Renmibi sama dengan " << cnh * cad << " Canadian Dollar" << endl;
    }
    else if(input == 7){
        cout << "Masukkan jumlah Chinese Renmibi: ";
        cin >> cnh;
        cout << cnh << " Chinese Renmibi sama dengan " << cnh * chf << " Swiss Franc" << endl;
    }
    else if(input == 8){
        cout << "Masukkan jumlah Chinese Renmibi: ";
        cin >> cnh;
        cout << cnh << " Chinese Renmibi sama dengan " << hkd * cnh << " Hong Kong Dollar" << endl;
    }
    else if(input == 9){
        cout << "Masukkan jumlah Chinese Renmibi: ";
        cin >> cnh;
        cout << cnh << " Chinese Renmibi sama dengan " << nzd * cnh << " New Zealand Dollar" << endl;
    }
    else{
        cout << "ERROR: Input yang anda masukkan salah!" << endl;
    }
}

void hkd(){
    int input;
    float hkd;
    float usd = 1.12;
    float eur = 0.12;
    float jpy = 18.43;
    float gbp = 0.11;
    float aud = 0.19;
    float cad = 0.17;
    float cnh = 0.90;
    float chf = 0.12;
    float nzd = 0.22;
    cout << "\t\tPound Sterling (GBP)" << endl;
    cout << " 1.| \tke US Dollar (USD)" << endl;
    cout << " 2.| \tke Euro (EUR)" << endl;
    cout << " 3.| \tke Japanese Yen (JPY)" << endl;
    cout << " 4.| \tke Pound Sterling (GBP)" << endl;
    cout << " 5.| \tke Australian Dollar (AUD)" << endl;
    cout << " 6.| \tke Canadian Dollar (CAD)" << endl;
    cout << " 7.| \tke Chinese Renmibi (CNH)" << endl;
    cout << " 8.| \tke Swiss Franc (CHF)" << endl;
    cout << " 9.| \tke New Zealand Dollar (NZD)" << endl;
    cin >> input;
    if(input == 1){
        cout << "Masukkan jumlah Hong Kong Dollar: ";
        cin >> hkd;
        cout << hkd << " Hong Kong Dollar sama dengan " << usd * hkd << " US Dollar" << endl;
    }
    else if(input == 2){
        cout << "Masukkan jumlah Hong Kong Dollar: ";
        cin >> hkd;
        cout << hkd << " Hong Kong Dollar sama dengan " << hkd * eur << " Euro" << endl;
    }
    else if(input == 3){
        cout << "Masukkan jumlah Hong Kong Dollar: ";
        cin >> hkd;
        cout << hkd << " Hong Kong Dollar sama dengan " << hkd * jpy << " Japanese Yen" << endl;
    }
    else if(input == 4){
        cout << "Masukkan jumlah Hong Kong Dollar: ";
        cin >> hkd;
        cout << hkd << " Hong Kong Dollar sama dengan " << hkd * gbp << " Pound Sterling" << endl;
    }
    else if(input == 5){
        cout << "Masukkan jumlah Hong Kong Dollar: ";
        cin >> hkd;
        cout << hkd << " Hong Kong Dollar sama dengan " << hkd * aud << " Australian Dollar" << endl;
    }
    else if(input == 6){
        cout << "Masukkan jumlah Hong Kong Dollar: ";
        cin >> hkd;
        cout << hkd << " Hong Kong Dollar sama dengan " << hkd * cad << " Canadian Dollar" << endl;
    }
    else if(input == 7){
        cout << "Masukkan jumlah Hong Kong Dollar: ";
        cin >> hkd;
        cout << hkd << " Hong Kong Dollar sama dengan " << cnh * hkd << " Chinese Rembini" << endl;
    }
    else if(input == 8){
        cout << "Masukkan jumlah Hong Kong Dollar: ";
        cin >> hkd;
        cout << hkd << " Hong Kong Dollar sama dengan " << hkd * chf << " Swiss Franc" << endl;
    }
    else if(input == 9){
        cout << "Masukkan jumlah Hong Kong Dollar: ";
        cin >> hkd;
        cout << hkd << " Hong Kong Dollar sama dengan " << nzd * hkd << " New Zealand Dollar" << endl;
    }
    else{
        cout << "ERROR: Input yang anda masukkan salah!" << endl;
    }
}

void nzd(){
    int input;
    float nzd;
    float usd = 0.55;
    float eur = 0.57;
    float jpy = 80.97;
    float gbp = 0.50;
    float aud = 0.87;
    float cad = 0.77;
    float cnh = 3.99;
    float hkd = 4.39;
    float chf = 0.55;
    cout << "\tNew Zealand Dollar (NZD)" << endl;
    cout << " 1.| \tke US Dollar (USD)" << endl;
    cout << " 2.| \tke Euro (EUR)" << endl;
    cout << " 3.| \tke Japanese Yen (JPY)" << endl;
    cout << " 4.| \tke Pound Sterling (GBP)" << endl;
    cout << " 5.| \tke Australian Dollar (AUD)" << endl;
    cout << " 6.| \tke Canadian Dollar (CAD)" << endl;
    cout << " 7.| \tke Chinese Renmibi (CNH)" << endl;
    cout << " 8.| \tke Hong Kong Dollar (HKD)" << endl;
    cout << " 9.| \tke Swiss Franc (CHF)" << endl;
    cin >> input;
    if(input == 1){
        cout << "Masukkan jumlah New Zaeland Dollar: ";
        cin >> nzd;
        cout << nzd << " New Zaeland Dollar sama dengan " << usd * nzd << " US Dollar" << endl;
    }
    else if(input == 2){
        cout << "Masukkan jumlah New Zaeland Dollar: ";
        cin >> nzd;
        cout << nzd << " New Zaeland Dollar sama dengan " << nzd * eur << " Euro" << endl;
    }
    else if(input == 3){
        cout << "Masukkan jumlah New Zaeland Dollar: ";
        cin >> nzd;
        cout << nzd << " New Zaeland Dollar sama dengan " << nzd * jpy << " Japanese Yen" << endl;
    }
    else if(input == 4){
        cout << "Masukkan jumlah New Zaeland Dollar: ";
        cin >> nzd;
        cout << nzd << " New Zaeland Dollar sama dengan " << nzd * gbp << " Pound Sterling" << endl;
    }
    else if(input == 5){
        cout << "Masukkan jumlah New Zaeland Dollar: ";
        cin >> nzd;
        cout << nzd << " New Zaeland Dollar sama dengan " << nzd * aud << " Australian Dollar" << endl;
    }
    else if(input == 6){
        cout << "Masukkan jumlah New Zaeland Dollar: ";
        cin >> nzd;
        cout << nzd << " New Zaeland Dollar sama dengan " << nzd * cad << " Canadian Dollar" << endl;
    }
    else if(input == 7){
        cout << "Masukkan jumlah New Zaeland Dollar: ";
        cin >> nzd;
        cout << nzd << " New Zaeland Dollar sama dengan " << cnh * nzd << " Chinese Rembini" << endl;
    }
    else if(input == 8){
        cout << "Masukkan jumlah New Zaeland Dollar: ";
        cin >> nzd;
        cout << nzd << " New Zaeland Dollar sama dengan " << hkd * nzd << " Hong Kong Dollar" << endl;
    }
    else if(input == 9){
        cout << "Masukkan jumlah New Zaeland Dollar: ";
        cin >> nzd;
        cout << nzd << " New Zaeland Dollar sama dengan " << nzd * chf << " Swiss Franc" << endl;
    }
    else{
        cout << "ERROR: Input yang anda masukkan salah!" << endl;
    }
}

int main(){
    int input;
    cout << "\t\tSelamat Datang!" << endl;
    while(1)
    {
        cout << "Silahkan pilih mata uang yang ingin anda konversi:" << endl;
        cout << " 1.| \tUS Dollar (USD)" << endl;
        cout << " 2.| \tEuro (EUR)" << endl;
        cout << " 3.| \tJapanese Yen (JPY)" << endl;
        cout << " 4.| \tPound Sterling (GBP)" << endl;
        cout << " 5.| \tAustralian Dollar (AUD)" << endl;
        cout << " 6.| \tCanadian Dollar (CAD)" << endl;
        cout << " 7.| \tSwiss Franc (CHF)" << endl;
        cout << " 8.| \tChinese Renmibi (CNH)" << endl;
        cout << " 9.| \tHong Kong Dollar (HKD)" << endl;
        cout << "10.| \tNew Zealand Dollar (NZD)" << endl;
        cin >> input;
        if(input == 1){
            usd();
        }
        else if(input == 2){
            eur();
        }
        else if(input == 3){
            jpy();
        }
        else if(input == 4){
            gbp();
        }
        else if(input == 5){
            aud();
        }
        else if(input == 6){
            cad();
        }
        else if(input == 7){
            chf();
        }
        else if(input == 8){
            cnh();
        }
        else if(input == 9){
            hkd();
        }
        else if(input == 10){
            nzd();
        }
        else{
            cout << "ERROR: Input yang anda masukkan salah!" << endl;
        }
    }
    return 0;
}