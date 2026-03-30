/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.pertemuan_6;

import javax.swing.JFrame;
import java.awt.Color;
import java.awt.Container;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JTextField;

public class Pertemuan_6 {

    public static void main(String[] args) {
        JFrame frame = new JFrame();
        frame.setTitle("Pertemuan 6");
        frame.setSize(600,250);
        frame.setLocationRelativeTo(null);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setResizable(true);
        frame.setVisible(true);
        
        Color orange = new Color(255, 200, 175);
        Container container = frame.getContentPane();
        container.setBackground(orange);
        
        JLabel username_label = new JLabel("Username: ");
        frame.setLayout(null);
        frame.add(username_label);
        username_label.setBounds(20, 20, 250, 30);
        
        JTextField username_field = new JTextField();
        frame.add(username_field);
        username_field.setBounds(150, 20, 230, 30);
        
        JLabel password_label = new JLabel("Password: ");
        frame.add(password_label);
        password_label.setBounds(20, 80, 250, 30);
        
        JTextField password_field = new JTextField();
        frame.add(password_field);
        password_field.setBounds(150, 80, 230, 30);
        
        JButton submit = new JButton("Login");
        frame.add(submit);
        submit.setBounds(150, 140, 230, 30);
        
        JLabel username_warning = new JLabel("");
        frame.add(username_warning);
        username_warning.setBounds(400, 20, 250, 30);
        
        JLabel password_warning = new JLabel("");
        frame.add(password_warning);
        password_warning.setBounds(400, 80, 250, 30);
        
        JLabel success_warning = new JLabel("");
        frame.add(success_warning);
        success_warning.setBounds(400, 140, 250, 30);
        
        submit.addActionListener(new ActionListener(){
            public void actionPerformed(ActionEvent submitClicked){
                if(username_field.getText().isEmpty() || password_field.getText().isEmpty()){
                    JOptionPane.showMessageDialog(null, "Masukkan username & password!");
                }else if("admin".equals(username_field.getText())){
                    if("admin123".equals(password_field.getText())){
                        success_warning.setText("Berhasil Login");
                        username_warning.setText(" ");
                        password_warning.setText(" ");
                    }else{
                        password_warning.setText("Password salah!");
                        username_warning.setText(" ");
                        success_warning.setText(" ");
                    }
                }else{
                    username_warning.setText("Username salah");
                    password_warning.setText(" ");
                    success_warning.setText(" ");
                }
            }
        });
    }
}
