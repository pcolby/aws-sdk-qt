// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIRMPUBLICVIRTUALINTERFACEREQUEST_P_H
#define QTAWS_CONFIRMPUBLICVIRTUALINTERFACEREQUEST_P_H

#include "directconnectrequest_p.h"
#include "confirmpublicvirtualinterfacerequest.h"

namespace QtAws {
namespace DirectConnect {

class ConfirmPublicVirtualInterfaceRequest;

class ConfirmPublicVirtualInterfaceRequestPrivate : public DirectConnectRequestPrivate {

public:
    ConfirmPublicVirtualInterfaceRequestPrivate(const DirectConnectRequest::Action action,
                                   ConfirmPublicVirtualInterfaceRequest * const q);
    ConfirmPublicVirtualInterfaceRequestPrivate(const ConfirmPublicVirtualInterfaceRequestPrivate &other,
                                   ConfirmPublicVirtualInterfaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(ConfirmPublicVirtualInterfaceRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
