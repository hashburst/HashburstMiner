/* HashburstMiner
 * Copyright (c) 2018-2020 SChernykh   <https://github.com/SChernykh>
 * Copyright (c) 2016-2020 HashburstMiner       <https://github.com/hashburst/HashburstMiner>, <pegoraro.gabriele@gmail.com>
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

#ifndef HashburstMiner_IBENCHLISTENER_H
#define HashburstMiner_IBENCHLISTENER_H


#include "base/tools/Object.h"


namespace HashburstMiner {


class IBackend;


class IBenchListener
{
public:
    HashburstMiner_DISABLE_COPY_MOVE(IBenchListener)

    IBenchListener()            = default;
    virtual ~IBenchListener()   = default;

    virtual void onBenchDone(uint64_t result, uint64_t diff, uint64_t ts)               = 0;
    virtual void onBenchReady(uint64_t ts, uint32_t threads, const IBackend *backend)   = 0;
};


} /* namespace HashburstMiner */


#endif // HashburstMiner_IBENCHLISTENER_H
