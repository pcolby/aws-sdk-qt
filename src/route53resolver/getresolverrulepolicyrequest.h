// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOLVERRULEPOLICYREQUEST_H
#define QTAWS_GETRESOLVERRULEPOLICYREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class GetResolverRulePolicyRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT GetResolverRulePolicyRequest : public Route53ResolverRequest {

public:
    GetResolverRulePolicyRequest(const GetResolverRulePolicyRequest &other);
    GetResolverRulePolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResolverRulePolicyRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
