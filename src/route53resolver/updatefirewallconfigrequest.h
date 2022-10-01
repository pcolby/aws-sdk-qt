// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFIREWALLCONFIGREQUEST_H
#define QTAWS_UPDATEFIREWALLCONFIGREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class UpdateFirewallConfigRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT UpdateFirewallConfigRequest : public Route53ResolverRequest {

public:
    UpdateFirewallConfigRequest(const UpdateFirewallConfigRequest &other);
    UpdateFirewallConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFirewallConfigRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
