// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEVPCFROMHOSTEDZONEREQUEST_P_H
#define QTAWS_DISASSOCIATEVPCFROMHOSTEDZONEREQUEST_P_H

#include "route53request_p.h"
#include "disassociatevpcfromhostedzonerequest.h"

namespace QtAws {
namespace Route53 {

class DisassociateVPCFromHostedZoneRequest;

class DisassociateVPCFromHostedZoneRequestPrivate : public Route53RequestPrivate {

public:
    DisassociateVPCFromHostedZoneRequestPrivate(const Route53Request::Action action,
                                   DisassociateVPCFromHostedZoneRequest * const q);
    DisassociateVPCFromHostedZoneRequestPrivate(const DisassociateVPCFromHostedZoneRequestPrivate &other,
                                   DisassociateVPCFromHostedZoneRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateVPCFromHostedZoneRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
