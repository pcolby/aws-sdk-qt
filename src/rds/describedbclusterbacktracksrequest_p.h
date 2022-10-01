// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBCLUSTERBACKTRACKSREQUEST_P_H
#define QTAWS_DESCRIBEDBCLUSTERBACKTRACKSREQUEST_P_H

#include "rdsrequest_p.h"
#include "describedbclusterbacktracksrequest.h"

namespace QtAws {
namespace Rds {

class DescribeDBClusterBacktracksRequest;

class DescribeDBClusterBacktracksRequestPrivate : public RdsRequestPrivate {

public:
    DescribeDBClusterBacktracksRequestPrivate(const RdsRequest::Action action,
                                   DescribeDBClusterBacktracksRequest * const q);
    DescribeDBClusterBacktracksRequestPrivate(const DescribeDBClusterBacktracksRequestPrivate &other,
                                   DescribeDBClusterBacktracksRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDBClusterBacktracksRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
