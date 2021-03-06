/**
 * Copyright (C) 2008-2014 Joao Paulo de Souza Medeiros
 *
 * Author(s): Joao Paulo de Souza Medeiros <ignotus21@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#include "function.h"


clann_real_type
function_step(const clann_real_type value)
{
    if (value >= 0)
        return 1;

    return 0;
}


clann_real_type
function_signal(const clann_real_type value)
{
    if (value >= 0)
        return 1;

    return -1;
}

clann_real_type
function_sigmoid(const clann_real_type value)
{
    clann_real_type a = CLANN_EXP(-(value));
    return 1 / (1 + a);
}

clann_real_type
function_tanh(const clann_real_type value)
{
    clann_real_type a = CLANN_EXP(2 * (value));
    return (a - 1) / (a + 1);
}

clann_real_type
function_green_gaussian(const clann_real_type sigma,
                        const clann_real_type value)
{
    return CLANN_EXP(-((value) / (2 * (sigma) * (sigma))));
}
