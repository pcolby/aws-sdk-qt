// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SYNCDEPLOYMENTJOBRESPONSE_P_H
#define QTAWS_SYNCDEPLOYMENTJOBRESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class SyncDeploymentJobResponse;

class SyncDeploymentJobResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit SyncDeploymentJobResponsePrivate(SyncDeploymentJobResponse * const q);

    void parseSyncDeploymentJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SyncDeploymentJobResponse)
    Q_DISABLE_COPY(SyncDeploymentJobResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
