// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBCLUSTERSNAPSHOTSRESPONSE_P_H
#define QTAWS_DESCRIBEDBCLUSTERSNAPSHOTSRESPONSE_P_H

#include "neptuneresponse_p.h"

namespace QtAws {
namespace Neptune {

class DescribeDBClusterSnapshotsResponse;

class DescribeDBClusterSnapshotsResponsePrivate : public NeptuneResponsePrivate {

public:

    explicit DescribeDBClusterSnapshotsResponsePrivate(DescribeDBClusterSnapshotsResponse * const q);

    void parseDescribeDBClusterSnapshotsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDBClusterSnapshotsResponse)
    Q_DISABLE_COPY(DescribeDBClusterSnapshotsResponsePrivate)

};

} // namespace Neptune
} // namespace QtAws

#endif
