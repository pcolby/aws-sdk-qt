// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELDEPLOYMENTJOBRESPONSE_P_H
#define QTAWS_CANCELDEPLOYMENTJOBRESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class CancelDeploymentJobResponse;

class CancelDeploymentJobResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit CancelDeploymentJobResponsePrivate(CancelDeploymentJobResponse * const q);

    void parseCancelDeploymentJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelDeploymentJobResponse)
    Q_DISABLE_COPY(CancelDeploymentJobResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
