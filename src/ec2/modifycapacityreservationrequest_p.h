// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCAPACITYRESERVATIONREQUEST_P_H
#define QTAWS_MODIFYCAPACITYRESERVATIONREQUEST_P_H

#include "ec2request_p.h"
#include "modifycapacityreservationrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyCapacityReservationRequest;

class ModifyCapacityReservationRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyCapacityReservationRequestPrivate(const Ec2Request::Action action,
                                   ModifyCapacityReservationRequest * const q);
    ModifyCapacityReservationRequestPrivate(const ModifyCapacityReservationRequestPrivate &other,
                                   ModifyCapacityReservationRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyCapacityReservationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
