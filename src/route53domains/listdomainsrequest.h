// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOMAINSREQUEST_H
#define QTAWS_LISTDOMAINSREQUEST_H

#include "route53domainsrequest.h"

namespace QtAws {
namespace Route53Domains {

class ListDomainsRequestPrivate;

class QTAWSROUTE53DOMAINS_EXPORT ListDomainsRequest : public Route53DomainsRequest {

public:
    ListDomainsRequest(const ListDomainsRequest &other);
    ListDomainsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDomainsRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
