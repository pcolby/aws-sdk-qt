// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ALLOCATEPUBLICVIRTUALINTERFACEREQUEST_P_H
#define QTAWS_ALLOCATEPUBLICVIRTUALINTERFACEREQUEST_P_H

#include "directconnectrequest_p.h"
#include "allocatepublicvirtualinterfacerequest.h"

namespace QtAws {
namespace DirectConnect {

class AllocatePublicVirtualInterfaceRequest;

class AllocatePublicVirtualInterfaceRequestPrivate : public DirectConnectRequestPrivate {

public:
    AllocatePublicVirtualInterfaceRequestPrivate(const DirectConnectRequest::Action action,
                                   AllocatePublicVirtualInterfaceRequest * const q);
    AllocatePublicVirtualInterfaceRequestPrivate(const AllocatePublicVirtualInterfaceRequestPrivate &other,
                                   AllocatePublicVirtualInterfaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(AllocatePublicVirtualInterfaceRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
