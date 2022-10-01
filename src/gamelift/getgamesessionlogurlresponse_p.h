// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGAMESESSIONLOGURLRESPONSE_P_H
#define QTAWS_GETGAMESESSIONLOGURLRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class GetGameSessionLogUrlResponse;

class GetGameSessionLogUrlResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit GetGameSessionLogUrlResponsePrivate(GetGameSessionLogUrlResponse * const q);

    void parseGetGameSessionLogUrlResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetGameSessionLogUrlResponse)
    Q_DISABLE_COPY(GetGameSessionLogUrlResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
