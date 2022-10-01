// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFIREWALLCONFIGREQUEST_H
#define QTAWS_GETFIREWALLCONFIGREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class GetFirewallConfigRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT GetFirewallConfigRequest : public Route53ResolverRequest {

public:
    GetFirewallConfigRequest(const GetFirewallConfigRequest &other);
    GetFirewallConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFirewallConfigRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
