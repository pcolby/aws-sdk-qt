// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTOVERVIEWREQUEST_P_H
#define QTAWS_DESCRIBEACCOUNTOVERVIEWREQUEST_P_H

#include "devopsgururequest_p.h"
#include "describeaccountoverviewrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class DescribeAccountOverviewRequest;

class DescribeAccountOverviewRequestPrivate : public DevOpsGuruRequestPrivate {

public:
    DescribeAccountOverviewRequestPrivate(const DevOpsGuruRequest::Action action,
                                   DescribeAccountOverviewRequest * const q);
    DescribeAccountOverviewRequestPrivate(const DescribeAccountOverviewRequestPrivate &other,
                                   DescribeAccountOverviewRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAccountOverviewRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
