// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINDETAILREQUEST_P_H
#define QTAWS_GETDOMAINDETAILREQUEST_P_H

#include "route53domainsrequest_p.h"
#include "getdomaindetailrequest.h"

namespace QtAws {
namespace Route53Domains {

class GetDomainDetailRequest;

class GetDomainDetailRequestPrivate : public Route53DomainsRequestPrivate {

public:
    GetDomainDetailRequestPrivate(const Route53DomainsRequest::Action action,
                                   GetDomainDetailRequest * const q);
    GetDomainDetailRequestPrivate(const GetDomainDetailRequestPrivate &other,
                                   GetDomainDetailRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDomainDetailRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
