// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMAINTENANCEWINDOWSFORTARGETREQUEST_P_H
#define QTAWS_DESCRIBEMAINTENANCEWINDOWSFORTARGETREQUEST_P_H

#include "ssmrequest_p.h"
#include "describemaintenancewindowsfortargetrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeMaintenanceWindowsForTargetRequest;

class DescribeMaintenanceWindowsForTargetRequestPrivate : public SsmRequestPrivate {

public:
    DescribeMaintenanceWindowsForTargetRequestPrivate(const SsmRequest::Action action,
                                   DescribeMaintenanceWindowsForTargetRequest * const q);
    DescribeMaintenanceWindowsForTargetRequestPrivate(const DescribeMaintenanceWindowsForTargetRequestPrivate &other,
                                   DescribeMaintenanceWindowsForTargetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeMaintenanceWindowsForTargetRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
