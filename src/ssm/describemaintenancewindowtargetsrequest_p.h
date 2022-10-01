// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMAINTENANCEWINDOWTARGETSREQUEST_P_H
#define QTAWS_DESCRIBEMAINTENANCEWINDOWTARGETSREQUEST_P_H

#include "ssmrequest_p.h"
#include "describemaintenancewindowtargetsrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeMaintenanceWindowTargetsRequest;

class DescribeMaintenanceWindowTargetsRequestPrivate : public SsmRequestPrivate {

public:
    DescribeMaintenanceWindowTargetsRequestPrivate(const SsmRequest::Action action,
                                   DescribeMaintenanceWindowTargetsRequest * const q);
    DescribeMaintenanceWindowTargetsRequestPrivate(const DescribeMaintenanceWindowTargetsRequestPrivate &other,
                                   DescribeMaintenanceWindowTargetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeMaintenanceWindowTargetsRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
