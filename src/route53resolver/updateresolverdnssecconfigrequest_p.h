// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOLVERDNSSECCONFIGREQUEST_P_H
#define QTAWS_UPDATERESOLVERDNSSECCONFIGREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "updateresolverdnssecconfigrequest.h"

namespace QtAws {
namespace Route53Resolver {

class UpdateResolverDnssecConfigRequest;

class UpdateResolverDnssecConfigRequestPrivate : public Route53ResolverRequestPrivate {

public:
    UpdateResolverDnssecConfigRequestPrivate(const Route53ResolverRequest::Action action,
                                   UpdateResolverDnssecConfigRequest * const q);
    UpdateResolverDnssecConfigRequestPrivate(const UpdateResolverDnssecConfigRequestPrivate &other,
                                   UpdateResolverDnssecConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateResolverDnssecConfigRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
