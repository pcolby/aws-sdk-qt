// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMAINTENANCEWINDOWSCHEDULEREQUEST_P_H
#define QTAWS_DESCRIBEMAINTENANCEWINDOWSCHEDULEREQUEST_P_H

#include "ssmrequest_p.h"
#include "describemaintenancewindowschedulerequest.h"

namespace QtAws {
namespace Ssm {

class DescribeMaintenanceWindowScheduleRequest;

class DescribeMaintenanceWindowScheduleRequestPrivate : public SsmRequestPrivate {

public:
    DescribeMaintenanceWindowScheduleRequestPrivate(const SsmRequest::Action action,
                                   DescribeMaintenanceWindowScheduleRequest * const q);
    DescribeMaintenanceWindowScheduleRequestPrivate(const DescribeMaintenanceWindowScheduleRequestPrivate &other,
                                   DescribeMaintenanceWindowScheduleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeMaintenanceWindowScheduleRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
