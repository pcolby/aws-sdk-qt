// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEHOSTEDCONNECTIONREQUEST_P_H
#define QTAWS_ASSOCIATEHOSTEDCONNECTIONREQUEST_P_H

#include "directconnectrequest_p.h"
#include "associatehostedconnectionrequest.h"

namespace QtAws {
namespace DirectConnect {

class AssociateHostedConnectionRequest;

class AssociateHostedConnectionRequestPrivate : public DirectConnectRequestPrivate {

public:
    AssociateHostedConnectionRequestPrivate(const DirectConnectRequest::Action action,
                                   AssociateHostedConnectionRequest * const q);
    AssociateHostedConnectionRequestPrivate(const AssociateHostedConnectionRequestPrivate &other,
                                   AssociateHostedConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateHostedConnectionRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
