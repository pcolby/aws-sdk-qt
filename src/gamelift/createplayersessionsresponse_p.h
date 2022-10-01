// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPLAYERSESSIONSRESPONSE_P_H
#define QTAWS_CREATEPLAYERSESSIONSRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class CreatePlayerSessionsResponse;

class CreatePlayerSessionsResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit CreatePlayerSessionsResponsePrivate(CreatePlayerSessionsResponse * const q);

    void parseCreatePlayerSessionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePlayerSessionsResponse)
    Q_DISABLE_COPY(CreatePlayerSessionsResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
