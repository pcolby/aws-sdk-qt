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

#ifndef QTAWS_UPDATEGATEWAYSOFTWARENOWREQUEST_P_H
#define QTAWS_UPDATEGATEWAYSOFTWARENOWREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "updategatewaysoftwarenowrequest.h"

namespace QtAws {
namespace StorageGateway {

class UpdateGatewaySoftwareNowRequest;

class QTAWS_EXPORT UpdateGatewaySoftwareNowRequestPrivate : public StorageGatewayRequestPrivate {

public:
    UpdateGatewaySoftwareNowRequestPrivate(const StorageGatewayRequest::Action action,
                                   UpdateGatewaySoftwareNowRequest * const q);
    UpdateGatewaySoftwareNowRequestPrivate(const UpdateGatewaySoftwareNowRequestPrivate &other,
                                   UpdateGatewaySoftwareNowRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateGatewaySoftwareNowRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
