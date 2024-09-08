/* HashburstMiner
 * Copyright (c) 2018      Lee Clagett <https://github.com/vtnerd>
 * Copyright (c) 2018-2023 SChernykh   <https://github.com/SChernykh>
 * Copyright (c) 2016-2023 HashburstMiner       <https://github.com/hashburst/HashburstMiner>, <pegoraro.gabriele@gmail.com>
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

#ifndef HashburstMiner_TLSCONTEXT_H
#define HashburstMiner_TLSCONTEXT_H


#include "base/tools/Object.h"


using SSL_CTX = struct ssl_ctx_st;


namespace HashburstMiner {


class TlsConfig;


class TlsContext
{
public:
    HashburstMiner_DISABLE_COPY_MOVE(TlsContext)

    ~TlsContext();

    static TlsContext *create(const TlsConfig &config);

    inline SSL_CTX *ctx() const { return m_ctx; }

private:
    TlsContext() = default;

    bool load(const TlsConfig &config);
    bool setCiphers(const char *ciphers);
    bool setCipherSuites(const char *ciphersuites);
    bool setDH(const char *dhparam);
    void setProtocols(uint32_t protocols);

    SSL_CTX *m_ctx = nullptr;
};


} // namespace HashburstMiner


#endif // HashburstMiner_TLSCONTEXT_H
