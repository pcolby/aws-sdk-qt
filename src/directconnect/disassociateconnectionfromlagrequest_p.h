// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATECONNECTIONFROMLAGREQUEST_P_H
#define QTAWS_DISASSOCIATECONNECTIONFROMLAGREQUEST_P_H

#include "directconnectrequest_p.h"
#include "disassociateconnectionfromlagrequest.h"

namespace QtAws {
namespace DirectConnect {

class DisassociateConnectionFromLagRequest;

class DisassociateConnectionFromLagRequestPrivate : public DirectConnectRequestPrivate {

public:
    DisassociateConnectionFromLagRequestPrivate(const DirectConnectRequest::Action action,
                                   DisassociateConnectionFromLagRequest * const q);
    DisassociateConnectionFromLagRequestPrivate(const DisassociateConnectionFromLagRequestPrivate &other,
                                   DisassociateConnectionFromLagRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateConnectionFromLagRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
