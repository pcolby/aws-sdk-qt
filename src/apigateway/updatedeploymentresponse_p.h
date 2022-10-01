// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEPLOYMENTRESPONSE_P_H
#define QTAWS_UPDATEDEPLOYMENTRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class UpdateDeploymentResponse;

class UpdateDeploymentResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit UpdateDeploymentResponsePrivate(UpdateDeploymentResponse * const q);

    void parseUpdateDeploymentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDeploymentResponse)
    Q_DISABLE_COPY(UpdateDeploymentResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
