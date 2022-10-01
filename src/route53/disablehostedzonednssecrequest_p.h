// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEHOSTEDZONEDNSSECREQUEST_P_H
#define QTAWS_DISABLEHOSTEDZONEDNSSECREQUEST_P_H

#include "route53request_p.h"
#include "disablehostedzonednssecrequest.h"

namespace QtAws {
namespace Route53 {

class DisableHostedZoneDNSSECRequest;

class DisableHostedZoneDNSSECRequestPrivate : public Route53RequestPrivate {

public:
    DisableHostedZoneDNSSECRequestPrivate(const Route53Request::Action action,
                                   DisableHostedZoneDNSSECRequest * const q);
    DisableHostedZoneDNSSECRequestPrivate(const DisableHostedZoneDNSSECRequestPrivate &other,
                                   DisableHostedZoneDNSSECRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableHostedZoneDNSSECRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
