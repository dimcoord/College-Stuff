class Mahasiswa {
	String nim;
	String nama;
	String jurusan;
}

class Dosen {
	String nip;
	String nama;
	String jurusan;
}

class Staf {
	String nip;
	String nama;
	String bagian;
}

public class Main {
	public static void main(String[] args) {
		Mahasiswa mhs = new Mahasiswa();
		Dosen dsn = new Dosen();
		Staf stf = new Staf();

		mhs.nim = "2404993";
		mhs.nama = "Dimastio";
		mhs.jurusan = "Tekkom";
		System.out.println("Data Mahasiswa: " + mhs.nim + ", " + mhs.nama + ", " + mhs.jurusan);

		dsn.nip = "1987654";
		dsn.nama = "Pak Deden Pradeka";
		dsn.jurusan = "Tekkom";
		System.out.println("Data Dosen: " + dsn.nip + ", " + dsn.nama + ", " + dsn.jurusan);

		stf.nip = "1234567";
		stf.nama = "Siti";
		stf.bagian = "Administrasi";
		System.out.println("Data Staf: " + stf.nip + ", " + stf.nama + ", " + stf.bagian);
	}
}

/* Buat satu kelas utama, tiga kelas anggota
untuk menampilkan data mahasiswa, dosen, dan staf.
Atribut dalam mahasiswa: nim, nama, jurusan.
Atribut dalam dosen: nip, nama, jurusan.
Atribut dalam staf: nip, nama, bagian. */