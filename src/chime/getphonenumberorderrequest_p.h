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

#ifndef QTAWS_GETPHONENUMBERORDERREQUEST_P_H
#define QTAWS_GETPHONENUMBERORDERREQUEST_P_H

#include "chimerequest_p.h"
#include "getphonenumberorderrequest.h"

namespace QtAws {
namespace Chime {

class GetPhoneNumberOrderRequest;

class GetPhoneNumberOrderRequestPrivate : public ChimeRequestPrivate {

public:
    GetPhoneNumberOrderRequestPrivate(const ChimeRequest::Action action,
                                   GetPhoneNumberOrderRequest * const q);
    GetPhoneNumberOrderRequestPrivate(const GetPhoneNumberOrderRequestPrivate &other,
                                   GetPhoneNumberOrderRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPhoneNumberOrderRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
