// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBCLUSTERSNAPSHOTSRESPONSE_P_H
#define QTAWS_DESCRIBEDBCLUSTERSNAPSHOTSRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class DescribeDBClusterSnapshotsResponse;

class DescribeDBClusterSnapshotsResponsePrivate : public RdsResponsePrivate {

public:

    explicit DescribeDBClusterSnapshotsResponsePrivate(DescribeDBClusterSnapshotsResponse * const q);

    void parseDescribeDBClusterSnapshotsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDBClusterSnapshotsResponse)
    Q_DISABLE_COPY(DescribeDBClusterSnapshotsResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
