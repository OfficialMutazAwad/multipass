/*
 * Copyright (C) 2021-2022 Canonical, Ltd.
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

#ifndef MULTIPASS_MOCK_VM_WORKFLOW_PROVIDER_H
#define MULTIPASS_MOCK_VM_WORKFLOW_PROVIDER_H

#include "common.h"

#include <multipass/vm_workflow_provider.h>

namespace multipass
{
namespace test
{
struct MockVMWorkflowProvider : public VMWorkflowProvider
{
    MOCK_METHOD2(fetch_workflow_for, Query(const std::string&, VirtualMachineDescription&));
    MOCK_METHOD1(info_for, VMImageInfo(const std::string&));
    MOCK_METHOD0(all_workflows, std::vector<VMImageInfo>());
    MOCK_METHOD1(name_from_workflow, std::string(const std::string&));
    MOCK_METHOD1(workflow_timeout, int(const std::string&));
};
} // namespace test
} // namespace multipass
#endif // MULTIPASS_MOCK_VM_WORKFLOW_PROVIDER_H
