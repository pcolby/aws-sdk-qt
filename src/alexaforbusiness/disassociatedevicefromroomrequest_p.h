// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEDEVICEFROMROOMREQUEST_P_H
#define QTAWS_DISASSOCIATEDEVICEFROMROOMREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "disassociatedevicefromroomrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class DisassociateDeviceFromRoomRequest;

class DisassociateDeviceFromRoomRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    DisassociateDeviceFromRoomRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   DisassociateDeviceFromRoomRequest * const q);
    DisassociateDeviceFromRoomRequestPrivate(const DisassociateDeviceFromRoomRequestPrivate &other,
                                   DisassociateDeviceFromRoomRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateDeviceFromRoomRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
