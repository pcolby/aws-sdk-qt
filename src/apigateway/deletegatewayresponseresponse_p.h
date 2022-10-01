// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGATEWAYRESPONSERESPONSE_P_H
#define QTAWS_DELETEGATEWAYRESPONSERESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class DeleteGatewayResponseResponse;

class DeleteGatewayResponseResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit DeleteGatewayResponseResponsePrivate(DeleteGatewayResponseResponse * const q);

    void parseDeleteGatewayResponseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteGatewayResponseResponse)
    Q_DISABLE_COPY(DeleteGatewayResponseResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
