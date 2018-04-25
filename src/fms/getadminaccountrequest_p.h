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

#ifndef QTAWS_GETADMINACCOUNTREQUEST_P_H
#define QTAWS_GETADMINACCOUNTREQUEST_P_H

#include "fmsrequest_p.h"
#include "getadminaccountrequest.h"

namespace QtAws {
namespace FMS {

class GetAdminAccountRequest;

class QTAWS_EXPORT GetAdminAccountRequestPrivate : public FmsRequestPrivate {

public:
    GetAdminAccountRequestPrivate(const FmsRequest::Action action,
                                   GetAdminAccountRequest * const q);
    GetAdminAccountRequestPrivate(const GetAdminAccountRequestPrivate &other,
                                   GetAdminAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAdminAccountRequest)

};

} // namespace FMS
} // namespace QtAws

#endif
