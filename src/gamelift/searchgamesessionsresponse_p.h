// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHGAMESESSIONSRESPONSE_P_H
#define QTAWS_SEARCHGAMESESSIONSRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class SearchGameSessionsResponse;

class SearchGameSessionsResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit SearchGameSessionsResponsePrivate(SearchGameSessionsResponse * const q);

    void parseSearchGameSessionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchGameSessionsResponse)
    Q_DISABLE_COPY(SearchGameSessionsResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
