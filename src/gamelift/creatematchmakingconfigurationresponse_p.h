// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMATCHMAKINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_CREATEMATCHMAKINGCONFIGURATIONRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class CreateMatchmakingConfigurationResponse;

class CreateMatchmakingConfigurationResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit CreateMatchmakingConfigurationResponsePrivate(CreateMatchmakingConfigurationResponse * const q);

    void parseCreateMatchmakingConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateMatchmakingConfigurationResponse)
    Q_DISABLE_COPY(CreateMatchmakingConfigurationResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
