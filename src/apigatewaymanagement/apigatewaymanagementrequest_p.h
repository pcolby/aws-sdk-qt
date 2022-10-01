// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APIGATEWAYMANAGEMENTREQUEST_P_H
#define QTAWS_APIGATEWAYMANAGEMENTREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "apigatewaymanagementrequest.h"

namespace QtAws {
namespace ApiGatewayManagement {

class ApiGatewayManagementRequest;

class ApiGatewayManagementRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ApiGatewayManagementRequest::Action action; ///< ApiGatewayManagement action to be performed.
    QString apiVersion;        ///< ApiGatewayManagement API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ApiGatewayManagement request (query string) parameters. @todo?

    ApiGatewayManagementRequestPrivate(const ApiGatewayManagementRequest::Action action, ApiGatewayManagementRequest * const q);
    ApiGatewayManagementRequestPrivate(const ApiGatewayManagementRequestPrivate &other, ApiGatewayManagementRequest * const q);

    static QString toString(const ApiGatewayManagementRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ApiGatewayManagementRequest)

};

} // namespace ApiGatewayManagement
} // namespace QtAws

#endif
