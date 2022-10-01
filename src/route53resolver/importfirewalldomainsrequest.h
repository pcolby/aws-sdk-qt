// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTFIREWALLDOMAINSREQUEST_H
#define QTAWS_IMPORTFIREWALLDOMAINSREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class ImportFirewallDomainsRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT ImportFirewallDomainsRequest : public Route53ResolverRequest {

public:
    ImportFirewallDomainsRequest(const ImportFirewallDomainsRequest &other);
    ImportFirewallDomainsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportFirewallDomainsRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
