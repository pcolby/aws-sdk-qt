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

#ifndef QTAWS_GETINTEGRATIONRESPONSEREQUEST_P_H
#define QTAWS_GETINTEGRATIONRESPONSEREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "getintegrationresponserequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetIntegrationResponseRequest;

class QTAWS_EXPORT GetIntegrationResponseRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    GetIntegrationResponseRequestPrivate(const ApiGatewayV2Request::Action action,
                                   GetIntegrationResponseRequest * const q);
    GetIntegrationResponseRequestPrivate(const GetIntegrationResponseRequestPrivate &other,
                                   GetIntegrationResponseRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetIntegrationResponseRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
