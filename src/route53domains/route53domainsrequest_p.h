// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROUTE53DOMAINSREQUEST_P_H
#define QTAWS_ROUTE53DOMAINSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "route53domainsrequest.h"

namespace QtAws {
namespace Route53Domains {

class Route53DomainsRequest;

class Route53DomainsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    Route53DomainsRequest::Action action; ///< Route53Domains action to be performed.
    QString apiVersion;        ///< Route53Domains API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Route53Domains request (query string) parameters. @todo?

    Route53DomainsRequestPrivate(const Route53DomainsRequest::Action action, Route53DomainsRequest * const q);
    Route53DomainsRequestPrivate(const Route53DomainsRequestPrivate &other, Route53DomainsRequest * const q);

    static QString toString(const Route53DomainsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(Route53DomainsRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
