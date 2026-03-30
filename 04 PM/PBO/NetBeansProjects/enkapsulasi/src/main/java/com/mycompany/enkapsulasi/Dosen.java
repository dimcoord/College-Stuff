/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.enkapsulasi;

/**
 *
 * @author MyPC One Pro LV
 */
public class Dosen {
    private String nama;
    private String kampus;
    
    // Ini konstruktor
    // Ini default
    Dosen(String nama, String kampus){
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
        String info[] = {nama, kampus};
        return info;
    }
}
