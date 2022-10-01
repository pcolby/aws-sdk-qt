// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGAMESESSIONQUEUERESPONSE_P_H
#define QTAWS_DELETEGAMESESSIONQUEUERESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class DeleteGameSessionQueueResponse;

class DeleteGameSessionQueueResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit DeleteGameSessionQueueResponsePrivate(DeleteGameSessionQueueResponse * const q);

    void parseDeleteGameSessionQueueResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteGameSessionQueueResponse)
    Q_DISABLE_COPY(DeleteGameSessionQueueResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
