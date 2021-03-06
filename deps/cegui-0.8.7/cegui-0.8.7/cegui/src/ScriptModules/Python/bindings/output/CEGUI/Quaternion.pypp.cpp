// This file has been generated by Py++.

#include "boost/python.hpp"
#include "generators/include/python_CEGUI.h"
#include "Quaternion.pypp.hpp"

namespace bp = boost::python;

void register_Quaternion_class(){

    { //::CEGUI::Quaternion
        typedef bp::class_< CEGUI::Quaternion > Quaternion_exposer_t;
        Quaternion_exposer_t Quaternion_exposer = Quaternion_exposer_t( "Quaternion", bp::init< bp::optional< float, float, float, float > >(( bp::arg("w")=1.0e+0f, bp::arg("x")=0.0f, bp::arg("y")=0.0f, bp::arg("z")=0.0f ), "! verbatim constructor\n") );
        bp::scope Quaternion_scope( Quaternion_exposer );
        bp::implicitly_convertible< float, CEGUI::Quaternion >();
        Quaternion_exposer.def( bp::init< CEGUI::Quaternion const & >(( bp::arg("v") ), "! copy constructor\n") );
        { //::CEGUI::Quaternion::axisAngleDegrees
        
            typedef ::CEGUI::Quaternion ( *axisAngleDegrees_function_type )( ::CEGUI::Vector3f const &,float );
            
            Quaternion_exposer.def( 
                "axisAngleDegrees"
                , axisAngleDegrees_function_type( &::CEGUI::Quaternion::axisAngleDegrees )
                , ( bp::arg("axis"), bp::arg("rotation") )
                , "*!\n\
                 constructs a quaternion from axis and angle around it in degrees\n\
            \n\
                @param axis\n\
                    vector describing the axis of rotation\n\
                @param rotation\n\
                    Anticlockwise rotation around given axis\n\
                *\n" );
        
        }
        { //::CEGUI::Quaternion::axisAngleRadians
        
            typedef ::CEGUI::Quaternion ( *axisAngleRadians_function_type )( ::CEGUI::Vector3f const &,float );
            
            Quaternion_exposer.def( 
                "axisAngleRadians"
                , axisAngleRadians_function_type( &::CEGUI::Quaternion::axisAngleRadians )
                , ( bp::arg("axis"), bp::arg("rotation") )
                , "*!\n\
                 constructs a quaternion from axis and angle around it in radians\n\
            \n\
                @param axis\n\
                    vector describing the axis of rotation\n\
                @param rotation\n\
                    Anticlockwise rotation around given axis\n\
                *\n" );
        
        }
        { //::CEGUI::Quaternion::dot
        
            typedef float ( ::CEGUI::Quaternion::*dot_function_type )( ::CEGUI::Quaternion const & ) const;
            
            Quaternion_exposer.def( 
                "dot"
                , dot_function_type( &::CEGUI::Quaternion::dot )
                , ( bp::arg("v") )
                , "! quaternion dot product\n" );
        
        }
        { //::CEGUI::Quaternion::eulerAnglesDegrees
        
            typedef ::CEGUI::Quaternion ( *eulerAnglesDegrees_function_type )( float,float,float );
            
            Quaternion_exposer.def( 
                "eulerAnglesDegrees"
                , eulerAnglesDegrees_function_type( &::CEGUI::Quaternion::eulerAnglesDegrees )
                , ( bp::arg("x"), bp::arg("y"), bp::arg("z") )
                , "*!\n\
                 constructs a quaternion from euler angles in degrees\n\
            \n\
                @param x\n\
                    Anticlockwise rotation around X axis\n\
                @param y\n\
                    Anticlockwise rotation around Y axis\n\
                @param z\n\
                    Anticlockwise rotation around Z axis\n\
            \n\
                The rotation is performed around Z first, then Y and then X!\n\
                *\n" );
        
        }
        { //::CEGUI::Quaternion::eulerAnglesRadians
        
            typedef ::CEGUI::Quaternion ( *eulerAnglesRadians_function_type )( float,float,float );
            
            Quaternion_exposer.def( 
                "eulerAnglesRadians"
                , eulerAnglesRadians_function_type( &::CEGUI::Quaternion::eulerAnglesRadians )
                , ( bp::arg("x"), bp::arg("y"), bp::arg("z") )
                , "*!\n\
                 constructs a quaternion from euler angles in radians\n\
            \n\
                @param x\n\
                    Anticlockwise rotation around X axis\n\
                @param y\n\
                    Anticlockwise rotation around Y axis\n\
                @param z\n\
                    Anticlockwise rotation around Z axis\n\
            \n\
                The rotation is performed around Z first, then Y and then X!\n\
                *\n" );
        
        }
        { //::CEGUI::Quaternion::length
        
            typedef float ( ::CEGUI::Quaternion::*length_function_type )(  ) const;
            
            Quaternion_exposer.def( 
                "length"
                , length_function_type( &::CEGUI::Quaternion::length )
                , "*!\n\
             computers and returns the length of this quaternion\n\
            *\n" );
        
        }
        { //::CEGUI::Quaternion::normalise
        
            typedef float ( ::CEGUI::Quaternion::*normalise_function_type )(  ) ;
            
            Quaternion_exposer.def( 
                "normalise"
                , normalise_function_type( &::CEGUI::Quaternion::normalise )
                , "*!\n\
             normalises this quaternion and returns it's length (since it has to be computed anyways)\n\
            *\n" );
        
        }
        Quaternion_exposer.def( bp::self != bp::self );
        Quaternion_exposer.def( bp::self * bp::other< float >() );
        Quaternion_exposer.def( bp::self * bp::self );
        Quaternion_exposer.def( bp::self + bp::self );
        Quaternion_exposer.def( -bp::self );
        { //::CEGUI::Quaternion::operator=
        
            typedef ::CEGUI::Quaternion & ( ::CEGUI::Quaternion::*assign_function_type )( ::CEGUI::Quaternion const & ) ;
            
            Quaternion_exposer.def( 
                "assign"
                , assign_function_type( &::CEGUI::Quaternion::operator= )
                , ( bp::arg("v") )
                , bp::return_self< >()
                , "! assignment operator\n" );
        
        }
        Quaternion_exposer.def( bp::self == bp::self );
        { //::CEGUI::Quaternion::slerp
        
            typedef ::CEGUI::Quaternion ( *slerp_function_type )( ::CEGUI::Quaternion const &,::CEGUI::Quaternion const &,float,bool );
            
            Quaternion_exposer.def( 
                "slerp"
                , slerp_function_type( &::CEGUI::Quaternion::slerp )
                , ( bp::arg("left"), bp::arg("right"), bp::arg("position"), bp::arg("shortestPath")=(bool)(false) )
                , "*!\n\
                 spherical linear interpolation\n\
            \n\
                @param left\n\
                    Left keyframe Quaternion\n\
            \n\
                @param right\n\
                    Right keyframe Quaternion\n\
            \n\
                @param position\n\
                    Number from range <0.0, 1.0), the closer this is to 1.0, the closer the interpolation is to\
                    the right quaternion\n\
            \n\
                @param shortestPath\n\
                    If true, the interpolation is guaranteed to go through the shortest path\n\
                *\n" );
        
        }
        Quaternion_exposer.def_readonly( "IDENTITY", CEGUI::Quaternion::IDENTITY, "! Quaternion(0, 0, 0, 0)\n\
        ! Quaternion(1, 0, 0, 0)\n" );
        Quaternion_exposer.def_readonly( "ZERO", CEGUI::Quaternion::ZERO, "! Quaternion(0, 0, 0, 0)\n" );
        Quaternion_exposer.def_readwrite( "d_w", &CEGUI::Quaternion::d_w, "! imaginary part\n" );
        Quaternion_exposer.def_readwrite( "d_x", &CEGUI::Quaternion::d_x, "! imaginary part\n\
        ! x component of the vector part\n" );
        Quaternion_exposer.def_readwrite( "d_y", &CEGUI::Quaternion::d_y, "! x component of the vector part\n\
        ! y component of the vector part\n" );
        Quaternion_exposer.def_readwrite( "d_z", &CEGUI::Quaternion::d_z, "! y component of the vector part\n\
        ! z component of the vector part\n" );
        Quaternion_exposer.staticmethod( "axisAngleDegrees" );
        Quaternion_exposer.staticmethod( "axisAngleRadians" );
        Quaternion_exposer.staticmethod( "eulerAnglesDegrees" );
        Quaternion_exposer.staticmethod( "eulerAnglesRadians" );
        Quaternion_exposer.staticmethod( "slerp" );
    }

}
