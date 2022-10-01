// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHOSTRESERVATIONOFFERINGSRESPONSE_P_H
#define QTAWS_DESCRIBEHOSTRESERVATIONOFFERINGSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeHostReservationOfferingsResponse;

class DescribeHostReservationOfferingsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeHostReservationOfferingsResponsePrivate(DescribeHostReservationOfferingsResponse * const q);

    void parseDescribeHostReservationOfferingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeHostReservationOfferingsResponse)
    Q_DISABLE_COPY(DescribeHostReservationOfferingsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
