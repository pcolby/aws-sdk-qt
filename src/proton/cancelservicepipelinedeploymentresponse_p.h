// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELSERVICEPIPELINEDEPLOYMENTRESPONSE_P_H
#define QTAWS_CANCELSERVICEPIPELINEDEPLOYMENTRESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class CancelServicePipelineDeploymentResponse;

class CancelServicePipelineDeploymentResponsePrivate : public ProtonResponsePrivate {

public:

    explicit CancelServicePipelineDeploymentResponsePrivate(CancelServicePipelineDeploymentResponse * const q);

    void parseCancelServicePipelineDeploymentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelServicePipelineDeploymentResponse)
    Q_DISABLE_COPY(CancelServicePipelineDeploymentResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
