// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBSNAPSHOTSRESPONSE_P_H
#define QTAWS_DESCRIBEDBSNAPSHOTSRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class DescribeDBSnapshotsResponse;

class DescribeDBSnapshotsResponsePrivate : public RdsResponsePrivate {

public:

    explicit DescribeDBSnapshotsResponsePrivate(DescribeDBSnapshotsResponse * const q);

    void parseDescribeDBSnapshotsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDBSnapshotsResponse)
    Q_DISABLE_COPY(DescribeDBSnapshotsResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
