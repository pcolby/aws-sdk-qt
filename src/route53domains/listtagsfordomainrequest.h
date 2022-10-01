// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSFORDOMAINREQUEST_H
#define QTAWS_LISTTAGSFORDOMAINREQUEST_H

#include "route53domainsrequest.h"

namespace QtAws {
namespace Route53Domains {

class ListTagsForDomainRequestPrivate;

class QTAWSROUTE53DOMAINS_EXPORT ListTagsForDomainRequest : public Route53DomainsRequest {

public:
    ListTagsForDomainRequest(const ListTagsForDomainRequest &other);
    ListTagsForDomainRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTagsForDomainRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
