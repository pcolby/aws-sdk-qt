// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESPOTFLEETINSTANCESRESPONSE_P_H
#define QTAWS_DESCRIBESPOTFLEETINSTANCESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeSpotFleetInstancesResponse;

class DescribeSpotFleetInstancesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeSpotFleetInstancesResponsePrivate(DescribeSpotFleetInstancesResponse * const q);

    void parseDescribeSpotFleetInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSpotFleetInstancesResponse)
    Q_DISABLE_COPY(DescribeSpotFleetInstancesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
