// Copyright Cartesi and individual authors (see AUTHORS)
// SPDX-License-Identifier: LGPL-3.0-or-later
//
// This program is free software: you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License as published by the Free
// Software Foundation, either version 3 of the License, or (at your option) any
// later version.
//
// This program is distributed in the hope that it will be useful, but WITHOUT ANY
// WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
// PARTICULAR PURPOSE. See the GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License along
// with this program (see COPYING). If not, see <https://www.gnu.org/licenses/>.
//

#ifndef MACHINE_EMULATOR_SDK_MACHINE_C_VERSION_H
#define MACHINE_EMULATOR_SDK_MACHINE_C_VERSION_H
// NOLINTBEGIN

#define CM_MARCHID 15

#define CM_VERSION_MAJOR 0
#define CM_VERSION_MINOR 15
#define CM_VERSION_PATCH 2
#define CM_VERSION_LABEL ""

#define _CM_STR_HELPER(x) #x
#define _CM_STR(x) _CM_STR_HELPER(x)
#define CM_VERSION                                                                                                     \
    _CM_STR(CM_VERSION_MAJOR) "." _CM_STR(CM_VERSION_MINOR) "." _CM_STR(CM_VERSION_PATCH) CM_VERSION_LABEL

#define CM_MIMPID (CM_VERSION_MAJOR * 1000000 + CM_VERSION_MINOR)

// NOLINTEND
#endif // MACHINE_EMULATOR_SDK_MACHINE_C_VERSION_H
