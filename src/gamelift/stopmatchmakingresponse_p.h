// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPMATCHMAKINGRESPONSE_P_H
#define QTAWS_STOPMATCHMAKINGRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class StopMatchmakingResponse;

class StopMatchmakingResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit StopMatchmakingResponsePrivate(StopMatchmakingResponse * const q);

    void parseStopMatchmakingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopMatchmakingResponse)
    Q_DISABLE_COPY(StopMatchmakingResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
