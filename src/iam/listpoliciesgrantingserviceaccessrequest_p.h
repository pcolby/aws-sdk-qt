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

#ifndef QTAWS_LISTPOLICIESGRANTINGSERVICEACCESSREQUEST_P_H
#define QTAWS_LISTPOLICIESGRANTINGSERVICEACCESSREQUEST_P_H

#include "iamrequest_p.h"
#include "listpoliciesgrantingserviceaccessrequest.h"

namespace QtAws {
namespace IAM {

class ListPoliciesGrantingServiceAccessRequest;

class QTAWS_EXPORT ListPoliciesGrantingServiceAccessRequestPrivate : public IamRequestPrivate {

public:
    ListPoliciesGrantingServiceAccessRequestPrivate(const IamRequest::Action action,
                                   ListPoliciesGrantingServiceAccessRequest * const q);
    ListPoliciesGrantingServiceAccessRequestPrivate(const ListPoliciesGrantingServiceAccessRequestPrivate &other,
                                   ListPoliciesGrantingServiceAccessRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPoliciesGrantingServiceAccessRequest)

};

} // namespace IAM
} // namespace QtAws

#endif
