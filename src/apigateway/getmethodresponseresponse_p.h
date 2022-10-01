// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMETHODRESPONSERESPONSE_P_H
#define QTAWS_GETMETHODRESPONSERESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class GetMethodResponseResponse;

class GetMethodResponseResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit GetMethodResponseResponsePrivate(GetMethodResponseResponse * const q);

    void parseGetMethodResponseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMethodResponseResponse)
    Q_DISABLE_COPY(GetMethodResponseResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
