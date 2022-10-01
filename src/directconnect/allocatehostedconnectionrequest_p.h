// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ALLOCATEHOSTEDCONNECTIONREQUEST_P_H
#define QTAWS_ALLOCATEHOSTEDCONNECTIONREQUEST_P_H

#include "directconnectrequest_p.h"
#include "allocatehostedconnectionrequest.h"

namespace QtAws {
namespace DirectConnect {

class AllocateHostedConnectionRequest;

class AllocateHostedConnectionRequestPrivate : public DirectConnectRequestPrivate {

public:
    AllocateHostedConnectionRequestPrivate(const DirectConnectRequest::Action action,
                                   AllocateHostedConnectionRequest * const q);
    AllocateHostedConnectionRequestPrivate(const AllocateHostedConnectionRequestPrivate &other,
                                   AllocateHostedConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(AllocateHostedConnectionRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
