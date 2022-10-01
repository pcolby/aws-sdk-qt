// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELENVIRONMENTDEPLOYMENTRESPONSE_P_H
#define QTAWS_CANCELENVIRONMENTDEPLOYMENTRESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class CancelEnvironmentDeploymentResponse;

class CancelEnvironmentDeploymentResponsePrivate : public ProtonResponsePrivate {

public:

    explicit CancelEnvironmentDeploymentResponsePrivate(CancelEnvironmentDeploymentResponse * const q);

    void parseCancelEnvironmentDeploymentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelEnvironmentDeploymentResponse)
    Q_DISABLE_COPY(CancelEnvironmentDeploymentResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
