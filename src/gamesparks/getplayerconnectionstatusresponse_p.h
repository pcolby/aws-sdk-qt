// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPLAYERCONNECTIONSTATUSRESPONSE_P_H
#define QTAWS_GETPLAYERCONNECTIONSTATUSRESPONSE_P_H

#include "gamesparksresponse_p.h"

namespace QtAws {
namespace GameSparks {

class GetPlayerConnectionStatusResponse;

class GetPlayerConnectionStatusResponsePrivate : public GameSparksResponsePrivate {

public:

    explicit GetPlayerConnectionStatusResponsePrivate(GetPlayerConnectionStatusResponse * const q);

    void parseGetPlayerConnectionStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPlayerConnectionStatusResponse)
    Q_DISABLE_COPY(GetPlayerConnectionStatusResponsePrivate)

};

} // namespace GameSparks
} // namespace QtAws

#endif
