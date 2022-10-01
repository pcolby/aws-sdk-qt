// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSTAGEDEPLOYMENTRESPONSE_P_H
#define QTAWS_STARTSTAGEDEPLOYMENTRESPONSE_P_H

#include "gamesparksresponse_p.h"

namespace QtAws {
namespace GameSparks {

class StartStageDeploymentResponse;

class StartStageDeploymentResponsePrivate : public GameSparksResponsePrivate {

public:

    explicit StartStageDeploymentResponsePrivate(StartStageDeploymentResponse * const q);

    void parseStartStageDeploymentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartStageDeploymentResponse)
    Q_DISABLE_COPY(StartStageDeploymentResponsePrivate)

};

} // namespace GameSparks
} // namespace QtAws

#endif
