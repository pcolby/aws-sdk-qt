// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERGAMESERVERRESPONSE_P_H
#define QTAWS_DEREGISTERGAMESERVERRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class DeregisterGameServerResponse;

class DeregisterGameServerResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit DeregisterGameServerResponsePrivate(DeregisterGameServerResponse * const q);

    void parseDeregisterGameServerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeregisterGameServerResponse)
    Q_DISABLE_COPY(DeregisterGameServerResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
