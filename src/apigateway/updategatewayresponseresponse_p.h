// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGATEWAYRESPONSERESPONSE_P_H
#define QTAWS_UPDATEGATEWAYRESPONSERESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class UpdateGatewayResponseResponse;

class UpdateGatewayResponseResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit UpdateGatewayResponseResponsePrivate(UpdateGatewayResponseResponse * const q);

    void parseUpdateGatewayResponseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateGatewayResponseResponse)
    Q_DISABLE_COPY(UpdateGatewayResponseResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
