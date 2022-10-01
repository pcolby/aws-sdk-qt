// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMATCHMAKINGRESPONSE_P_H
#define QTAWS_STARTMATCHMAKINGRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class StartMatchmakingResponse;

class StartMatchmakingResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit StartMatchmakingResponsePrivate(StartMatchmakingResponse * const q);

    void parseStartMatchmakingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartMatchmakingResponse)
    Q_DISABLE_COPY(StartMatchmakingResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
