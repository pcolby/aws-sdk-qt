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

#ifndef QTAWS_GETRESTAPIREQUEST_P_H
#define QTAWS_GETRESTAPIREQUEST_P_H

#include "apigateway_p.h"
#include "getrestapirequest.h"

namespace AWS {

namespace APIGateway {

class GetRestApiRequest;

class QTAWS_EXPORT GetRestApiRequestPrivate : public APIGatewayPrivate {

public:
    GetRestApiRequestPrivate(const APIGateway::Action action,
                                   GetRestApiRequest * const q);
    GetRestApiRequestPrivate(const GetRestApiRequestPrivate &other,
                                   GetRestApiRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRestApiRequest)

};

} // namespace APIGateway
} // namespace AWS

#endif
