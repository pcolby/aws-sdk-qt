// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APIGATEWAYV2CLIENT_P_H
#define QTAWS_APIGATEWAYV2CLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace ApiGatewayV2 {

class ApiGatewayV2Client;

class ApiGatewayV2ClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit ApiGatewayV2ClientPrivate(ApiGatewayV2Client * const q);

private:
    Q_DECLARE_PUBLIC(ApiGatewayV2Client)
    Q_DISABLE_COPY(ApiGatewayV2ClientPrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
