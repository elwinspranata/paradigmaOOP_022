#ifndef ANAK_H
#define Anak_H

class anak {
public:
	string nama;
	anak(string pNama) :nama(pNama) {
		cout << "Anak \"" << nama << "\" ada\n";
	}
	~anak() {
		cout << "Anak \"" << nama << "\" tidak ada\n";
	}
};
#endif�//�!ANAK_H
