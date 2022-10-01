// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEVPCWITHHOSTEDZONEREQUEST_P_H
#define QTAWS_ASSOCIATEVPCWITHHOSTEDZONEREQUEST_P_H

#include "route53request_p.h"
#include "associatevpcwithhostedzonerequest.h"

namespace QtAws {
namespace Route53 {

class AssociateVPCWithHostedZoneRequest;

class AssociateVPCWithHostedZoneRequestPrivate : public Route53RequestPrivate {

public:
    AssociateVPCWithHostedZoneRequestPrivate(const Route53Request::Action action,
                                   AssociateVPCWithHostedZoneRequest * const q);
    AssociateVPCWithHostedZoneRequestPrivate(const AssociateVPCWithHostedZoneRequestPrivate &other,
                                   AssociateVPCWithHostedZoneRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateVPCWithHostedZoneRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
