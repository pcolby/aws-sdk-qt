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

#ifndef QTAWS_LISTIDENTITYPOLICIESREQUEST_P_H
#define QTAWS_LISTIDENTITYPOLICIESREQUEST_P_H

#include "sesrequest_p.h"
#include "listidentitypoliciesrequest.h"

namespace QtAws {
namespace SES {

class ListIdentityPoliciesRequest;

class ListIdentityPoliciesRequestPrivate : public SesRequestPrivate {

public:
    ListIdentityPoliciesRequestPrivate(const SesRequest::Action action,
                                   ListIdentityPoliciesRequest * const q);
    ListIdentityPoliciesRequestPrivate(const ListIdentityPoliciesRequestPrivate &other,
                                   ListIdentityPoliciesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListIdentityPoliciesRequest)

};

} // namespace SES
} // namespace QtAws

#endif
