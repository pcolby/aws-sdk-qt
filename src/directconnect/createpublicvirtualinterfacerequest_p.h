// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPUBLICVIRTUALINTERFACEREQUEST_P_H
#define QTAWS_CREATEPUBLICVIRTUALINTERFACEREQUEST_P_H

#include "directconnectrequest_p.h"
#include "createpublicvirtualinterfacerequest.h"

namespace QtAws {
namespace DirectConnect {

class CreatePublicVirtualInterfaceRequest;

class CreatePublicVirtualInterfaceRequestPrivate : public DirectConnectRequestPrivate {

public:
    CreatePublicVirtualInterfaceRequestPrivate(const DirectConnectRequest::Action action,
                                   CreatePublicVirtualInterfaceRequest * const q);
    CreatePublicVirtualInterfaceRequestPrivate(const CreatePublicVirtualInterfaceRequestPrivate &other,
                                   CreatePublicVirtualInterfaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePublicVirtualInterfaceRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
