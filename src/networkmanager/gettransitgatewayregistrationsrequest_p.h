/*
    Copyright 2013-2021 Paul Colby

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

#ifndef QTAWS_GETTRANSITGATEWAYREGISTRATIONSREQUEST_P_H
#define QTAWS_GETTRANSITGATEWAYREGISTRATIONSREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "gettransitgatewayregistrationsrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetTransitGatewayRegistrationsRequest;

class GetTransitGatewayRegistrationsRequestPrivate : public NetworkManagerRequestPrivate {

public:
    GetTransitGatewayRegistrationsRequestPrivate(const NetworkManagerRequest::Action action,
                                   GetTransitGatewayRegistrationsRequest * const q);
    GetTransitGatewayRegistrationsRequestPrivate(const GetTransitGatewayRegistrationsRequestPrivate &other,
                                   GetTransitGatewayRegistrationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTransitGatewayRegistrationsRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
