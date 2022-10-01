// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGROUPSFORCAPACITYRESERVATIONREQUEST_P_H
#define QTAWS_GETGROUPSFORCAPACITYRESERVATIONREQUEST_P_H

#include "ec2request_p.h"
#include "getgroupsforcapacityreservationrequest.h"

namespace QtAws {
namespace Ec2 {

class GetGroupsForCapacityReservationRequest;

class GetGroupsForCapacityReservationRequestPrivate : public Ec2RequestPrivate {

public:
    GetGroupsForCapacityReservationRequestPrivate(const Ec2Request::Action action,
                                   GetGroupsForCapacityReservationRequest * const q);
    GetGroupsForCapacityReservationRequestPrivate(const GetGroupsForCapacityReservationRequestPrivate &other,
                                   GetGroupsForCapacityReservationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetGroupsForCapacityReservationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
