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

#ifndef QTAWS_DELETEDIRECTCONNECTGATEWAYRESPONSE_P_H
#define QTAWS_DELETEDIRECTCONNECTGATEWAYRESPONSE_P_H

#include "directconnectresponse.h"
#include "deletedirectconnectgatewayrequest.h"

namespace AWS {

namespace DirectConnect {

class DeleteDirectConnectGatewayResponse;

class QTAWS_EXPORT DeleteDirectConnectGatewayResponsePrivate : public DirectConnectResponsePrivate {
    Q_OBJECT

public:

    DeleteDirectConnectGatewayResponsePrivate(DeleteDirectConnectGatewayResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDirectConnectGatewayResponse)
    Q_DISABLE_COPY(DeleteDirectConnectGatewayResponsePrivate)

};

} // namespace DirectConnect
} // namespace AWS

#endif
