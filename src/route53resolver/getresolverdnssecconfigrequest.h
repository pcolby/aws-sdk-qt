// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOLVERDNSSECCONFIGREQUEST_H
#define QTAWS_GETRESOLVERDNSSECCONFIGREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class GetResolverDnssecConfigRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT GetResolverDnssecConfigRequest : public Route53ResolverRequest {

public:
    GetResolverDnssecConfigRequest(const GetResolverDnssecConfigRequest &other);
    GetResolverDnssecConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResolverDnssecConfigRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
