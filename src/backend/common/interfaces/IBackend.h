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

#ifndef HashburstMiner_IBACKEND_H
#define HashburstMiner_IBACKEND_H


#include "3rdparty/rapidjson/fwd.h"
#include "base/tools/Object.h"


#include <cstdint>


namespace HashburstMiner {


class Algorithm;
class Benchmark;
class Hashrate;
class IApiRequest;
class IWorker;
class Job;
class String;


class IBackend
{
public:
    HashburstMiner_DISABLE_COPY_MOVE(IBackend)

    IBackend()          = default;
    virtual ~IBackend() = default;

    virtual bool isEnabled() const                                      = 0;
    virtual bool isEnabled(const Algorithm &algorithm) const            = 0;
    virtual bool tick(uint64_t ticks)                                   = 0;
    virtual const Hashrate *hashrate() const                            = 0;
    virtual const String &profileName() const                           = 0;
    virtual const String &type() const                                  = 0;
    virtual void execCommand(char command)                              = 0;
    virtual void prepare(const Job &nextJob)                            = 0;
    virtual void printHashrate(bool details)                            = 0;
    virtual void printHealth()                                          = 0;
    virtual void setJob(const Job &job)                                 = 0;
    virtual void start(IWorker *worker, bool ready)                     = 0;
    virtual void stop()                                                 = 0;

#   ifdef HashburstMiner_FEATURE_API
    virtual rapidjson::Value toJSON(rapidjson::Document &doc) const     = 0;
    virtual void handleRequest(IApiRequest &request)                    = 0;
#   endif

#   ifdef HashburstMiner_FEATURE_BENCHMARK
    virtual Benchmark *benchmark() const                                = 0;
    virtual void printBenchProgress() const                             = 0;
#   endif
};


} // namespace HashburstMiner


#endif // HashburstMiner_IBACKEND_H
