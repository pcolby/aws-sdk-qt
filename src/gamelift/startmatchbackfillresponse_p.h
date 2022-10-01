// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMATCHBACKFILLRESPONSE_P_H
#define QTAWS_STARTMATCHBACKFILLRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class StartMatchBackfillResponse;

class StartMatchBackfillResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit StartMatchBackfillResponsePrivate(StartMatchBackfillResponse * const q);

    void parseStartMatchBackfillResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartMatchBackfillResponse)
    Q_DISABLE_COPY(StartMatchBackfillResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
