// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBPROXYTARGETSRESPONSE_P_H
#define QTAWS_DESCRIBEDBPROXYTARGETSRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class DescribeDBProxyTargetsResponse;

class DescribeDBProxyTargetsResponsePrivate : public RdsResponsePrivate {

public:

    explicit DescribeDBProxyTargetsResponsePrivate(DescribeDBProxyTargetsResponse * const q);

    void parseDescribeDBProxyTargetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDBProxyTargetsResponse)
    Q_DISABLE_COPY(DescribeDBProxyTargetsResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
