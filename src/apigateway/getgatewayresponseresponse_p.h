/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_GETGATEWAYRESPONSERESPONSE_P_H
#define QTAWS_GETGATEWAYRESPONSERESPONSE_P_H

#include "apigatewayresponse.h"
#include "getgatewayresponserequest.h"

namespace AWS {

namespace APIGateway {

class GetGatewayResponseResponse;

class QTAWS_EXPORT GetGatewayResponseResponsePrivate : public APIGatewayResponsePrivate {
    Q_OBJECT

public:

    GetGatewayResponseResponsePrivate(GetGatewayResponseResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetGatewayResponseResponse)
    Q_DISABLE_COPY(GetGatewayResponseResponsePrivate)

};

} // namespace APIGateway
} // namespace AWS

#endif
