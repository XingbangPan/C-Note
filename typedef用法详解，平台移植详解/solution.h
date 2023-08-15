
/*----------------------------------------------------------------------------*/
/*!@brief typedef for uint64 */
typedef unsigned long long ;
 
/*----------------------------------------------------------------------------*/
/*!@brief typedef for int64 */
typedef long long int64;
 
/*----------------------------------------------------------------------------*/
/*!@brief typedef for uint32 */
typedef unsigned int uint32;
 
/*----------------------------------------------------------------------------*/
/*!@brief typedef for int32 */
typedef int int32;
 
/*----------------------------------------------------------------------------*/
/*!@brief typedef for uint16 */
typedef unsigned short uint16;
 
/*----------------------------------------------------------------------------*/
/*!@brief typedef for int16 */
typedef short int16;
 
/*----------------------------------------------------------------------------*/
/*!@brief typedef for uint8 */
typedef uint8_t uint8;
 
/*----------------------------------------------------------------------------*/
/*!@brief typedef for int8 */
typedef int8_t int8;
 
/*----------------------------------------------------------------------------*/
/*!@brief typedef for BOOLEAN */
typedef uint8_t BOOLEAN;
 
/*----------------------------------------------------------------------------*/
/*!@brief typedef for BYTE */
typedef uint8_t BYTE;
 
/*----------------------------------------------------------------------------*/
/*!@brief typedef for WORD */
typedef uint32_t WORD;

/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/


#ifdef MICROCONTROLLER_32_BIT_COMPILER_32_BIT
    /*----------------------------------------------------------------------------*/
    /*!@brief typedef for uint64 */
typedef unsigned long uint64;
 
    /*----------------------------------------------------------------------------*/
    /*!@brief typedef for int64 */
    typedef long int64;
 
    /*----------------------------------------------------------------------------*/
    /*!@brief typedef for uint32 */
    typedef unsigned int uint32;
 
    /*----------------------------------------------------------------------------*/
    /*!@brief typedef for int32 */
    typedef int int32;
 
    /*----------------------------------------------------------------------------*/
    /*!@brief typedef for uint16 */
    typedef unsigned short uint16;
 
    /*----------------------------------------------------------------------------*/
    /*!@brief typedef for int16 */
    typedef short int16;
 
    /*----------------------------------------------------------------------------*/
    /*!@brief typedef for uint8 */
    typedef unsigned char uint8;
 
    /*----------------------------------------------------------------------------*/
    /*!@brief typedef for int8 */
    typedef char int8;
 
    /*----------------------------------------------------------------------------*/
    /*!@brief typedef for BOOLEAN */
    typedef unsigned char BOOLEAN;
 
    /*----------------------------------------------------------------------------*/
    /*!@brief typedef for BYTE */
    typedef unsigned char BYTE;
 
    /*----------------------------------------------------------------------------*/
    /*!@brief typedef for WORD */
    typedef unsigned int WORD;
 
#endif /* MICROCONTROLLER_32_BIT_COMPILER_32_BIT */
 
#ifdef MICROCONTROLLER_16_BIT_COMPILER_16_BIT
    /*----------------------------------------------------------------------------*/
    /*!@brief typedef for uint32 */
    typedef unsigned long uint32;
 
    /*----------------------------------------------------------------------------*/
    /*!@brief typedef for int32 */
    typedef long int32;
 
    /*----------------------------------------------------------------------------*/
    /*!@brief typedef for uint16 */
    typedef unsigned int uint16;
 
    /*----------------------------------------------------------------------------*/
    /*!@brief typedef for int16 */
    typedef int int16;
 
    /*----------------------------------------------------------------------------*/
    /*!@brief typedef for uint8 */
    typedef unsigned char uint8;
 
    /*----------------------------------------------------------------------------*/
    /*!@brief typedef for int8 */
    typedef char int8;
 
    /*----------------------------------------------------------------------------*/
    /*!@brief typedef for BOOLEAN */
    typedef unsigned char BOOLEAN;
 
    /*----------------------------------------------------------------------------*/
    /*!@brief typedef for BYTE */
    typedef unsigned char BYTE;

    /*----------------------------------------------------------------------------*/
    /*!@brief typedef for WORD */
    typedef unsigned long WORD;
#endif /* MICROCONTROLLER_16_BIT_COMPILER_16_BIT */