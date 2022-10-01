// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMAINTENANCEWINDOWEXECUTIONREQUEST_P_H
#define QTAWS_GETMAINTENANCEWINDOWEXECUTIONREQUEST_P_H

#include "ssmrequest_p.h"
#include "getmaintenancewindowexecutionrequest.h"

namespace QtAws {
namespace Ssm {

class GetMaintenanceWindowExecutionRequest;

class GetMaintenanceWindowExecutionRequestPrivate : public SsmRequestPrivate {

public:
    GetMaintenanceWindowExecutionRequestPrivate(const SsmRequest::Action action,
                                   GetMaintenanceWindowExecutionRequest * const q);
    GetMaintenanceWindowExecutionRequestPrivate(const GetMaintenanceWindowExecutionRequestPrivate &other,
                                   GetMaintenanceWindowExecutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMaintenanceWindowExecutionRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
