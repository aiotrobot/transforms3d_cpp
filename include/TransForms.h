#include "Eigen/Dense"
#include "Eigen/Geometry"
using namespace Eigen;

class TransForms
{
private:
public:
    /*---------------------------------------角度弧度转换----------------------------------------*/
    /*角度转为弧度*/
    static double Degrees(double angle);
    /*弧度转为角度*/
    static double Angle(double degrees);

    /*---------------------------------------欧拉角部分----------------------------------------*/
    /*欧拉角转旋转矩阵*/
    static Matrix3d Euler2Mat(double rx, double ry, double rz);
    /*角度制欧拉角转旋转矩阵*/
    static Matrix3d EulerAngle2Mat(double rx, double ry, double rz);
    /*欧拉角转四元数*/
    static Quaterniond Euler2Quat(double rx, double ry, double rz);
    /*角度制欧拉角转四元数*/
    static Quaterniond EulerAngle2Quat(double rx, double ry, double rz);
    /*旋转矩阵转欧拉角*/
    static Vector3d Mat2Euler(Matrix3d mat);
    /*旋转矩阵转角度制欧拉角*/
    static Vector3d Mat2EulerAngle(Matrix3d mat);

    /*---------------------------------------四元数部分----------------------------------------*/
    /*四元数转旋转矩阵*/
    static Matrix3d Quat2Mat(Quaterniond quat);
    /*四元数转欧拉角*/
    static Vector3d Quat2Eular(Quaterniond quat);
    /*四元数转弧度制欧拉角*/
    static Vector3d Quat2EularAngle(Quaterniond quat);
    /*旋转矩阵转四元数*/
    static Quaterniond Mat2Quat(Quaterniond quat);

    /*---------------------------------------齐次矩阵部分----------------------------------------*/
    


    TransForms(/* args */) = default;
    ~TransForms() = default;
};
