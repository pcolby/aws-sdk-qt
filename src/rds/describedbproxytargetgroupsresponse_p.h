// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBPROXYTARGETGROUPSRESPONSE_P_H
#define QTAWS_DESCRIBEDBPROXYTARGETGROUPSRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class DescribeDBProxyTargetGroupsResponse;

class DescribeDBProxyTargetGroupsResponsePrivate : public RdsResponsePrivate {

public:

    explicit DescribeDBProxyTargetGroupsResponsePrivate(DescribeDBProxyTargetGroupsResponse * const q);

    void parseDescribeDBProxyTargetGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDBProxyTargetGroupsResponse)
    Q_DISABLE_COPY(DescribeDBProxyTargetGroupsResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
