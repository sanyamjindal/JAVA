import javax.swing.JFrame;
import javax.swing.JMenu;
import javax.swing.JMenuBar;
import javax.swing.JMenuItem;
import javax.swing.JScrollPane;
import javax.swing.JTextArea;

public class GUI {
    
    JFrame window;
    JTextArea textArea;
    JScrollPane scrollPane;
    JMenuBar menuBar;
    JMenu menuFile, menuEdit, menuFormat, menuColour;
    JMenuItem iNew, iOpen, iSave, iExit ,eCopy, ePaste, eUndo, eRedo;
public static void main(String[] args) {
    
    new GUI();

}
public GUI(){

     createWindow();
     createTextArea();
     createMenuBar();
     createFileMenu();
     createEditMenu();

     window.setVisible(true);
}

public void createWindow(){

    window = new JFrame("Notepad");
    window.setSize(800, 600);
    window.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
}
public void createTextArea(){

    textArea = new JTextArea();
    scrollPane =new JScrollPane(textArea, JScrollPane.VERTICAL_SCROLLBAR_AS_NEEDED, JScrollPane.HORIZONTAL_SCROLLBAR_AS_NEEDED);
    window.add(scrollPane);
}
public void createMenuBar(){

    menuBar = new JMenuBar();
    window.setJMenuBar(menuBar);

    menuFile = new JMenu("File");
    menuBar.add(menuFile);
    
    menuEdit = new JMenu("Edit");
    menuBar.add(menuEdit);

    
    menuFormat = new JMenu("Format");
    menuBar.add(menuFormat);

    
    menuColour = new JMenu("Colour");
    menuBar.add(menuColour);
}
public void createFileMenu(){

    iNew = new JMenuItem("New");
    menuFile.add(iNew);

    iOpen = new JMenuItem("Open");
    menuFile.add(iOpen);

    iSave = new JMenuItem("Save");
    menuFile.add(iSave);

    iExit = new JMenuItem("Exit");
    menuFile.add(iExit);

}
public void createEditMenu(){

    eCopy = new JMenuItem("Copy");
    menuEdit.add(eCopy);
    
    ePaste = new JMenuItem("Paste");
    menuEdit.add(ePaste);

    eUndo = new JMenuItem("Undo");
    menuEdit.add(eUndo);

    eRedo = new JMenuItem("Redo");
    menuEdit.add(eRedo);

}
}
