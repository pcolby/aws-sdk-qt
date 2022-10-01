// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELMAINTENANCEWINDOWEXECUTIONREQUEST_P_H
#define QTAWS_CANCELMAINTENANCEWINDOWEXECUTIONREQUEST_P_H

#include "ssmrequest_p.h"
#include "cancelmaintenancewindowexecutionrequest.h"

namespace QtAws {
namespace Ssm {

class CancelMaintenanceWindowExecutionRequest;

class CancelMaintenanceWindowExecutionRequestPrivate : public SsmRequestPrivate {

public:
    CancelMaintenanceWindowExecutionRequestPrivate(const SsmRequest::Action action,
                                   CancelMaintenanceWindowExecutionRequest * const q);
    CancelMaintenanceWindowExecutionRequestPrivate(const CancelMaintenanceWindowExecutionRequestPrivate &other,
                                   CancelMaintenanceWindowExecutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelMaintenanceWindowExecutionRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
