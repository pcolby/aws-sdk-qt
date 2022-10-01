// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETAGSFORDOMAINREQUEST_P_H
#define QTAWS_DELETETAGSFORDOMAINREQUEST_P_H

#include "route53domainsrequest_p.h"
#include "deletetagsfordomainrequest.h"

namespace QtAws {
namespace Route53Domains {

class DeleteTagsForDomainRequest;

class DeleteTagsForDomainRequestPrivate : public Route53DomainsRequestPrivate {

public:
    DeleteTagsForDomainRequestPrivate(const Route53DomainsRequest::Action action,
                                   DeleteTagsForDomainRequest * const q);
    DeleteTagsForDomainRequestPrivate(const DeleteTagsForDomainRequestPrivate &other,
                                   DeleteTagsForDomainRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTagsForDomainRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
