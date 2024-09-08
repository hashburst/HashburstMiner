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

#ifndef HashburstMiner_TASKBAR_H
#define HashburstMiner_TASKBAR_H


namespace HashburstMiner {


struct TaskbarPrivate;


class Taskbar
{
public:
    Taskbar();
    ~Taskbar();

    void setActive(bool active);
    void setEnabled(bool enabled);

private:
    bool m_active = false;
    bool m_enabled = true;

    TaskbarPrivate* d_ptr = nullptr;

    void updateTaskbarColor();
};


} // namespace HashburstMiner


#endif /* HashburstMiner_TASKBAR_H */
