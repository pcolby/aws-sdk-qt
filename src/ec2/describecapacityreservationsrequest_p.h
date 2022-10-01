// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECAPACITYRESERVATIONSREQUEST_P_H
#define QTAWS_DESCRIBECAPACITYRESERVATIONSREQUEST_P_H

#include "ec2request_p.h"
#include "describecapacityreservationsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeCapacityReservationsRequest;

class DescribeCapacityReservationsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeCapacityReservationsRequestPrivate(const Ec2Request::Action action,
                                   DescribeCapacityReservationsRequest * const q);
    DescribeCapacityReservationsRequestPrivate(const DescribeCapacityReservationsRequestPrivate &other,
                                   DescribeCapacityReservationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCapacityReservationsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
