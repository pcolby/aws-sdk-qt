// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCAPACITYRESERVATIONUSAGEREQUEST_P_H
#define QTAWS_GETCAPACITYRESERVATIONUSAGEREQUEST_P_H

#include "ec2request_p.h"
#include "getcapacityreservationusagerequest.h"

namespace QtAws {
namespace Ec2 {

class GetCapacityReservationUsageRequest;

class GetCapacityReservationUsageRequestPrivate : public Ec2RequestPrivate {

public:
    GetCapacityReservationUsageRequestPrivate(const Ec2Request::Action action,
                                   GetCapacityReservationUsageRequest * const q);
    GetCapacityReservationUsageRequestPrivate(const GetCapacityReservationUsageRequestPrivate &other,
                                   GetCapacityReservationUsageRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCapacityReservationUsageRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
