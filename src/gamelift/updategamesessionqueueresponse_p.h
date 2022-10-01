// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGAMESESSIONQUEUERESPONSE_P_H
#define QTAWS_UPDATEGAMESESSIONQUEUERESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class UpdateGameSessionQueueResponse;

class UpdateGameSessionQueueResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit UpdateGameSessionQueueResponsePrivate(UpdateGameSessionQueueResponse * const q);

    void parseUpdateGameSessionQueueResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateGameSessionQueueResponse)
    Q_DISABLE_COPY(UpdateGameSessionQueueResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
