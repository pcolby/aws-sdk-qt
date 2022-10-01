// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBCLUSTERSNAPSHOTATTRIBUTESRESPONSE_P_H
#define QTAWS_DESCRIBEDBCLUSTERSNAPSHOTATTRIBUTESRESPONSE_P_H

#include "neptuneresponse_p.h"

namespace QtAws {
namespace Neptune {

class DescribeDBClusterSnapshotAttributesResponse;

class DescribeDBClusterSnapshotAttributesResponsePrivate : public NeptuneResponsePrivate {

public:

    explicit DescribeDBClusterSnapshotAttributesResponsePrivate(DescribeDBClusterSnapshotAttributesResponse * const q);

    void parseDescribeDBClusterSnapshotAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDBClusterSnapshotAttributesResponse)
    Q_DISABLE_COPY(DescribeDBClusterSnapshotAttributesResponsePrivate)

};

} // namespace Neptune
} // namespace QtAws

#endif
