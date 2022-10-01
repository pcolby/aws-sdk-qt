// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELCAPACITYRESERVATIONREQUEST_P_H
#define QTAWS_CANCELCAPACITYRESERVATIONREQUEST_P_H

#include "ec2request_p.h"
#include "cancelcapacityreservationrequest.h"

namespace QtAws {
namespace Ec2 {

class CancelCapacityReservationRequest;

class CancelCapacityReservationRequestPrivate : public Ec2RequestPrivate {

public:
    CancelCapacityReservationRequestPrivate(const Ec2Request::Action action,
                                   CancelCapacityReservationRequest * const q);
    CancelCapacityReservationRequestPrivate(const CancelCapacityReservationRequestPrivate &other,
                                   CancelCapacityReservationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelCapacityReservationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
