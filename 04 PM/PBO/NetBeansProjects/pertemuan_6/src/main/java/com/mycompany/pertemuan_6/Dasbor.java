package com.mycompany.pertemuan_6;

import java.awt.Color;
import java.awt.Container;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;

public class Dasbor extends JFrame {
    JLabel message;
    
    public Dasbor(String res){
        initComponents();
        message.setText(res);
    }
    
    private void initComponents(){
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
        
        JLabel message = new JLabel("You are logged in!");
        frame.setLayout(null);
        frame.add(message);
        message.setBounds(20, 20, 250, 30);
        
    }
}
