class Ctrl {

    public:
        Ctrl();
        double ref;
        double lp_w;
        double error;
        double pwm;
        double theta;
        double theta_last;
        double dt;
        double w0;
        double w1;
        double w2;

        double PID();
        double get_omega();
        double low_pass_filter();

};