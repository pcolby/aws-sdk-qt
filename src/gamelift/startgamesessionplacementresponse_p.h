// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTGAMESESSIONPLACEMENTRESPONSE_P_H
#define QTAWS_STARTGAMESESSIONPLACEMENTRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class StartGameSessionPlacementResponse;

class StartGameSessionPlacementResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit StartGameSessionPlacementResponsePrivate(StartGameSessionPlacementResponse * const q);

    void parseStartGameSessionPlacementResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartGameSessionPlacementResponse)
    Q_DISABLE_COPY(StartGameSessionPlacementResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
