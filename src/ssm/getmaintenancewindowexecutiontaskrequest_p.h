// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMAINTENANCEWINDOWEXECUTIONTASKREQUEST_P_H
#define QTAWS_GETMAINTENANCEWINDOWEXECUTIONTASKREQUEST_P_H

#include "ssmrequest_p.h"
#include "getmaintenancewindowexecutiontaskrequest.h"

namespace QtAws {
namespace Ssm {

class GetMaintenanceWindowExecutionTaskRequest;

class GetMaintenanceWindowExecutionTaskRequestPrivate : public SsmRequestPrivate {

public:
    GetMaintenanceWindowExecutionTaskRequestPrivate(const SsmRequest::Action action,
                                   GetMaintenanceWindowExecutionTaskRequest * const q);
    GetMaintenanceWindowExecutionTaskRequestPrivate(const GetMaintenanceWindowExecutionTaskRequestPrivate &other,
                                   GetMaintenanceWindowExecutionTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMaintenanceWindowExecutionTaskRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
