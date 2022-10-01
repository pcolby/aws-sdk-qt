// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGAMERESPONSE_P_H
#define QTAWS_UPDATEGAMERESPONSE_P_H

#include "gamesparksresponse_p.h"

namespace QtAws {
namespace GameSparks {

class UpdateGameResponse;

class UpdateGameResponsePrivate : public GameSparksResponsePrivate {

public:

    explicit UpdateGameResponsePrivate(UpdateGameResponse * const q);

    void parseUpdateGameResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateGameResponse)
    Q_DISABLE_COPY(UpdateGameResponsePrivate)

};

} // namespace GameSparks
} // namespace QtAws

#endif
