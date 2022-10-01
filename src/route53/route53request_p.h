// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROUTE53REQUEST_P_H
#define QTAWS_ROUTE53REQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "route53request.h"

namespace QtAws {
namespace Route53 {

class Route53Request;

class Route53RequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    Route53Request::Action action; ///< Route53 action to be performed.
    QString apiVersion;        ///< Route53 API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Route53 request (query string) parameters. @todo?

    Route53RequestPrivate(const Route53Request::Action action, Route53Request * const q);
    Route53RequestPrivate(const Route53RequestPrivate &other, Route53Request * const q);

    static QString toString(const Route53Request::Action &action);

private:
    Q_DECLARE_PUBLIC(Route53Request)

};

} // namespace Route53
} // namespace QtAws

#endif
