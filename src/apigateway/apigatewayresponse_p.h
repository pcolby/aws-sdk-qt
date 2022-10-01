// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APIGATEWAYRESPONSE_P_H
#define QTAWS_APIGATEWAYRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class ApiGatewayResponse;

class ApiGatewayResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit ApiGatewayResponsePrivate(ApiGatewayResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ApiGatewayResponse)
    Q_DISABLE_COPY(ApiGatewayResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
