// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINTEGRATIONRESPONSE_P_H
#define QTAWS_DELETEINTEGRATIONRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class DeleteIntegrationResponse;

class DeleteIntegrationResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit DeleteIntegrationResponsePrivate(DeleteIntegrationResponse * const q);

    void parseDeleteIntegrationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteIntegrationResponse)
    Q_DISABLE_COPY(DeleteIntegrationResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
