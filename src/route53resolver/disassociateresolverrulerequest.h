// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATERESOLVERRULEREQUEST_H
#define QTAWS_DISASSOCIATERESOLVERRULEREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class DisassociateResolverRuleRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT DisassociateResolverRuleRequest : public Route53ResolverRequest {

public:
    DisassociateResolverRuleRequest(const DisassociateResolverRuleRequest &other);
    DisassociateResolverRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateResolverRuleRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
