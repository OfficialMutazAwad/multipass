/*
 * Copyright (C) 2018-2022 Canonical, Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef MULTIPASS_LOG_H
#define MULTIPASS_LOG_H

#include <multipass/logging/cstring.h>
#include <multipass/logging/level.h>
#include <multipass/logging/logger.h>

namespace multipass
{
namespace logging
{
void log(Level level, CString category, CString message);
void set_logger(std::shared_ptr<Logger> logger);
Level get_logging_level();
Logger* get_logger(); // for tests, don't rely on it lasting
} // namespace logging
} // namespace multipass
#endif // MULTIPASS_LOG_H
