// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGAMERESPONSE_P_H
#define QTAWS_GETGAMERESPONSE_P_H

#include "gamesparksresponse_p.h"

namespace QtAws {
namespace GameSparks {

class GetGameResponse;

class GetGameResponsePrivate : public GameSparksResponsePrivate {

public:

    explicit GetGameResponsePrivate(GetGameResponse * const q);

    void parseGetGameResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetGameResponse)
    Q_DISABLE_COPY(GetGameResponsePrivate)

};

} // namespace GameSparks
} // namespace QtAws

#endif
