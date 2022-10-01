// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEDEVICEWITHROOMRESPONSE_P_H
#define QTAWS_ASSOCIATEDEVICEWITHROOMRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class AssociateDeviceWithRoomResponse;

class AssociateDeviceWithRoomResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit AssociateDeviceWithRoomResponsePrivate(AssociateDeviceWithRoomResponse * const q);

    void parseAssociateDeviceWithRoomResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateDeviceWithRoomResponse)
    Q_DISABLE_COPY(AssociateDeviceWithRoomResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
