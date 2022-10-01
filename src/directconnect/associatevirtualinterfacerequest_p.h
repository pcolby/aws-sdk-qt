// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEVIRTUALINTERFACEREQUEST_P_H
#define QTAWS_ASSOCIATEVIRTUALINTERFACEREQUEST_P_H

#include "directconnectrequest_p.h"
#include "associatevirtualinterfacerequest.h"

namespace QtAws {
namespace DirectConnect {

class AssociateVirtualInterfaceRequest;

class AssociateVirtualInterfaceRequestPrivate : public DirectConnectRequestPrivate {

public:
    AssociateVirtualInterfaceRequestPrivate(const DirectConnectRequest::Action action,
                                   AssociateVirtualInterfaceRequest * const q);
    AssociateVirtualInterfaceRequestPrivate(const AssociateVirtualInterfaceRequestPrivate &other,
                                   AssociateVirtualInterfaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateVirtualInterfaceRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
