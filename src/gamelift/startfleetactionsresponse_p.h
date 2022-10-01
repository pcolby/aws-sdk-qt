// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTFLEETACTIONSRESPONSE_P_H
#define QTAWS_STARTFLEETACTIONSRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class StartFleetActionsResponse;

class StartFleetActionsResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit StartFleetActionsResponsePrivate(StartFleetActionsResponse * const q);

    void parseStartFleetActionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartFleetActionsResponse)
    Q_DISABLE_COPY(StartFleetActionsResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
