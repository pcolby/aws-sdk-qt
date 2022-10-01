// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIRMPRIVATEVIRTUALINTERFACEREQUEST_P_H
#define QTAWS_CONFIRMPRIVATEVIRTUALINTERFACEREQUEST_P_H

#include "directconnectrequest_p.h"
#include "confirmprivatevirtualinterfacerequest.h"

namespace QtAws {
namespace DirectConnect {

class ConfirmPrivateVirtualInterfaceRequest;

class ConfirmPrivateVirtualInterfaceRequestPrivate : public DirectConnectRequestPrivate {

public:
    ConfirmPrivateVirtualInterfaceRequestPrivate(const DirectConnectRequest::Action action,
                                   ConfirmPrivateVirtualInterfaceRequest * const q);
    ConfirmPrivateVirtualInterfaceRequestPrivate(const ConfirmPrivateVirtualInterfaceRequestPrivate &other,
                                   ConfirmPrivateVirtualInterfaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(ConfirmPrivateVirtualInterfaceRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
