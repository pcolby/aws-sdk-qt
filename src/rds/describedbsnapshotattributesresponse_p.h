// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBSNAPSHOTATTRIBUTESRESPONSE_P_H
#define QTAWS_DESCRIBEDBSNAPSHOTATTRIBUTESRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class DescribeDBSnapshotAttributesResponse;

class DescribeDBSnapshotAttributesResponsePrivate : public RdsResponsePrivate {

public:

    explicit DescribeDBSnapshotAttributesResponsePrivate(DescribeDBSnapshotAttributesResponse * const q);

    void parseDescribeDBSnapshotAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDBSnapshotAttributesResponse)
    Q_DISABLE_COPY(DescribeDBSnapshotAttributesResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
