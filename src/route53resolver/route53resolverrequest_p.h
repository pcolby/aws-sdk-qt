// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROUTE53RESOLVERREQUEST_P_H
#define QTAWS_ROUTE53RESOLVERREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "route53resolverrequest.h"

namespace QtAws {
namespace Route53Resolver {

class Route53ResolverRequest;

class Route53ResolverRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    Route53ResolverRequest::Action action; ///< Route53Resolver action to be performed.
    QString apiVersion;        ///< Route53Resolver API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Route53Resolver request (query string) parameters. @todo?

    Route53ResolverRequestPrivate(const Route53ResolverRequest::Action action, Route53ResolverRequest * const q);
    Route53ResolverRequestPrivate(const Route53ResolverRequestPrivate &other, Route53ResolverRequest * const q);

    static QString toString(const Route53ResolverRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(Route53ResolverRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
