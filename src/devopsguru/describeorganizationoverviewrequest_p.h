// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORGANIZATIONOVERVIEWREQUEST_P_H
#define QTAWS_DESCRIBEORGANIZATIONOVERVIEWREQUEST_P_H

#include "devopsgururequest_p.h"
#include "describeorganizationoverviewrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class DescribeOrganizationOverviewRequest;

class DescribeOrganizationOverviewRequestPrivate : public DevOpsGuruRequestPrivate {

public:
    DescribeOrganizationOverviewRequestPrivate(const DevOpsGuruRequest::Action action,
                                   DescribeOrganizationOverviewRequest * const q);
    DescribeOrganizationOverviewRequestPrivate(const DescribeOrganizationOverviewRequestPrivate &other,
                                   DescribeOrganizationOverviewRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeOrganizationOverviewRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
