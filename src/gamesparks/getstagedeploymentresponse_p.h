// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTAGEDEPLOYMENTRESPONSE_P_H
#define QTAWS_GETSTAGEDEPLOYMENTRESPONSE_P_H

#include "gamesparksresponse_p.h"

namespace QtAws {
namespace GameSparks {

class GetStageDeploymentResponse;

class GetStageDeploymentResponsePrivate : public GameSparksResponsePrivate {

public:

    explicit GetStageDeploymentResponsePrivate(GetStageDeploymentResponse * const q);

    void parseGetStageDeploymentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetStageDeploymentResponse)
    Q_DISABLE_COPY(GetStageDeploymentResponsePrivate)

};

} // namespace GameSparks
} // namespace QtAws

#endif
