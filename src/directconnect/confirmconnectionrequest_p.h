// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIRMCONNECTIONREQUEST_P_H
#define QTAWS_CONFIRMCONNECTIONREQUEST_P_H

#include "directconnectrequest_p.h"
#include "confirmconnectionrequest.h"

namespace QtAws {
namespace DirectConnect {

class ConfirmConnectionRequest;

class ConfirmConnectionRequestPrivate : public DirectConnectRequestPrivate {

public:
    ConfirmConnectionRequestPrivate(const DirectConnectRequest::Action action,
                                   ConfirmConnectionRequest * const q);
    ConfirmConnectionRequestPrivate(const ConfirmConnectionRequestPrivate &other,
                                   ConfirmConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(ConfirmConnectionRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
