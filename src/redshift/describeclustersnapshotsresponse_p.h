// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERSNAPSHOTSRESPONSE_P_H
#define QTAWS_DESCRIBECLUSTERSNAPSHOTSRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DescribeClusterSnapshotsResponse;

class DescribeClusterSnapshotsResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DescribeClusterSnapshotsResponsePrivate(DescribeClusterSnapshotsResponse * const q);

    void parseDescribeClusterSnapshotsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeClusterSnapshotsResponse)
    Q_DISABLE_COPY(DescribeClusterSnapshotsResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
