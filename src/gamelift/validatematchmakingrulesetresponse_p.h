// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VALIDATEMATCHMAKINGRULESETRESPONSE_P_H
#define QTAWS_VALIDATEMATCHMAKINGRULESETRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class ValidateMatchmakingRuleSetResponse;

class ValidateMatchmakingRuleSetResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit ValidateMatchmakingRuleSetResponsePrivate(ValidateMatchmakingRuleSetResponse * const q);

    void parseValidateMatchmakingRuleSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ValidateMatchmakingRuleSetResponse)
    Q_DISABLE_COPY(ValidateMatchmakingRuleSetResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
