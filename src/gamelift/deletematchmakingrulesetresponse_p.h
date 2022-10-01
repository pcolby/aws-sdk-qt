// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMATCHMAKINGRULESETRESPONSE_P_H
#define QTAWS_DELETEMATCHMAKINGRULESETRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class DeleteMatchmakingRuleSetResponse;

class DeleteMatchmakingRuleSetResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit DeleteMatchmakingRuleSetResponsePrivate(DeleteMatchmakingRuleSetResponse * const q);

    void parseDeleteMatchmakingRuleSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteMatchmakingRuleSetResponse)
    Q_DISABLE_COPY(DeleteMatchmakingRuleSetResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
