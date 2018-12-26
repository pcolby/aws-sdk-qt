/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_APIGATEWAYV2CLIENT_P_H
#define QTAWS_APIGATEWAYV2CLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace ApiGatewayV2 {

class ApiGatewayV2Client;

class QTAWS_EXPORT ApiGatewayV2ClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    ApiGatewayV2ClientPrivate(ApiGatewayV2Client * const q);

private:
    Q_DECLARE_PUBLIC(ApiGatewayV2Client)
    Q_DISABLE_COPY(ApiGatewayV2ClientPrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
