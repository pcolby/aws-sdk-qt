// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELCAPACITYRESERVATIONFLEETSREQUEST_P_H
#define QTAWS_CANCELCAPACITYRESERVATIONFLEETSREQUEST_P_H

#include "ec2request_p.h"
#include "cancelcapacityreservationfleetsrequest.h"

namespace QtAws {
namespace Ec2 {

class CancelCapacityReservationFleetsRequest;

class CancelCapacityReservationFleetsRequestPrivate : public Ec2RequestPrivate {

public:
    CancelCapacityReservationFleetsRequestPrivate(const Ec2Request::Action action,
                                   CancelCapacityReservationFleetsRequest * const q);
    CancelCapacityReservationFleetsRequestPrivate(const CancelCapacityReservationFleetsRequestPrivate &other,
                                   CancelCapacityReservationFleetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelCapacityReservationFleetsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
