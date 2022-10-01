// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGAMERESPONSE_P_H
#define QTAWS_CREATEGAMERESPONSE_P_H

#include "gamesparksresponse_p.h"

namespace QtAws {
namespace GameSparks {

class CreateGameResponse;

class CreateGameResponsePrivate : public GameSparksResponsePrivate {

public:

    explicit CreateGameResponsePrivate(CreateGameResponse * const q);

    void parseCreateGameResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateGameResponse)
    Q_DISABLE_COPY(CreateGameResponsePrivate)

};

} // namespace GameSparks
} // namespace QtAws

#endif
