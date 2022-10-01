// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOMAINREQUEST_P_H
#define QTAWS_DELETEDOMAINREQUEST_P_H

#include "route53domainsrequest_p.h"
#include "deletedomainrequest.h"

namespace QtAws {
namespace Route53Domains {

class DeleteDomainRequest;

class DeleteDomainRequestPrivate : public Route53DomainsRequestPrivate {

public:
    DeleteDomainRequestPrivate(const Route53DomainsRequest::Action action,
                                   DeleteDomainRequest * const q);
    DeleteDomainRequestPrivate(const DeleteDomainRequestPrivate &other,
                                   DeleteDomainRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDomainRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
