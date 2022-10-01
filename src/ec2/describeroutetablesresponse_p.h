// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEROUTETABLESRESPONSE_P_H
#define QTAWS_DESCRIBEROUTETABLESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeRouteTablesResponse;

class DescribeRouteTablesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeRouteTablesResponsePrivate(DescribeRouteTablesResponse * const q);

    void parseDescribeRouteTablesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeRouteTablesResponse)
    Q_DISABLE_COPY(DescribeRouteTablesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
