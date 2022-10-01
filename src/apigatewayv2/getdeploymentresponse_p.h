// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEPLOYMENTRESPONSE_P_H
#define QTAWS_GETDEPLOYMENTRESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetDeploymentResponse;

class GetDeploymentResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit GetDeploymentResponsePrivate(GetDeploymentResponse * const q);

    void parseGetDeploymentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDeploymentResponse)
    Q_DISABLE_COPY(GetDeploymentResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
