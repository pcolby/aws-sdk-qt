// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBPROXYENDPOINTSRESPONSE_P_H
#define QTAWS_DESCRIBEDBPROXYENDPOINTSRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class DescribeDBProxyEndpointsResponse;

class DescribeDBProxyEndpointsResponsePrivate : public RdsResponsePrivate {

public:

    explicit DescribeDBProxyEndpointsResponsePrivate(DescribeDBProxyEndpointsResponse * const q);

    void parseDescribeDBProxyEndpointsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDBProxyEndpointsResponse)
    Q_DISABLE_COPY(DescribeDBProxyEndpointsResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
