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

#ifndef QTAWS_GETDELEGATEDADMINACCOUNTREQUEST_P_H
#define QTAWS_GETDELEGATEDADMINACCOUNTREQUEST_P_H

#include "inspector2request_p.h"
#include "getdelegatedadminaccountrequest.h"

namespace QtAws {
namespace Inspector2 {

class GetDelegatedAdminAccountRequest;

class GetDelegatedAdminAccountRequestPrivate : public Inspector2RequestPrivate {

public:
    GetDelegatedAdminAccountRequestPrivate(const Inspector2Request::Action action,
                                   GetDelegatedAdminAccountRequest * const q);
    GetDelegatedAdminAccountRequestPrivate(const GetDelegatedAdminAccountRequestPrivate &other,
                                   GetDelegatedAdminAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDelegatedAdminAccountRequest)

};

} // namespace Inspector2
} // namespace QtAws

#endif
