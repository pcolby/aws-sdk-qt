// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELSERVICEINSTANCEDEPLOYMENTRESPONSE_P_H
#define QTAWS_CANCELSERVICEINSTANCEDEPLOYMENTRESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class CancelServiceInstanceDeploymentResponse;

class CancelServiceInstanceDeploymentResponsePrivate : public ProtonResponsePrivate {

public:

    explicit CancelServiceInstanceDeploymentResponsePrivate(CancelServiceInstanceDeploymentResponse * const q);

    void parseCancelServiceInstanceDeploymentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelServiceInstanceDeploymentResponse)
    Q_DISABLE_COPY(CancelServiceInstanceDeploymentResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
