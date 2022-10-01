// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESPOTFLEETREQUESTSRESPONSE_P_H
#define QTAWS_DESCRIBESPOTFLEETREQUESTSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeSpotFleetRequestsResponse;

class DescribeSpotFleetRequestsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeSpotFleetRequestsResponsePrivate(DescribeSpotFleetRequestsResponse * const q);

    void parseDescribeSpotFleetRequestsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSpotFleetRequestsResponse)
    Q_DISABLE_COPY(DescribeSpotFleetRequestsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
