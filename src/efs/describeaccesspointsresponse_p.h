// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCESSPOINTSRESPONSE_P_H
#define QTAWS_DESCRIBEACCESSPOINTSRESPONSE_P_H

#include "efsresponse_p.h"

namespace QtAws {
namespace Efs {

class DescribeAccessPointsResponse;

class DescribeAccessPointsResponsePrivate : public EfsResponsePrivate {

public:

    explicit DescribeAccessPointsResponsePrivate(DescribeAccessPointsResponse * const q);

    void parseDescribeAccessPointsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAccessPointsResponse)
    Q_DISABLE_COPY(DescribeAccessPointsResponsePrivate)

};

} // namespace Efs
} // namespace QtAws

#endif
