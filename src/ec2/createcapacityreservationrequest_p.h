// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECAPACITYRESERVATIONREQUEST_P_H
#define QTAWS_CREATECAPACITYRESERVATIONREQUEST_P_H

#include "ec2request_p.h"
#include "createcapacityreservationrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateCapacityReservationRequest;

class CreateCapacityReservationRequestPrivate : public Ec2RequestPrivate {

public:
    CreateCapacityReservationRequestPrivate(const Ec2Request::Action action,
                                   CreateCapacityReservationRequest * const q);
    CreateCapacityReservationRequestPrivate(const CreateCapacityReservationRequestPrivate &other,
                                   CreateCapacityReservationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCapacityReservationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
