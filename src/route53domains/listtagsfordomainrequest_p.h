// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSFORDOMAINREQUEST_P_H
#define QTAWS_LISTTAGSFORDOMAINREQUEST_P_H

#include "route53domainsrequest_p.h"
#include "listtagsfordomainrequest.h"

namespace QtAws {
namespace Route53Domains {

class ListTagsForDomainRequest;

class ListTagsForDomainRequestPrivate : public Route53DomainsRequestPrivate {

public:
    ListTagsForDomainRequestPrivate(const Route53DomainsRequest::Action action,
                                   ListTagsForDomainRequest * const q);
    ListTagsForDomainRequestPrivate(const ListTagsForDomainRequestPrivate &other,
                                   ListTagsForDomainRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTagsForDomainRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
