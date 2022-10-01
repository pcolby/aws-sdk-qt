// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMAINTENANCEWINDOWTASKSREQUEST_P_H
#define QTAWS_DESCRIBEMAINTENANCEWINDOWTASKSREQUEST_P_H

#include "ssmrequest_p.h"
#include "describemaintenancewindowtasksrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeMaintenanceWindowTasksRequest;

class DescribeMaintenanceWindowTasksRequestPrivate : public SsmRequestPrivate {

public:
    DescribeMaintenanceWindowTasksRequestPrivate(const SsmRequest::Action action,
                                   DescribeMaintenanceWindowTasksRequest * const q);
    DescribeMaintenanceWindowTasksRequestPrivate(const DescribeMaintenanceWindowTasksRequestPrivate &other,
                                   DescribeMaintenanceWindowTasksRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeMaintenanceWindowTasksRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
