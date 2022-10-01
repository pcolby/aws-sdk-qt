// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPLICATIONSNAPSHOTREQUEST_P_H
#define QTAWS_DESCRIBEAPPLICATIONSNAPSHOTREQUEST_P_H

#include "kinesisanalyticsv2request_p.h"
#include "describeapplicationsnapshotrequest.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class DescribeApplicationSnapshotRequest;

class DescribeApplicationSnapshotRequestPrivate : public KinesisAnalyticsV2RequestPrivate {

public:
    DescribeApplicationSnapshotRequestPrivate(const KinesisAnalyticsV2Request::Action action,
                                   DescribeApplicationSnapshotRequest * const q);
    DescribeApplicationSnapshotRequestPrivate(const DescribeApplicationSnapshotRequestPrivate &other,
                                   DescribeApplicationSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeApplicationSnapshotRequest)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
