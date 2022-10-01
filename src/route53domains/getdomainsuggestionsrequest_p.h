// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINSUGGESTIONSREQUEST_P_H
#define QTAWS_GETDOMAINSUGGESTIONSREQUEST_P_H

#include "route53domainsrequest_p.h"
#include "getdomainsuggestionsrequest.h"

namespace QtAws {
namespace Route53Domains {

class GetDomainSuggestionsRequest;

class GetDomainSuggestionsRequestPrivate : public Route53DomainsRequestPrivate {

public:
    GetDomainSuggestionsRequestPrivate(const Route53DomainsRequest::Action action,
                                   GetDomainSuggestionsRequest * const q);
    GetDomainSuggestionsRequestPrivate(const GetDomainSuggestionsRequestPrivate &other,
                                   GetDomainSuggestionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDomainSuggestionsRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
