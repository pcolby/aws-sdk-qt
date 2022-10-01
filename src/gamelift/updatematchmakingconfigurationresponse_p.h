// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMATCHMAKINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_UPDATEMATCHMAKINGCONFIGURATIONRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class UpdateMatchmakingConfigurationResponse;

class UpdateMatchmakingConfigurationResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit UpdateMatchmakingConfigurationResponsePrivate(UpdateMatchmakingConfigurationResponse * const q);

    void parseUpdateMatchmakingConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateMatchmakingConfigurationResponse)
    Q_DISABLE_COPY(UpdateMatchmakingConfigurationResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
