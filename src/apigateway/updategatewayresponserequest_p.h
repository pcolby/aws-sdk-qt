/*
    Copyright 2013-2020 Paul Colby

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

#ifndef QTAWS_UPDATEGATEWAYRESPONSEREQUEST_P_H
#define QTAWS_UPDATEGATEWAYRESPONSEREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "updategatewayresponserequest.h"

namespace QtAws {
namespace APIGateway {

class UpdateGatewayResponseRequest;

class QTAWS_EXPORT UpdateGatewayResponseRequestPrivate : public APIGatewayRequestPrivate {

public:
    UpdateGatewayResponseRequestPrivate(const APIGatewayRequest::Action action,
                                   UpdateGatewayResponseRequest * const q);
    UpdateGatewayResponseRequestPrivate(const UpdateGatewayResponseRequestPrivate &other,
                                   UpdateGatewayResponseRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateGatewayResponseRequest)

};

} // namespace APIGateway
} // namespace QtAws

#endif
