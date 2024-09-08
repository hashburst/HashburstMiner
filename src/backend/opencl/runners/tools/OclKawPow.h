/* HashburstMiner
 * Copyright (c) 2018-2021 SChernykh   <https://github.com/SChernykh>
 * Copyright (c) 2016-2021 HashburstMiner       <https://github.com/hashburst/HashburstMiner>, <pegoraro.gabriele@gmail.com>
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef HashburstMiner_OCLKAWPOW_H
#define HashburstMiner_OCLKAWPOW_H


#include <cstddef>
#include <cstdint>


using cl_kernel = struct _cl_kernel *;


namespace HashburstMiner {


class IOclRunner;


class OclKawPow
{
public:
    static cl_kernel get(const IOclRunner &runner, uint64_t height, uint32_t worksize);
    static void clear();
};


} // namespace HashburstMiner


#endif /* HashburstMiner_OCLKAWPOW_H */
