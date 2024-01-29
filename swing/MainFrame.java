package swing;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;

public class MainFrame extends JFrame {
    private static final long serialVersionUID = 1L;
    private JTextArea textArea;

    public MainFrame() {
        // Initialize JFrame properties
        setTitle("My Application");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        
        // Initialize Text Area
        textArea = new JTextArea();
        JScrollPane scrollPane = new JScrollPane(textArea);
        add(scrollPane, BorderLayout.CENTER);
        
        // Initialize Menu and Toolbar
        initMenuAndToolbar();

        // Layout and visibility
        pack();
        setVisible(true);
    }

    private void initMenuAndToolbar() {
        // Create actions
        Action addAction1 = new AddTextAction("Add Text 1", "Text 1\n");
        Action addAction2 = new AddTextAction("Add Text 2", "Text 2\n");
        Action exitAction = new ExitAction("Exit");

        // Menu Bar
        JMenuBar menuBar = new JMenuBar();
        JMenu menu = new JMenu("Menu");
        menu.add(new JMenuItem(addAction1));
        menu.add(new JMenuItem(addAction2));
        menu.addSeparator();
        menu.add(new JMenuItem(exitAction));
        setJMenuBar(menuBar);

        // Tool Bar
        JToolBar toolBar = new JToolBar();
        toolBar.add(new JButton(addAction1));
        toolBar.add(new JButton(addAction2));
        toolBar.add(new JButton(exitAction));
        add(toolBar, BorderLayout.NORTH);
    }

    // Action to add text to the JTextArea
    private class AddTextAction extends AbstractAction {
        private String text;

        public AddTextAction(String name, String text) {
            super(name);
            this.text = text;
        }

        @Override
        public void actionPerformed(ActionEvent e) {
            textArea.append(text);
        }
    }

    // Action to exit the application
    private class ExitAction extends AbstractAction {
        public ExitAction(String name) {
            super(name);
        }

        @Override
        public void actionPerformed(ActionEvent e) {
            System.exit(0);
        }
    }

    public static void main(String[] args) {
        new MainFrame();
    }
}
