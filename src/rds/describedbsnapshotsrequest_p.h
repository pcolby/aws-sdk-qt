// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBSNAPSHOTSREQUEST_P_H
#define QTAWS_DESCRIBEDBSNAPSHOTSREQUEST_P_H

#include "rdsrequest_p.h"
#include "describedbsnapshotsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeDBSnapshotsRequest;

class DescribeDBSnapshotsRequestPrivate : public RdsRequestPrivate {

public:
    DescribeDBSnapshotsRequestPrivate(const RdsRequest::Action action,
                                   DescribeDBSnapshotsRequest * const q);
    DescribeDBSnapshotsRequestPrivate(const DescribeDBSnapshotsRequestPrivate &other,
                                   DescribeDBSnapshotsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDBSnapshotsRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
