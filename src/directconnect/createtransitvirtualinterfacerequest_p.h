// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITVIRTUALINTERFACEREQUEST_P_H
#define QTAWS_CREATETRANSITVIRTUALINTERFACEREQUEST_P_H

#include "directconnectrequest_p.h"
#include "createtransitvirtualinterfacerequest.h"

namespace QtAws {
namespace DirectConnect {

class CreateTransitVirtualInterfaceRequest;

class CreateTransitVirtualInterfaceRequestPrivate : public DirectConnectRequestPrivate {

public:
    CreateTransitVirtualInterfaceRequestPrivate(const DirectConnectRequest::Action action,
                                   CreateTransitVirtualInterfaceRequest * const q);
    CreateTransitVirtualInterfaceRequestPrivate(const CreateTransitVirtualInterfaceRequestPrivate &other,
                                   CreateTransitVirtualInterfaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTransitVirtualInterfaceRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
