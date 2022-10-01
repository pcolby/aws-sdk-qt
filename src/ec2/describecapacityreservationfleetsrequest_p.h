// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECAPACITYRESERVATIONFLEETSREQUEST_P_H
#define QTAWS_DESCRIBECAPACITYRESERVATIONFLEETSREQUEST_P_H

#include "ec2request_p.h"
#include "describecapacityreservationfleetsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeCapacityReservationFleetsRequest;

class DescribeCapacityReservationFleetsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeCapacityReservationFleetsRequestPrivate(const Ec2Request::Action action,
                                   DescribeCapacityReservationFleetsRequest * const q);
    DescribeCapacityReservationFleetsRequestPrivate(const DescribeCapacityReservationFleetsRequestPrivate &other,
                                   DescribeCapacityReservationFleetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCapacityReservationFleetsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
