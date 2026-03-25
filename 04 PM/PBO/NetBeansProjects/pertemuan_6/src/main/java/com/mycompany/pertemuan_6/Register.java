/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.pertemuan_6;

import java.awt.Color;
import java.awt.Container;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JTextField;

/**
 *
 * @author kfpsc
 */
public class Register extends JFrame implements ActionListener {
    JButton submit;
    JTextField username_field;
    JTextField password_field;
    JLabel username_label;
    JLabel password_label;
    JLabel username_warning;
    JLabel password_warning;
    
    public Register(){
        initComponents();
    }
    
    private void initComponents(){
        this.setTitle("Pertemuan 6");
        this.setSize(600,250);
        this.setLocationRelativeTo(null);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setResizable(true);
        this.setVisible(true);
        
        Color orange = new Color(255, 200, 175);
        Container container = this.getContentPane();
        container.setBackground(orange);
        
        username_label = new JLabel("Username: ");
        this.setLayout(null);
        this.add(username_label);
        username_label.setBounds(20, 20, 250, 30);
        
        username_field = new JTextField();
        this.add(username_field);
        username_field.setBounds(150, 20, 230, 30);
        
        password_label = new JLabel("Password: ");
        this.add(password_label);
        password_label.setBounds(20, 80, 250, 30);
        
        password_field = new JTextField();
        this.add(password_field);
        password_field.setBounds(150, 80, 230, 30);
        
        submit = new JButton("Login");
        this.add(submit);
        submit.setBounds(150, 140, 230, 30);
        submit.addActionListener(this);
        
        username_warning = new JLabel("");
        this.add(username_warning);
        username_warning.setBounds(400, 20, 250, 30);
        
        password_warning = new JLabel("");
        this.add(password_warning);
        password_warning.setBounds(400, 80, 250, 30);
    }
    
    public static void main(String[] args){
        Register register = new Register();
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if(e.getSource() == submit){
            System.out.println("YEAH");
            if(username_field.getText().isEmpty() || password_field.getText().isEmpty()){
                    JOptionPane.showMessageDialog(null, "Masukkan username & password!");
                }else if("admin".equals(username_field.getText())){
                    if("admin123".equals(password_field.getText())){
                        Dasbor dasbor = new Dasbor("Login sucessful!");
                        username_warning.setText(" ");
                        password_warning.setText(" ");
                    }else{
                        password_warning.setText("Password salah!");
                        username_warning.setText(" ");
                    }
                }else{
                    username_warning.setText("Username salah");
                    password_warning.setText(" ");
                }
        }
    }
}
