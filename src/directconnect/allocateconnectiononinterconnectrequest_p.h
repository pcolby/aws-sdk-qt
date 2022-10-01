// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ALLOCATECONNECTIONONINTERCONNECTREQUEST_P_H
#define QTAWS_ALLOCATECONNECTIONONINTERCONNECTREQUEST_P_H

#include "directconnectrequest_p.h"
#include "allocateconnectiononinterconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class AllocateConnectionOnInterconnectRequest;

class AllocateConnectionOnInterconnectRequestPrivate : public DirectConnectRequestPrivate {

public:
    AllocateConnectionOnInterconnectRequestPrivate(const DirectConnectRequest::Action action,
                                   AllocateConnectionOnInterconnectRequest * const q);
    AllocateConnectionOnInterconnectRequestPrivate(const AllocateConnectionOnInterconnectRequestPrivate &other,
                                   AllocateConnectionOnInterconnectRequest * const q);

private:
    Q_DECLARE_PUBLIC(AllocateConnectionOnInterconnectRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
