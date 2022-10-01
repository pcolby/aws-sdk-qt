// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATECONNECTIONWITHLAGREQUEST_P_H
#define QTAWS_ASSOCIATECONNECTIONWITHLAGREQUEST_P_H

#include "directconnectrequest_p.h"
#include "associateconnectionwithlagrequest.h"

namespace QtAws {
namespace DirectConnect {

class AssociateConnectionWithLagRequest;

class AssociateConnectionWithLagRequestPrivate : public DirectConnectRequestPrivate {

public:
    AssociateConnectionWithLagRequestPrivate(const DirectConnectRequest::Action action,
                                   AssociateConnectionWithLagRequest * const q);
    AssociateConnectionWithLagRequestPrivate(const AssociateConnectionWithLagRequestPrivate &other,
                                   AssociateConnectionWithLagRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateConnectionWithLagRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
