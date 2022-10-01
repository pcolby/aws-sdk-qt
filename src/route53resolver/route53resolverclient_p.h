// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROUTE53RESOLVERCLIENT_P_H
#define QTAWS_ROUTE53RESOLVERCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Route53Resolver {

class Route53ResolverClient;

class Route53ResolverClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit Route53ResolverClientPrivate(Route53ResolverClient * const q);

private:
    Q_DECLARE_PUBLIC(Route53ResolverClient)
    Q_DISABLE_COPY(Route53ResolverClientPrivate)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
