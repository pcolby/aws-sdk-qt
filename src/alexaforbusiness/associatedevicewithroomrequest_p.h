// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEDEVICEWITHROOMREQUEST_P_H
#define QTAWS_ASSOCIATEDEVICEWITHROOMREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "associatedevicewithroomrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class AssociateDeviceWithRoomRequest;

class AssociateDeviceWithRoomRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    AssociateDeviceWithRoomRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   AssociateDeviceWithRoomRequest * const q);
    AssociateDeviceWithRoomRequestPrivate(const AssociateDeviceWithRoomRequestPrivate &other,
                                   AssociateDeviceWithRoomRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateDeviceWithRoomRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
