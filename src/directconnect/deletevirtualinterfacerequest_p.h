// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVIRTUALINTERFACEREQUEST_P_H
#define QTAWS_DELETEVIRTUALINTERFACEREQUEST_P_H

#include "directconnectrequest_p.h"
#include "deletevirtualinterfacerequest.h"

namespace QtAws {
namespace DirectConnect {

class DeleteVirtualInterfaceRequest;

class DeleteVirtualInterfaceRequestPrivate : public DirectConnectRequestPrivate {

public:
    DeleteVirtualInterfaceRequestPrivate(const DirectConnectRequest::Action action,
                                   DeleteVirtualInterfaceRequest * const q);
    DeleteVirtualInterfaceRequestPrivate(const DeleteVirtualInterfaceRequestPrivate &other,
                                   DeleteVirtualInterfaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVirtualInterfaceRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
