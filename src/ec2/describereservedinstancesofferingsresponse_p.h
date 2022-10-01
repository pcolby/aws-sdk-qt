// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDINSTANCESOFFERINGSRESPONSE_P_H
#define QTAWS_DESCRIBERESERVEDINSTANCESOFFERINGSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeReservedInstancesOfferingsResponse;

class DescribeReservedInstancesOfferingsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeReservedInstancesOfferingsResponsePrivate(DescribeReservedInstancesOfferingsResponse * const q);

    void parseDescribeReservedInstancesOfferingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeReservedInstancesOfferingsResponse)
    Q_DISABLE_COPY(DescribeReservedInstancesOfferingsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
