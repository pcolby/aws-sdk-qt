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

#ifndef QTAWS_GETMETHODREQUEST_P_H
#define QTAWS_GETMETHODREQUEST_P_H

#include "apigateway_p.h"
#include "getmethodrequest.h"

namespace AWS {

namespace APIGateway {

class GetMethodRequest;

class QTAWS_EXPORT GetMethodRequestPrivate : public APIGatewayPrivate {

public:
    GetMethodRequestPrivate(const APIGateway::Action action,
                                   GetMethodRequest * const q);
    GetMethodRequestPrivate(const GetMethodRequestPrivate &other,
                                   GetMethodRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMethodRequest)

};

} // namespace APIGateway
} // namespace AWS

#endif
