// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEDEVICEFROMROOMRESPONSE_P_H
#define QTAWS_DISASSOCIATEDEVICEFROMROOMRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class DisassociateDeviceFromRoomResponse;

class DisassociateDeviceFromRoomResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit DisassociateDeviceFromRoomResponsePrivate(DisassociateDeviceFromRoomResponse * const q);

    void parseDisassociateDeviceFromRoomResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateDeviceFromRoomResponse)
    Q_DISABLE_COPY(DisassociateDeviceFromRoomResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
