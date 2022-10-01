// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGAMESERVERRESPONSE_P_H
#define QTAWS_UPDATEGAMESERVERRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class UpdateGameServerResponse;

class UpdateGameServerResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit UpdateGameServerResponsePrivate(UpdateGameServerResponse * const q);

    void parseUpdateGameServerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateGameServerResponse)
    Q_DISABLE_COPY(UpdateGameServerResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
