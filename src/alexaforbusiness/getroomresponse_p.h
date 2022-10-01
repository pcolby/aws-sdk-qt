// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETROOMRESPONSE_P_H
#define QTAWS_GETROOMRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class GetRoomResponse;

class GetRoomResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit GetRoomResponsePrivate(GetRoomResponse * const q);

    void parseGetRoomResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRoomResponse)
    Q_DISABLE_COPY(GetRoomResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
