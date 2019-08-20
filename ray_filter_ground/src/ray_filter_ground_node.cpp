#include "ray_filter_core.h"
int main(int argc, char *argv[])
{
    ros::init(argc, argv, "ray_filter_ground");
    
    ros::NodeHandle nh;

    PclTestCore core(nh);

    return 0;
}
