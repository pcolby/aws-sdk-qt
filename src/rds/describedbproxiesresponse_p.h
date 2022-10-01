// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBPROXIESRESPONSE_P_H
#define QTAWS_DESCRIBEDBPROXIESRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class DescribeDBProxiesResponse;

class DescribeDBProxiesResponsePrivate : public RdsResponsePrivate {

public:

    explicit DescribeDBProxiesResponsePrivate(DescribeDBProxiesResponse * const q);

    void parseDescribeDBProxiesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDBProxiesResponse)
    Q_DISABLE_COPY(DescribeDBProxiesResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
