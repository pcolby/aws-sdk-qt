// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECAPACITYRESERVATIONFLEETREQUEST_P_H
#define QTAWS_CREATECAPACITYRESERVATIONFLEETREQUEST_P_H

#include "ec2request_p.h"
#include "createcapacityreservationfleetrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateCapacityReservationFleetRequest;

class CreateCapacityReservationFleetRequestPrivate : public Ec2RequestPrivate {

public:
    CreateCapacityReservationFleetRequestPrivate(const Ec2Request::Action action,
                                   CreateCapacityReservationFleetRequest * const q);
    CreateCapacityReservationFleetRequestPrivate(const CreateCapacityReservationFleetRequestPrivate &other,
                                   CreateCapacityReservationFleetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCapacityReservationFleetRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
