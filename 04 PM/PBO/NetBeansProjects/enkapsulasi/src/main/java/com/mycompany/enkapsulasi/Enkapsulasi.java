package com.mycompany.enkapsulasi;
import com.dosen.MainDosen;

class Mahasiswa {
    private String nim;
    private String nama;
    private String kampus;
    
    // Ini konstruktor
    // Ini default
    Mahasiswa(String nim, String nama, String kampus){
        this.nim = nim;
        this.nama = nama;
        this.kampus = kampus;
    }
    
    // Ini protected
    protected String getName(){
        return nama;
    }
    
    // Ini private
    private void setName(String newName){
        this.nama = newName;
    }
    
    // Ini public
    public String[] getInfo(){
        String info[] = {nim, nama, kampus};
        return info;
    }
}

public class Enkapsulasi {
    public static void main(String[] args) {
        Mahasiswa mhs = new Mahasiswa("2404993", "Dimastio Setiawan", "UPI");
        Dosen dsn = new Dosen("Pak Deden", "UPI");
        MainDosen dsn2 = new MainDosen("Pak Awi", "UPI");
        
         // Coba akses modifier protected
        mhs.getName();
        
        // Coba akses modifier private
//        mhs.setName("ASD");
        
        System.out.println("Data Dosen 1: ");
        for(int i=0; i<2; i++){
            System.out.println(dsn.getInfo()[i]);
        }
        System.out.println("\nData Dosen 2: ");
        for(int i=0; i<2; i++){
            System.out.println(dsn2.getInfo()[i]);
        }
        System.out.println("\nData Mahasiswa: ");
        for(int i=0; i<3; i++){
            System.out.println(mhs.getInfo()[i]);
        }
        
        
    }
}