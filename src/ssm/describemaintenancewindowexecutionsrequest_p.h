// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMAINTENANCEWINDOWEXECUTIONSREQUEST_P_H
#define QTAWS_DESCRIBEMAINTENANCEWINDOWEXECUTIONSREQUEST_P_H

#include "ssmrequest_p.h"
#include "describemaintenancewindowexecutionsrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeMaintenanceWindowExecutionsRequest;

class DescribeMaintenanceWindowExecutionsRequestPrivate : public SsmRequestPrivate {

public:
    DescribeMaintenanceWindowExecutionsRequestPrivate(const SsmRequest::Action action,
                                   DescribeMaintenanceWindowExecutionsRequest * const q);
    DescribeMaintenanceWindowExecutionsRequestPrivate(const DescribeMaintenanceWindowExecutionsRequestPrivate &other,
                                   DescribeMaintenanceWindowExecutionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeMaintenanceWindowExecutionsRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
