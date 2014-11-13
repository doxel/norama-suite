/*
 * norama suite - Panorama tools suite
 *
 * Copyright (c) 2013-2014 FOXEL SA - http://foxel.ch
 * Please read <http://foxel.ch/license> for more information.
 *
 *
 * Author(s):
 *
 *      Nils Hamel <n.hamel@foxel.ch>
 *
 *
 * This file is part of the FOXEL project <http://foxel.ch>.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *
 * Additional Terms:
 *
 *      You are required to preserve legal notices and author attributions in
 *      that material or in the Appropriate Legal Notices displayed by works
 *      containing it.
 *
 *      You are required to attribute the work as explained in the "Usage and
 *      Attribution" section of <http://foxel.ch/license>.
 */

    /*! \file   norama-invert.h
     *  \author Nils Hamel <n.hamel@foxel.ch>
     *   
     *  Software main header (single function software)
     */

    /*! \mainpage norama-rotate
     *
     *  \section norama-suite
     *  \section _ Panorama tools suite
     *
     *  This software suite offers tools for numerical panoramas manipulation.
     *  Mainly based on equirectangular mappings, the norama-suite tools are each
     *  designed to solve a single task on panoramas, in order to maintain a good
     *  modularity of the suite. A typical example is given by rectilinear
     *  mappings extraction from a entire equirectangular mapped image.
     *
     *  \section Documentation
     *
     *  A detailed documentation can be generated through doxygen. A more general
     *  documentation can be consulted at https://github.com/FoxelSA/norama-suite/wiki
     *
     *  \section Copyright
     * 
     *  Copyright (c) 2013-2014 FOXEL SA - http://foxel.ch \n
     *  This program is part of the FOXEL project <http://foxel.ch>.
     *  
     *  Please read the COPYRIGHT.md file for more information.
     *
     *  \section License
     *
     *  This program is licensed under the terms of the GNU Affero General Public
     *  License v3 (GNU AGPL), with two additional terms. The content is licensed
     *  under the terms of the Creative Commons Attribution-ShareAlike 4.0
     *  International (CC BY-SA) license.
     *
     *  You must read <http://foxel.ch/license> for more information about our
     *  Licensing terms and our Usage and Attribution guidelines.
     */

/* 
    Header - Include guard
 */

    # ifndef __NR_INVERT__
    # define __NR_INVERT__

/* 
    Header - C/C++ compatibility
 */

    # ifdef __cplusplus
    extern "C" {
    # endif

/* 
    Header - Includes
 */

    # include <stdio.h>
    # include <stdlib.h>
    # include <opencv/cv.h>
    # include <opencv/highgui.h>
    # include <gnomonic-all.h>

/* 
    Header - Preprocessor definitions
 */

    /* Standard help */
    # define NR_HELP "Usage summary :\n\n"                     \
    "\tnorama-invert [Arguments] [Parameters] ...\n\n"         \
    "Short arguments and parameters summary :\n\n"             \
    "\t-F\tForce input image in RGB format\n"                  \
    "\t-C\tClear created image content\n"                      \
    "\t-N\tGeneric projection\n"                               \
    "\t-E\tElphel-specific projection\n"                       \
    "\t-T\tCentered-specific projection\n"                     \
    "\t-P\tApperture-specific projection\n"                    \
    "\t-i\tInput equirectangular image\n"                      \
    "\t-o\tOutput rectilinear image\n"                         \
    "\t-u\tApperture angle [°]\n"                              \
    "\t-x\tProjection x-sight in floating pixels\n"            \
    "\t-y\tProjection y-sight in floating pixels\n"            \
    "\t-a\tAzimuth angle [°] - rotation along z axis\n"        \
    "\t-d\tHeading angle [°] - azimuth correction\n"           \
    "\t-e\tElevation angle [°] - rotation along y axis\n"      \
    "\t-r\tRoll angle [°] - rotation along x axis\n"           \
    "\t-f\tRectilinear focal length [mm]\n"                    \
    "\t-f\tRectilinear pixel length [mm]\n"                    \
    "\t-R\tRed component of clear color\n"                     \
    "\t-G\tGreen component of clear color\n"                   \
    "\t-B\tBlue component of clear color\n"                    \
    "\t-k\tRectilinear image width, in pixels\n"               \
    "\t-l\tRectilinear image height, in pixels\n"              \
    "\t-W\tEntire equirectangular mapping width, in pixels\n"  \
    "\t-H\tEntire equirectangular mapping height, in pixels\n" \
    "\t-X\tEquirectangular tile x-position\n"                  \
    "\t-Y\tEquirectangular tile y-position\n"                  \
    "\t-t\tNumber of threads\n"                                \
    "\t-n\tInterpolation method\n\n"                           \
    "norama-invert - norama-suite\n"                           \
    "Copyright (c) 2013-2014 FOXEL SA - http://foxel.ch\n"

    /* Define standard types */
    # define NR_NULL        0
    # define NR_STRING      1
    # define NR_CHAR        2
    # define NR_SHORT       3
    # define NR_INT         4
    # define NR_LONG        5
    # define NR_LLONG       6
    # define NR_UCHAR       7
    # define NR_USHORT      8
    # define NR_UINT        9
    # define NR_ULONG      10
    # define NR_ULLONG     11
    # define NR_FLOAT      12
    # define NR_DOUBLE     13

/* 
    Header - Preprocessor macros
 */

/* 
    Header - Typedefs
 */

/* 
    Header - Structures
 */

/* 
    Header - Function prototypes
 */

    /*! \brief Software main function (single function software)
     *  
     *  The main function is responsible for input image importation and output
     *  image initialization. According to parameters, the invert gnomonic
     *  projection algorithm is called and the computed output image is then
     *  exported.
     *  
     *  \param argc Standard main parameter
     *  \param argv Standard main parameter
     */

    int main ( int argc, char ** argv );

    /*! \brief Interpolation method by string
     *
     *  This function return a pointer to an interpolation method based on the
     *  string passed as parameter. The list of implemented tags is given by :
     *
     *      bilinearf   Fast bilinear method
     *      bicubicf    Fast bicubic method
     *      bipenticf   Fast bipentic method
     *      bihepticf   Fast biheptic method
     *
     *  In case the provided string corresponds to no known tag, the fast bicubic
     *  method is returned as default.
     *
     *  \param  nrTag   String contained the method tag
     *
     *  \return Returns the desired interpolation method
     */

    li_Method_t nr_direct_method ( char const * const nrTag );

    /*! \brief Arguments common handler
     *  
     *  This function searches in the argv string array the position of the
     *  argument defined through ltag/stag and returns the detected index.
     *  
     *  \param  argc    Standard main parameter
     *  \param  argv    Standard main parameter
     *  \param  ltag    Long-form argument string
     *  \param  stag    Short-form argument string
     *
     *  \return         Returns index of parameter in argv
     */

    int stda ( int argc, char ** argv, char const * const ltag, char const * const stag );

    /*! \brief Parameters common handler
     *  
     *  This function interprets the parameter in the desired type and returns
     *  it through the param variable. The argi variable is typically set using
     *  stda function. If argi is set to CS_NULL, the function does nothing.
     *  
     *  \param argi     Index of the parameter in argv
     *  \param argv     Standard main parameter
     *  \param param    Pointer to the variable that recieve the interpreted
     *                  parameter
     *  \param type     Type to use for parameter interpretation
     */

    void stdp ( int argi, char ** argv, void * const param, int const type );

/* 
    Header - C/C++ compatibility
 */

    # ifdef __cplusplus
    }
    # endif

/*
    Header - Include guard
 */

    # endif

