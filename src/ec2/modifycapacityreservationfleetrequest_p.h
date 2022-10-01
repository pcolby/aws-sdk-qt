// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCAPACITYRESERVATIONFLEETREQUEST_P_H
#define QTAWS_MODIFYCAPACITYRESERVATIONFLEETREQUEST_P_H

#include "ec2request_p.h"
#include "modifycapacityreservationfleetrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyCapacityReservationFleetRequest;

class ModifyCapacityReservationFleetRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyCapacityReservationFleetRequestPrivate(const Ec2Request::Action action,
                                   ModifyCapacityReservationFleetRequest * const q);
    ModifyCapacityReservationFleetRequestPrivate(const ModifyCapacityReservationFleetRequestPrivate &other,
                                   ModifyCapacityReservationFleetRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyCapacityReservationFleetRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
