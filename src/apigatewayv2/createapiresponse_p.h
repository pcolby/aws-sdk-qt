// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPIRESPONSE_P_H
#define QTAWS_CREATEAPIRESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class CreateApiResponse;

class CreateApiResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit CreateApiResponsePrivate(CreateApiResponse * const q);

    void parseCreateApiResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateApiResponse)
    Q_DISABLE_COPY(CreateApiResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
