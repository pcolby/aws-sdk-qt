// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECAPACITYRESERVATIONFLEETSRESPONSE_P_H
#define QTAWS_DESCRIBECAPACITYRESERVATIONFLEETSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeCapacityReservationFleetsResponse;

class DescribeCapacityReservationFleetsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeCapacityReservationFleetsResponsePrivate(DescribeCapacityReservationFleetsResponse * const q);

    void parseDescribeCapacityReservationFleetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeCapacityReservationFleetsResponse)
    Q_DISABLE_COPY(DescribeCapacityReservationFleetsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
