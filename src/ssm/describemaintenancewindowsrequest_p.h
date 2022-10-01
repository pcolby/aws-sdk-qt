// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMAINTENANCEWINDOWSREQUEST_P_H
#define QTAWS_DESCRIBEMAINTENANCEWINDOWSREQUEST_P_H

#include "ssmrequest_p.h"
#include "describemaintenancewindowsrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeMaintenanceWindowsRequest;

class DescribeMaintenanceWindowsRequestPrivate : public SsmRequestPrivate {

public:
    DescribeMaintenanceWindowsRequestPrivate(const SsmRequest::Action action,
                                   DescribeMaintenanceWindowsRequest * const q);
    DescribeMaintenanceWindowsRequestPrivate(const DescribeMaintenanceWindowsRequestPrivate &other,
                                   DescribeMaintenanceWindowsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeMaintenanceWindowsRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
