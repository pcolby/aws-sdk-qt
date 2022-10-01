// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPRIVATEVIRTUALINTERFACEREQUEST_P_H
#define QTAWS_CREATEPRIVATEVIRTUALINTERFACEREQUEST_P_H

#include "directconnectrequest_p.h"
#include "createprivatevirtualinterfacerequest.h"

namespace QtAws {
namespace DirectConnect {

class CreatePrivateVirtualInterfaceRequest;

class CreatePrivateVirtualInterfaceRequestPrivate : public DirectConnectRequestPrivate {

public:
    CreatePrivateVirtualInterfaceRequestPrivate(const DirectConnectRequest::Action action,
                                   CreatePrivateVirtualInterfaceRequest * const q);
    CreatePrivateVirtualInterfaceRequestPrivate(const CreatePrivateVirtualInterfaceRequestPrivate &other,
                                   CreatePrivateVirtualInterfaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePrivateVirtualInterfaceRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
