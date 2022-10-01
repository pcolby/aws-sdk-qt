// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APIGATEWAYV2REQUEST_P_H
#define QTAWS_APIGATEWAYV2REQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class ApiGatewayV2Request;

class ApiGatewayV2RequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ApiGatewayV2Request::Action action; ///< ApiGatewayV2 action to be performed.
    QString apiVersion;        ///< ApiGatewayV2 API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ApiGatewayV2 request (query string) parameters. @todo?

    ApiGatewayV2RequestPrivate(const ApiGatewayV2Request::Action action, ApiGatewayV2Request * const q);
    ApiGatewayV2RequestPrivate(const ApiGatewayV2RequestPrivate &other, ApiGatewayV2Request * const q);

    static QString toString(const ApiGatewayV2Request::Action &action);

private:
    Q_DECLARE_PUBLIC(ApiGatewayV2Request)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
