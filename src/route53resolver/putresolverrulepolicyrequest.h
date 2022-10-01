// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRESOLVERRULEPOLICYREQUEST_H
#define QTAWS_PUTRESOLVERRULEPOLICYREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class PutResolverRulePolicyRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT PutResolverRulePolicyRequest : public Route53ResolverRequest {

public:
    PutResolverRulePolicyRequest(const PutResolverRulePolicyRequest &other);
    PutResolverRulePolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutResolverRulePolicyRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
