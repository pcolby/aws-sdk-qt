// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOLVERDNSSECCONFIGREQUEST_H
#define QTAWS_UPDATERESOLVERDNSSECCONFIGREQUEST_H

#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class UpdateResolverDnssecConfigRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT UpdateResolverDnssecConfigRequest : public Route53ResolverRequest {

public:
    UpdateResolverDnssecConfigRequest(const UpdateResolverDnssecConfigRequest &other);
    UpdateResolverDnssecConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateResolverDnssecConfigRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
