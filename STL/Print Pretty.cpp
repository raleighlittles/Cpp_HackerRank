ios_base::fmtflags flags = cout.flags();
cout << setw(0) << showbase << hex << nouppercase << left << (long long)A << endl;

cout.flags(flags);

cout << fixed << setw(15) << setprecision(2) << setfill('_') << right << showpos << B << endl;

cout.flags(flags);

cout << scientific << setw(15) << setprecision(9) << noshowbase << right << C << endl;

cout.flags(flags);

        
