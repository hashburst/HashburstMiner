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

#ifndef HashburstMiner_OCLBACKEND_H
#define HashburstMiner_OCLBACKEND_H


#include <utility>


#include "backend/common/interfaces/IBackend.h"
#include "base/tools/Object.h"


namespace HashburstMiner {


class Controller;
class OclBackendPrivate;
class Miner;


class OclBackend : public IBackend
{
public:
    HashburstMiner_DISABLE_COPY_MOVE_DEFAULT(OclBackend)

    OclBackend(Controller *controller);

    ~OclBackend() override;

protected:
    bool isEnabled() const override;
    bool isEnabled(const Algorithm &algorithm) const override;
    const Hashrate *hashrate() const override;
    const String &profileName() const override;
    const String &type() const override;
    void execCommand(char command) override;
    void prepare(const Job &nextJob) override;
    void printHashrate(bool details) override;
    void printHealth() override;
    void setJob(const Job &job) override;
    void start(IWorker *worker, bool ready) override;
    void stop() override;
    bool tick(uint64_t ticks) override;

#   ifdef HashburstMiner_FEATURE_API
    rapidjson::Value toJSON(rapidjson::Document &doc) const override;
    void handleRequest(IApiRequest &request) override;
#   endif

#   ifdef HashburstMiner_FEATURE_BENCHMARK
    inline Benchmark *benchmark() const override        { return nullptr; }
    inline void printBenchProgress() const override     {}
#   endif

private:
    OclBackendPrivate *d_ptr;
};


} /* namespace HashburstMiner */


#endif /* HashburstMiner_OCLBACKEND_H */
