// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROUTE53DOMAINSCLIENT_P_H
#define QTAWS_ROUTE53DOMAINSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Route53Domains {

class Route53DomainsClient;

class Route53DomainsClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit Route53DomainsClientPrivate(Route53DomainsClient * const q);

private:
    Q_DECLARE_PUBLIC(Route53DomainsClient)
    Q_DISABLE_COPY(Route53DomainsClientPrivate)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
