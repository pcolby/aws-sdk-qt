// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHOSTRESERVATIONSREQUEST_P_H
#define QTAWS_DESCRIBEHOSTRESERVATIONSREQUEST_P_H

#include "ec2request_p.h"
#include "describehostreservationsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeHostReservationsRequest;

class DescribeHostReservationsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeHostReservationsRequestPrivate(const Ec2Request::Action action,
                                   DescribeHostReservationsRequest * const q);
    DescribeHostReservationsRequestPrivate(const DescribeHostReservationsRequestPrivate &other,
                                   DescribeHostReservationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeHostReservationsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
