// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEPLOYMENTRESPONSE_P_H
#define QTAWS_UPDATEDEPLOYMENTRESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class UpdateDeploymentResponse;

class UpdateDeploymentResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit UpdateDeploymentResponsePrivate(UpdateDeploymentResponse * const q);

    void parseUpdateDeploymentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDeploymentResponse)
    Q_DISABLE_COPY(UpdateDeploymentResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
