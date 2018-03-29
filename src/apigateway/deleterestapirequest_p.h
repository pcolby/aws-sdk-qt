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

#ifndef QTAWS_DELETERESTAPIREQUEST_P_H
#define QTAWS_DELETERESTAPIREQUEST_P_H

#include "apigateway_p.h"
#include "deleterestapirequest.h"

namespace AWS {

namespace APIGateway {

class DeleteRestApiRequest;

class QTAWS_EXPORT DeleteRestApiRequestPrivate : public APIGatewayPrivate {

public:
    DeleteRestApiRequestPrivate(const APIGateway::Action action,
                                   DeleteRestApiRequest * const q);
    DeleteRestApiRequestPrivate(const DeleteRestApiRequestPrivate &other,
                                   DeleteRestApiRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRestApiRequest)

};

} // namespace APIGateway
} // namespace AWS

#endif
