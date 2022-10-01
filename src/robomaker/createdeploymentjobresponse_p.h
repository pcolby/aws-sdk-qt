// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEPLOYMENTJOBRESPONSE_P_H
#define QTAWS_CREATEDEPLOYMENTJOBRESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class CreateDeploymentJobResponse;

class CreateDeploymentJobResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit CreateDeploymentJobResponsePrivate(CreateDeploymentJobResponse * const q);

    void parseCreateDeploymentJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDeploymentJobResponse)
    Q_DISABLE_COPY(CreateDeploymentJobResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
