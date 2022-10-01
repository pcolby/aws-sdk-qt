// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMATCHMAKINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETEMATCHMAKINGCONFIGURATIONRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class DeleteMatchmakingConfigurationResponse;

class DeleteMatchmakingConfigurationResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit DeleteMatchmakingConfigurationResponsePrivate(DeleteMatchmakingConfigurationResponse * const q);

    void parseDeleteMatchmakingConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteMatchmakingConfigurationResponse)
    Q_DISABLE_COPY(DeleteMatchmakingConfigurationResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
