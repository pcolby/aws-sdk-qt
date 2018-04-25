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

#ifndef QTAWS_GETCONTACTREACHABILITYSTATUSREQUEST_P_H
#define QTAWS_GETCONTACTREACHABILITYSTATUSREQUEST_P_H

#include "route53domainsrequest_p.h"
#include "getcontactreachabilitystatusrequest.h"

namespace QtAws {
namespace Route53Domains {

class GetContactReachabilityStatusRequest;

class QTAWS_EXPORT GetContactReachabilityStatusRequestPrivate : public Route53DomainsRequestPrivate {

public:
    GetContactReachabilityStatusRequestPrivate(const Route53DomainsRequest::Action action,
                                   GetContactReachabilityStatusRequest * const q);
    GetContactReachabilityStatusRequestPrivate(const GetContactReachabilityStatusRequestPrivate &other,
                                   GetContactReachabilityStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetContactReachabilityStatusRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
