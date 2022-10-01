// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPFLEETACTIONSRESPONSE_P_H
#define QTAWS_STOPFLEETACTIONSRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class StopFleetActionsResponse;

class StopFleetActionsResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit StopFleetActionsResponsePrivate(StopFleetActionsResponse * const q);

    void parseStopFleetActionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopFleetActionsResponse)
    Q_DISABLE_COPY(StopFleetActionsResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
