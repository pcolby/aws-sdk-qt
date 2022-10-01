// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLAIMGAMESERVERRESPONSE_P_H
#define QTAWS_CLAIMGAMESERVERRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class ClaimGameServerResponse;

class ClaimGameServerResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit ClaimGameServerResponsePrivate(ClaimGameServerResponse * const q);

    void parseClaimGameServerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ClaimGameServerResponse)
    Q_DISABLE_COPY(ClaimGameServerResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
