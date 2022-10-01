// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APIGATEWAYV2RESPONSE_P_H
#define QTAWS_APIGATEWAYV2RESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class ApiGatewayV2Response;

class ApiGatewayV2ResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit ApiGatewayV2ResponsePrivate(ApiGatewayV2Response * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ApiGatewayV2Response)
    Q_DISABLE_COPY(ApiGatewayV2ResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
