// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPGAMESESSIONPLACEMENTRESPONSE_P_H
#define QTAWS_STOPGAMESESSIONPLACEMENTRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class StopGameSessionPlacementResponse;

class StopGameSessionPlacementResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit StopGameSessionPlacementResponsePrivate(StopGameSessionPlacementResponse * const q);

    void parseStopGameSessionPlacementResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopGameSessionPlacementResponse)
    Q_DISABLE_COPY(StopGameSessionPlacementResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
