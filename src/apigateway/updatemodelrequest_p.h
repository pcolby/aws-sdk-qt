/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_UPDATEMODELREQUEST_P_H
#define QTAWS_UPDATEMODELREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "updatemodelrequest.h"

namespace QtAws {
namespace APIGateway {

class UpdateModelRequest;

class QTAWS_EXPORT UpdateModelRequestPrivate : public APIGatewayRequestPrivate {

public:
    UpdateModelRequestPrivate(const APIGatewayRequest::Action action,
                                   UpdateModelRequest * const q);
    UpdateModelRequestPrivate(const UpdateModelRequestPrivate &other,
                                   UpdateModelRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateModelRequest)

};

} // namespace APIGateway
} // namespace QtAws

#endif
