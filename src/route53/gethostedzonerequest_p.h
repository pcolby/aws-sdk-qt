// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHOSTEDZONEREQUEST_P_H
#define QTAWS_GETHOSTEDZONEREQUEST_P_H

#include "route53request_p.h"
#include "gethostedzonerequest.h"

namespace QtAws {
namespace Route53 {

class GetHostedZoneRequest;

class GetHostedZoneRequestPrivate : public Route53RequestPrivate {

public:
    GetHostedZoneRequestPrivate(const Route53Request::Action action,
                                   GetHostedZoneRequest * const q);
    GetHostedZoneRequestPrivate(const GetHostedZoneRequestPrivate &other,
                                   GetHostedZoneRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetHostedZoneRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
