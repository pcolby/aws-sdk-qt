// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEHOSTEDZONEDNSSECREQUEST_P_H
#define QTAWS_ENABLEHOSTEDZONEDNSSECREQUEST_P_H

#include "route53request_p.h"
#include "enablehostedzonednssecrequest.h"

namespace QtAws {
namespace Route53 {

class EnableHostedZoneDNSSECRequest;

class EnableHostedZoneDNSSECRequestPrivate : public Route53RequestPrivate {

public:
    EnableHostedZoneDNSSECRequestPrivate(const Route53Request::Action action,
                                   EnableHostedZoneDNSSECRequest * const q);
    EnableHostedZoneDNSSECRequestPrivate(const EnableHostedZoneDNSSECRequestPrivate &other,
                                   EnableHostedZoneDNSSECRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableHostedZoneDNSSECRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
