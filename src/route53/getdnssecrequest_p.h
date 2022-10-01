// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDNSSECREQUEST_P_H
#define QTAWS_GETDNSSECREQUEST_P_H

#include "route53request_p.h"
#include "getdnssecrequest.h"

namespace QtAws {
namespace Route53 {

class GetDNSSECRequest;

class GetDNSSECRequestPrivate : public Route53RequestPrivate {

public:
    GetDNSSECRequestPrivate(const Route53Request::Action action,
                                   GetDNSSECRequest * const q);
    GetDNSSECRequestPrivate(const GetDNSSECRequestPrivate &other,
                                   GetDNSSECRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDNSSECRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
