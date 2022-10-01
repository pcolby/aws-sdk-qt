// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEPLOYMENTRESPONSE_P_H
#define QTAWS_DELETEDEPLOYMENTRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class DeleteDeploymentResponse;

class DeleteDeploymentResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit DeleteDeploymentResponsePrivate(DeleteDeploymentResponse * const q);

    void parseDeleteDeploymentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDeploymentResponse)
    Q_DISABLE_COPY(DeleteDeploymentResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
