// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHOSTRESERVATIONOFFERINGSREQUEST_P_H
#define QTAWS_DESCRIBEHOSTRESERVATIONOFFERINGSREQUEST_P_H

#include "ec2request_p.h"
#include "describehostreservationofferingsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeHostReservationOfferingsRequest;

class DescribeHostReservationOfferingsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeHostReservationOfferingsRequestPrivate(const Ec2Request::Action action,
                                   DescribeHostReservationOfferingsRequest * const q);
    DescribeHostReservationOfferingsRequestPrivate(const DescribeHostReservationOfferingsRequestPrivate &other,
                                   DescribeHostReservationOfferingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeHostReservationOfferingsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
