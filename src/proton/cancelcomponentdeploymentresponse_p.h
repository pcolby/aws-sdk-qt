// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELCOMPONENTDEPLOYMENTRESPONSE_P_H
#define QTAWS_CANCELCOMPONENTDEPLOYMENTRESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class CancelComponentDeploymentResponse;

class CancelComponentDeploymentResponsePrivate : public ProtonResponsePrivate {

public:

    explicit CancelComponentDeploymentResponsePrivate(CancelComponentDeploymentResponse * const q);

    void parseCancelComponentDeploymentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelComponentDeploymentResponse)
    Q_DISABLE_COPY(CancelComponentDeploymentResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
