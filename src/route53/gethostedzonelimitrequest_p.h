// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHOSTEDZONELIMITREQUEST_P_H
#define QTAWS_GETHOSTEDZONELIMITREQUEST_P_H

#include "route53request_p.h"
#include "gethostedzonelimitrequest.h"

namespace QtAws {
namespace Route53 {

class GetHostedZoneLimitRequest;

class GetHostedZoneLimitRequestPrivate : public Route53RequestPrivate {

public:
    GetHostedZoneLimitRequestPrivate(const Route53Request::Action action,
                                   GetHostedZoneLimitRequest * const q);
    GetHostedZoneLimitRequestPrivate(const GetHostedZoneLimitRequestPrivate &other,
                                   GetHostedZoneLimitRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetHostedZoneLimitRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
