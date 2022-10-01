// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGAMESESSIONRESPONSE_P_H
#define QTAWS_CREATEGAMESESSIONRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class CreateGameSessionResponse;

class CreateGameSessionResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit CreateGameSessionResponsePrivate(CreateGameSessionResponse * const q);

    void parseCreateGameSessionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateGameSessionResponse)
    Q_DISABLE_COPY(CreateGameSessionResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
