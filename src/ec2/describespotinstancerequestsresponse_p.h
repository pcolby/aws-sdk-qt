// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESPOTINSTANCEREQUESTSRESPONSE_P_H
#define QTAWS_DESCRIBESPOTINSTANCEREQUESTSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeSpotInstanceRequestsResponse;

class DescribeSpotInstanceRequestsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeSpotInstanceRequestsResponsePrivate(DescribeSpotInstanceRequestsResponse * const q);

    void parseDescribeSpotInstanceRequestsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSpotInstanceRequestsResponse)
    Q_DISABLE_COPY(DescribeSpotInstanceRequestsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
