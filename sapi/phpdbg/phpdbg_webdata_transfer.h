/*
   +----------------------------------------------------------------------+
   | PHP Version 5                                                        |
   +----------------------------------------------------------------------+
   | Copyright (c) 1997-2014 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Authors: Bob Weinand <bwoebi@php.net>                                |
   +----------------------------------------------------------------------+
*/

#ifndef PHPDBG_WEBDATA_TRANSFER_H
#define PHPDBG_WEBDATA_TRANSFER_H

#include "zend.h"
#include "phpdbg.h"

PHPDBG_API void phpdbg_webdata_compress(char **msg, int *len TSRMLS_DC);

#endif /* PHPDBG_WEBDATA_TRANSFER_H */
