// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPLAYERSESSIONRESPONSE_P_H
#define QTAWS_CREATEPLAYERSESSIONRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class CreatePlayerSessionResponse;

class CreatePlayerSessionResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit CreatePlayerSessionResponsePrivate(CreatePlayerSessionResponse * const q);

    void parseCreatePlayerSessionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePlayerSessionResponse)
    Q_DISABLE_COPY(CreatePlayerSessionResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
