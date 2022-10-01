// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ALLOCATETRANSITVIRTUALINTERFACEREQUEST_P_H
#define QTAWS_ALLOCATETRANSITVIRTUALINTERFACEREQUEST_P_H

#include "directconnectrequest_p.h"
#include "allocatetransitvirtualinterfacerequest.h"

namespace QtAws {
namespace DirectConnect {

class AllocateTransitVirtualInterfaceRequest;

class AllocateTransitVirtualInterfaceRequestPrivate : public DirectConnectRequestPrivate {

public:
    AllocateTransitVirtualInterfaceRequestPrivate(const DirectConnectRequest::Action action,
                                   AllocateTransitVirtualInterfaceRequest * const q);
    AllocateTransitVirtualInterfaceRequestPrivate(const AllocateTransitVirtualInterfaceRequestPrivate &other,
                                   AllocateTransitVirtualInterfaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(AllocateTransitVirtualInterfaceRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
