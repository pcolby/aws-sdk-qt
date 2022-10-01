// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APIGATEWAYREQUEST_P_H
#define QTAWS_APIGATEWAYREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class ApiGatewayRequest;

class ApiGatewayRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ApiGatewayRequest::Action action; ///< ApiGateway action to be performed.
    QString apiVersion;        ///< ApiGateway API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ApiGateway request (query string) parameters. @todo?

    ApiGatewayRequestPrivate(const ApiGatewayRequest::Action action, ApiGatewayRequest * const q);
    ApiGatewayRequestPrivate(const ApiGatewayRequestPrivate &other, ApiGatewayRequest * const q);

    static QString toString(const ApiGatewayRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ApiGatewayRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
