import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;


public class Main extends JFrame implements ActionListener {
    JButton b1,b2,mlb1,mlb2,mlb3,mlb4;
    static String[][] lsdata = {{"모아제약"},{"로아전력"},{"금일공학"},{"소마고교"},{"아리란화"},{"손화제약"},
            {"일클루전"},{"남화건설"},{"사살라루"},{"일락트로"},{"남화마트"},{"일루건설"},{"화호라사"},
            {"수면협회"},{"삼상협회"},{"타이거즈"},{"유토피아"},{"아티아리"},{"시호이아"},{"테레콘트"},
            {"블마넷잡"},{"언이라화"},{"드자리블"},{"화환마트"},{"지니리아"},{"로디아블"},{"오브리그"},{"개인협회"}};
    static int [] lsnum ={ 54383,55886,17777,81915,72793,83335,50386,5492,41649,46421,7362,15027,13690,45059,
            22763,78926,65540,68426,14172,20736,50211,80368,67567,81429,70782,66530,7862,70123 };
    static int money = 1000000;

    Main(){
        setTitle("서브 제목");

        JPanel p = new JPanel();

        JLabel l = new JLabel("주식 시물레이션");

        b1 = new JButton("Start");
        b2 = new JButton("End");

        p.add(l);
        p.add(b1);
        p.add(b2);

        add(p);

        b1.addActionListener(this);
        b2.addActionListener(this);

        setSize(300,100);
        setVisible(true);
    }
    @Override
    public void actionPerformed(ActionEvent e) {
        if(e.getSource()==b1) {
            dispose();
            new ml();
        }else if(e.getSource()==b2) {
            System.exit(0);
            setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        }
    }


    //메뉴화면
    class ml extends JFrame implements ActionListener{
        public ml(){
            setTitle("메뉴");
            JPanel p = new JPanel();

            JLabel l = new JLabel("현제 자본 : " +money);

            mlb1 = new JButton("메도,메입");
            mlb2 = new JButton("뉴스");
            mlb3 = new JButton("공매도");
            mlb4 = new JButton("은행");

            p.add(mlb1);
            p.add(mlb2);
            p.add(mlb3);
            p.add(mlb4);
            p.add(l);
            add(p);
            setSize(800,500);
            setVisible(true);
        }
        @Override
        public void actionPerformed(ActionEvent e) {
            if(e.getSource()==mlb1) {
                dispose();
                new num();
            }else if(e.getSource()==mlb2) {
                dispose();
                new news();
            }else if(e.getSource()==mlb3) {
                dispose();
                new gmnum();
            }else if(e.getSource()==mlb4) {
                dispose();
                new bank();
            }
        }
    }

    //매수,매입
    class num extends JFrame{
        public num(){
            setTitle("메뉴");
            JPanel p = new JPanel();
        }
    }
    //은행
    class bank extends JFrame{
        public bank(){

        }
    }
    //공매도
    class gmnum extends JFrame{
        public gmnum(){

        }
    }
    //뉴스
    class news extends JFrame{
        public news(){

        }
    }


    public static void main(String[] args) {
        new Main();
    }
}
