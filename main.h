/**
 * *****************************************************************************
 * @mainpage       This is mainpage
 * @section        The section title
 *                 section content
 * @note           This note
 * @warning        This is warning
 * @attention      This is attention
 * @par            par title
 *                 par content
 * @pre            The is pre
 * @author         tqfx tqfx@foxmail.com
 * @version        This is version
 * @date           2020-01-01
 * @copyright      Copyright (C) 2020 tqfx
 * *****************************************************************************
 * @file           main.h
 * @brief          This is brief
 * @details        This is details
 * @author         tqfx tqfx@foxmail.com
 * @version        This is version
 * @date           2020-01-01
 * @copyright      Copyright (C) 2020 tqfx
 * *****************************************************************************
*/

/*!
 @mainpage       This is mainpage
 @section        The section title
                 section content
 @note           This note
 @warning        This is warning
 @attention      This is attention
 @par            par title
                 par content
 @pre            The is pre
 @author         tqfx tqfx@foxmail.com
 @version        This is version
 @date           2020-01-01
 @copyright      Copyright (C) 2020 tqfx
*/

/*!
 @file           main.h
 @brief          This is brief
 @details        This is details
 @author         tqfx tqfx@foxmail.com
 @version        This is version
 @date           2020-01-01
 @copyright      Copyright (C) 2020 tqfx
*/

/* Define to prevent recursive inclusion */
#ifndef __MAIN_H__
#define __MAIN_H__

/*!
 @defgroup       group_main this is group_main
 @brief          This is brief
 @details        This is detals
*/

/*!
 @ingroup        group_main
 @{
*/

/* Include */
#include "apache.h"
#include "agpl3.h"
#include "gpl3.h"
#include "mit.h"

/*!
 @def            __BEGIN_DECLS
 @brief          extern "C" {
*/
#undef __BEGIN_DECLS
/*!
 @def            __END_DECLS
 @brief          }
*/
#undef __END_DECLS
#if defined(__cplusplus)
#define __BEGIN_DECLS \
    extern "C" {
#define __END_DECLS \
    }
#else
#define __BEGIN_DECLS
#define __END_DECLS
#endif /* __cplusplus */

/*!
 @enum           enum_e
 @brief          This is brief
 @details        This is details
*/
enum enum_e
{
    ENUM0, //!< The enum 0
    /*!< details 0 */
    ENUM1, //!< The enum 1
    /*!< details 1 */
};

/*!
 @struct         struct_s
 @brief          This is brief
 @details        This is details
*/
struct struct_s
{
    int member0; //!< The member 0
    /*!< details 0 */
    int member1; //!< The member 1
    /*!< details 1 */
};

/*!
 @union          union_u
 @brief          This is brief
 @details        This is details
*/
union union_u
{
    char c; //!< int8_t
    /*!< 8 bit */
    long i; //!< int32_t
    /*!< 32 bit */
};

/*!
 @typedef        enum_t
 @brief          This is brief
 @details        This is details
*/
typedef enum enum_e enum_t;

/*!
 @typedef        struct_t
 @brief          This is brief
 @details        This is details
*/
typedef struct struct_s struct_t;

/*!
 @typedef        union_t
 @brief          This is brief
 @details        This is details
*/
typedef union union_u union_t;

/*!
 @}              end of group_main
 @addtogroup     group_main
 @{
*/

/*!
 @defgroup       group_function this is group_function
 @brief          This is brief
 @details        This is details
 @{
*/

/*!
 @fn             extern int function(struct_t *s,
                                     union_t  *u,
                                     enum_t    e);
 @brief          This is brief
 @details        This is details
 @f{eqnarray*}{
       g &=& \frac{Gm_2}{r^2} \\
         &=& \frac{(6.673 \times 10^{-11}\,\mbox{m}^3\,\mbox{kg}^{-1}\,
             \mbox{s}^{-2})(5.9736 \times 10^{24}\,\mbox{kg})}{(6371.01\,\mbox{km})^2} \\
         &=& 9.82066032\,\mbox{m/s}^2
 @f}
 @param[in,out]  s: @ref struct_t
 @param[out]     u: @ref union_t
 @param[in]      e: @ref enum_t
  @arg           ENUM0 enum0
  @arg           ENUM1 enum1
 @return         The status
  @retval        0  success
  @retval        -1 failure
 @exception      This is exception
 @since          This is since
 @pre            This is pre
 @post           This is post
 @note           This is note
 @warning        This is warning
 @todo           This is todo
 @bug            This is bug
 @deprecated     This is deprecated
 @see            function
*/
extern int function(struct_t *s,
                    union_t *u,
                    enum_t e);

/*!
 @}              group_function
 @}              group_main
*/

/* Enddef to prevent recursive inclusion */
#endif /* __MAIN_H__ */

/* END OF FILE */
