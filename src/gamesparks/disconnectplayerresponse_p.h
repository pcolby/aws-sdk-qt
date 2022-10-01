// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISCONNECTPLAYERRESPONSE_P_H
#define QTAWS_DISCONNECTPLAYERRESPONSE_P_H

#include "gamesparksresponse_p.h"

namespace QtAws {
namespace GameSparks {

class DisconnectPlayerResponse;

class DisconnectPlayerResponsePrivate : public GameSparksResponsePrivate {

public:

    explicit DisconnectPlayerResponsePrivate(DisconnectPlayerResponse * const q);

    void parseDisconnectPlayerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisconnectPlayerResponse)
    Q_DISABLE_COPY(DisconnectPlayerResponsePrivate)

};

} // namespace GameSparks
} // namespace QtAws

#endif
