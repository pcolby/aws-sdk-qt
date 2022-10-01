// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEPLOYMENTRESPONSE_P_H
#define QTAWS_DELETEDEPLOYMENTRESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteDeploymentResponse;

class DeleteDeploymentResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit DeleteDeploymentResponsePrivate(DeleteDeploymentResponse * const q);

    void parseDeleteDeploymentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDeploymentResponse)
    Q_DISABLE_COPY(DeleteDeploymentResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
