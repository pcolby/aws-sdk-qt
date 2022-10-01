// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMAINTENANCEWINDOWEXECUTIONTASKINVOCATIONREQUEST_P_H
#define QTAWS_GETMAINTENANCEWINDOWEXECUTIONTASKINVOCATIONREQUEST_P_H

#include "ssmrequest_p.h"
#include "getmaintenancewindowexecutiontaskinvocationrequest.h"

namespace QtAws {
namespace Ssm {

class GetMaintenanceWindowExecutionTaskInvocationRequest;

class GetMaintenanceWindowExecutionTaskInvocationRequestPrivate : public SsmRequestPrivate {

public:
    GetMaintenanceWindowExecutionTaskInvocationRequestPrivate(const SsmRequest::Action action,
                                   GetMaintenanceWindowExecutionTaskInvocationRequest * const q);
    GetMaintenanceWindowExecutionTaskInvocationRequestPrivate(const GetMaintenanceWindowExecutionTaskInvocationRequestPrivate &other,
                                   GetMaintenanceWindowExecutionTaskInvocationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMaintenanceWindowExecutionTaskInvocationRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
