// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOLVERCONFIGREQUEST_P_H
#define QTAWS_UPDATERESOLVERCONFIGREQUEST_P_H

#include "route53resolverrequest_p.h"
#include "updateresolverconfigrequest.h"

namespace QtAws {
namespace Route53Resolver {

class UpdateResolverConfigRequest;

class UpdateResolverConfigRequestPrivate : public Route53ResolverRequestPrivate {

public:
    UpdateResolverConfigRequestPrivate(const Route53ResolverRequest::Action action,
                                   UpdateResolverConfigRequest * const q);
    UpdateResolverConfigRequestPrivate(const UpdateResolverConfigRequestPrivate &other,
                                   UpdateResolverConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateResolverConfigRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
