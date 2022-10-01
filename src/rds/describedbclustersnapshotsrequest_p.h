// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBCLUSTERSNAPSHOTSREQUEST_P_H
#define QTAWS_DESCRIBEDBCLUSTERSNAPSHOTSREQUEST_P_H

#include "rdsrequest_p.h"
#include "describedbclustersnapshotsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeDBClusterSnapshotsRequest;

class DescribeDBClusterSnapshotsRequestPrivate : public RdsRequestPrivate {

public:
    DescribeDBClusterSnapshotsRequestPrivate(const RdsRequest::Action action,
                                   DescribeDBClusterSnapshotsRequest * const q);
    DescribeDBClusterSnapshotsRequestPrivate(const DescribeDBClusterSnapshotsRequestPrivate &other,
                                   DescribeDBClusterSnapshotsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDBClusterSnapshotsRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
