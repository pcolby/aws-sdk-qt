// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETINSTANCESRESPONSE_P_H
#define QTAWS_DESCRIBEFLEETINSTANCESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeFleetInstancesResponse;

class DescribeFleetInstancesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeFleetInstancesResponsePrivate(DescribeFleetInstancesResponse * const q);

    void parseDescribeFleetInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFleetInstancesResponse)
    Q_DISABLE_COPY(DescribeFleetInstancesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
