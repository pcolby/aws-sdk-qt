// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ALLOCATEPRIVATEVIRTUALINTERFACEREQUEST_P_H
#define QTAWS_ALLOCATEPRIVATEVIRTUALINTERFACEREQUEST_P_H

#include "directconnectrequest_p.h"
#include "allocateprivatevirtualinterfacerequest.h"

namespace QtAws {
namespace DirectConnect {

class AllocatePrivateVirtualInterfaceRequest;

class AllocatePrivateVirtualInterfaceRequestPrivate : public DirectConnectRequestPrivate {

public:
    AllocatePrivateVirtualInterfaceRequestPrivate(const DirectConnectRequest::Action action,
                                   AllocatePrivateVirtualInterfaceRequest * const q);
    AllocatePrivateVirtualInterfaceRequestPrivate(const AllocatePrivateVirtualInterfaceRequestPrivate &other,
                                   AllocatePrivateVirtualInterfaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(AllocatePrivateVirtualInterfaceRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
