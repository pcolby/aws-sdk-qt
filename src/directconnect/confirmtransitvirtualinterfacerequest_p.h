// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIRMTRANSITVIRTUALINTERFACEREQUEST_P_H
#define QTAWS_CONFIRMTRANSITVIRTUALINTERFACEREQUEST_P_H

#include "directconnectrequest_p.h"
#include "confirmtransitvirtualinterfacerequest.h"

namespace QtAws {
namespace DirectConnect {

class ConfirmTransitVirtualInterfaceRequest;

class ConfirmTransitVirtualInterfaceRequestPrivate : public DirectConnectRequestPrivate {

public:
    ConfirmTransitVirtualInterfaceRequestPrivate(const DirectConnectRequest::Action action,
                                   ConfirmTransitVirtualInterfaceRequest * const q);
    ConfirmTransitVirtualInterfaceRequestPrivate(const ConfirmTransitVirtualInterfaceRequestPrivate &other,
                                   ConfirmTransitVirtualInterfaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(ConfirmTransitVirtualInterfaceRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
