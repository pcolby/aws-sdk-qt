// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVIRTUALINTERFACEATTRIBUTESREQUEST_P_H
#define QTAWS_UPDATEVIRTUALINTERFACEATTRIBUTESREQUEST_P_H

#include "directconnectrequest_p.h"
#include "updatevirtualinterfaceattributesrequest.h"

namespace QtAws {
namespace DirectConnect {

class UpdateVirtualInterfaceAttributesRequest;

class UpdateVirtualInterfaceAttributesRequestPrivate : public DirectConnectRequestPrivate {

public:
    UpdateVirtualInterfaceAttributesRequestPrivate(const DirectConnectRequest::Action action,
                                   UpdateVirtualInterfaceAttributesRequest * const q);
    UpdateVirtualInterfaceAttributesRequestPrivate(const UpdateVirtualInterfaceAttributesRequestPrivate &other,
                                   UpdateVirtualInterfaceAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateVirtualInterfaceAttributesRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
