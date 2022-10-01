// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYINSTANCECAPACITYRESERVATIONATTRIBUTESREQUEST_P_H
#define QTAWS_MODIFYINSTANCECAPACITYRESERVATIONATTRIBUTESREQUEST_P_H

#include "ec2request_p.h"
#include "modifyinstancecapacityreservationattributesrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyInstanceCapacityReservationAttributesRequest;

class ModifyInstanceCapacityReservationAttributesRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyInstanceCapacityReservationAttributesRequestPrivate(const Ec2Request::Action action,
                                   ModifyInstanceCapacityReservationAttributesRequest * const q);
    ModifyInstanceCapacityReservationAttributesRequestPrivate(const ModifyInstanceCapacityReservationAttributesRequestPrivate &other,
                                   ModifyInstanceCapacityReservationAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyInstanceCapacityReservationAttributesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
