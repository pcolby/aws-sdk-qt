// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERSNAPSHOTSREQUEST_P_H
#define QTAWS_DESCRIBECLUSTERSNAPSHOTSREQUEST_P_H

#include "redshiftrequest_p.h"
#include "describeclustersnapshotsrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeClusterSnapshotsRequest;

class DescribeClusterSnapshotsRequestPrivate : public RedshiftRequestPrivate {

public:
    DescribeClusterSnapshotsRequestPrivate(const RedshiftRequest::Action action,
                                   DescribeClusterSnapshotsRequest * const q);
    DescribeClusterSnapshotsRequestPrivate(const DescribeClusterSnapshotsRequestPrivate &other,
                                   DescribeClusterSnapshotsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeClusterSnapshotsRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
