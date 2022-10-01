// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGAMESESSIONRESPONSE_P_H
#define QTAWS_UPDATEGAMESESSIONRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class UpdateGameSessionResponse;

class UpdateGameSessionResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit UpdateGameSessionResponsePrivate(UpdateGameSessionResponse * const q);

    void parseUpdateGameSessionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateGameSessionResponse)
    Q_DISABLE_COPY(UpdateGameSessionResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
