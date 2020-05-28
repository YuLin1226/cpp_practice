class Ctrl {

    public:
        Ctrl();
        int ref;
        int lp_w;
        int theta;
        int gain;
        int w;

        int PID();
        int motor();
        int derivative();
        int mv_avg();
        int loop();

};