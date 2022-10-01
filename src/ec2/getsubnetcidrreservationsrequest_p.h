// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSUBNETCIDRRESERVATIONSREQUEST_P_H
#define QTAWS_GETSUBNETCIDRRESERVATIONSREQUEST_P_H

#include "ec2request_p.h"
#include "getsubnetcidrreservationsrequest.h"

namespace QtAws {
namespace Ec2 {

class GetSubnetCidrReservationsRequest;

class GetSubnetCidrReservationsRequestPrivate : public Ec2RequestPrivate {

public:
    GetSubnetCidrReservationsRequestPrivate(const Ec2Request::Action action,
                                   GetSubnetCidrReservationsRequest * const q);
    GetSubnetCidrReservationsRequestPrivate(const GetSubnetCidrReservationsRequestPrivate &other,
                                   GetSubnetCidrReservationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSubnetCidrReservationsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
