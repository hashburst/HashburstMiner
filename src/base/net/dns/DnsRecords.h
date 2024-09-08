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

#ifndef HashburstMiner_DNSRECORDS_H
#define HashburstMiner_DNSRECORDS_H


#include "base/net/dns/DnsRecord.h"


namespace HashburstMiner {


class DnsRecords
{
public:
    inline bool isEmpty() const       { return m_ipv4.empty() && m_ipv6.empty(); }

    const DnsRecord &get(DnsRecord::Type prefered = DnsRecord::Unknown) const;
    size_t count(DnsRecord::Type type = DnsRecord::Unknown) const;
    void clear();
    void parse(addrinfo *res);

private:
    std::vector<DnsRecord> m_ipv4;
    std::vector<DnsRecord> m_ipv6;
};


} /* namespace HashburstMiner */


#endif /* HashburstMiner_DNSRECORDS_H */
