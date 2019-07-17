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

#ifndef QTAWS_GETDEPLOYMENTSRESPONSE_P_H
#define QTAWS_GETDEPLOYMENTSRESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetDeploymentsResponse;

class QTAWS_EXPORT GetDeploymentsResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    GetDeploymentsResponsePrivate(GetDeploymentsResponse * const q);

    void parseGetDeploymentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDeploymentsResponse)
    Q_DISABLE_COPY(GetDeploymentsResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
