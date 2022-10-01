// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGAMESRESPONSE_P_H
#define QTAWS_LISTGAMESRESPONSE_P_H

#include "gamesparksresponse_p.h"

namespace QtAws {
namespace GameSparks {

class ListGamesResponse;

class ListGamesResponsePrivate : public GameSparksResponsePrivate {

public:

    explicit ListGamesResponsePrivate(ListGamesResponse * const q);

    void parseListGamesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListGamesResponse)
    Q_DISABLE_COPY(ListGamesResponsePrivate)

};

} // namespace GameSparks
} // namespace QtAws

#endif
