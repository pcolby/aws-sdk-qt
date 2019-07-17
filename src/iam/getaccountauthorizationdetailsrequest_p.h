/*
    Copyright 2013-2019 Paul Colby

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

#ifndef QTAWS_GETACCOUNTAUTHORIZATIONDETAILSREQUEST_P_H
#define QTAWS_GETACCOUNTAUTHORIZATIONDETAILSREQUEST_P_H

#include "iamrequest_p.h"
#include "getaccountauthorizationdetailsrequest.h"

namespace QtAws {
namespace IAM {

class GetAccountAuthorizationDetailsRequest;

class QTAWS_EXPORT GetAccountAuthorizationDetailsRequestPrivate : public IamRequestPrivate {

public:
    GetAccountAuthorizationDetailsRequestPrivate(const IamRequest::Action action,
                                   GetAccountAuthorizationDetailsRequest * const q);
    GetAccountAuthorizationDetailsRequestPrivate(const GetAccountAuthorizationDetailsRequestPrivate &other,
                                   GetAccountAuthorizationDetailsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAccountAuthorizationDetailsRequest)

};

} // namespace IAM
} // namespace QtAws

#endif
