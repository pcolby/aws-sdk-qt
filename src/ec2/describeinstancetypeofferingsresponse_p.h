// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCETYPEOFFERINGSRESPONSE_P_H
#define QTAWS_DESCRIBEINSTANCETYPEOFFERINGSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeInstanceTypeOfferingsResponse;

class DescribeInstanceTypeOfferingsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeInstanceTypeOfferingsResponsePrivate(DescribeInstanceTypeOfferingsResponse * const q);

    void parseDescribeInstanceTypeOfferingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeInstanceTypeOfferingsResponse)
    Q_DISABLE_COPY(DescribeInstanceTypeOfferingsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
