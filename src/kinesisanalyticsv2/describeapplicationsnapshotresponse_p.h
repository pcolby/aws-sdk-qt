// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPLICATIONSNAPSHOTRESPONSE_P_H
#define QTAWS_DESCRIBEAPPLICATIONSNAPSHOTRESPONSE_P_H

#include "kinesisanalyticsv2response_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class DescribeApplicationSnapshotResponse;

class DescribeApplicationSnapshotResponsePrivate : public KinesisAnalyticsV2ResponsePrivate {

public:

    explicit DescribeApplicationSnapshotResponsePrivate(DescribeApplicationSnapshotResponse * const q);

    void parseDescribeApplicationSnapshotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeApplicationSnapshotResponse)
    Q_DISABLE_COPY(DescribeApplicationSnapshotResponsePrivate)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
