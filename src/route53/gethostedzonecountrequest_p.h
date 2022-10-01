// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHOSTEDZONECOUNTREQUEST_P_H
#define QTAWS_GETHOSTEDZONECOUNTREQUEST_P_H

#include "route53request_p.h"
#include "gethostedzonecountrequest.h"

namespace QtAws {
namespace Route53 {

class GetHostedZoneCountRequest;

class GetHostedZoneCountRequestPrivate : public Route53RequestPrivate {

public:
    GetHostedZoneCountRequestPrivate(const Route53Request::Action action,
                                   GetHostedZoneCountRequest * const q);
    GetHostedZoneCountRequestPrivate(const GetHostedZoneCountRequestPrivate &other,
                                   GetHostedZoneCountRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetHostedZoneCountRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
