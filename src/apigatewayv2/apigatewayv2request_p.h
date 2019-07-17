/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_APIGATEWAYV2REQUEST_P_H
#define QTAWS_APIGATEWAYV2REQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class ApiGatewayV2Request;

class QTAWS_EXPORT ApiGatewayV2RequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

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
