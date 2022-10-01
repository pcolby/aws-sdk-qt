// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTACTREACHABILITYSTATUSREQUEST_P_H
#define QTAWS_GETCONTACTREACHABILITYSTATUSREQUEST_P_H

#include "route53domainsrequest_p.h"
#include "getcontactreachabilitystatusrequest.h"

namespace QtAws {
namespace Route53Domains {

class GetContactReachabilityStatusRequest;

class GetContactReachabilityStatusRequestPrivate : public Route53DomainsRequestPrivate {

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
