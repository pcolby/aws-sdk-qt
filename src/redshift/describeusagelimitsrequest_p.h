// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSAGELIMITSREQUEST_P_H
#define QTAWS_DESCRIBEUSAGELIMITSREQUEST_P_H

#include "redshiftrequest_p.h"
#include "describeusagelimitsrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeUsageLimitsRequest;

class DescribeUsageLimitsRequestPrivate : public RedshiftRequestPrivate {

public:
    DescribeUsageLimitsRequestPrivate(const RedshiftRequest::Action action,
                                   DescribeUsageLimitsRequest * const q);
    DescribeUsageLimitsRequestPrivate(const DescribeUsageLimitsRequestPrivate &other,
                                   DescribeUsageLimitsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeUsageLimitsRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
