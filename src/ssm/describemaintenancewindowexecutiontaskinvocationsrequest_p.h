// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMAINTENANCEWINDOWEXECUTIONTASKINVOCATIONSREQUEST_P_H
#define QTAWS_DESCRIBEMAINTENANCEWINDOWEXECUTIONTASKINVOCATIONSREQUEST_P_H

#include "ssmrequest_p.h"
#include "describemaintenancewindowexecutiontaskinvocationsrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeMaintenanceWindowExecutionTaskInvocationsRequest;

class DescribeMaintenanceWindowExecutionTaskInvocationsRequestPrivate : public SsmRequestPrivate {

public:
    DescribeMaintenanceWindowExecutionTaskInvocationsRequestPrivate(const SsmRequest::Action action,
                                   DescribeMaintenanceWindowExecutionTaskInvocationsRequest * const q);
    DescribeMaintenanceWindowExecutionTaskInvocationsRequestPrivate(const DescribeMaintenanceWindowExecutionTaskInvocationsRequestPrivate &other,
                                   DescribeMaintenanceWindowExecutionTaskInvocationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeMaintenanceWindowExecutionTaskInvocationsRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
