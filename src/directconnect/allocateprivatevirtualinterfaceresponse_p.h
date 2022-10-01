// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ALLOCATEPRIVATEVIRTUALINTERFACERESPONSE_P_H
#define QTAWS_ALLOCATEPRIVATEVIRTUALINTERFACERESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class AllocatePrivateVirtualInterfaceResponse;

class AllocatePrivateVirtualInterfaceResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit AllocatePrivateVirtualInterfaceResponsePrivate(AllocatePrivateVirtualInterfaceResponse * const q);

    void parseAllocatePrivateVirtualInterfaceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AllocatePrivateVirtualInterfaceResponse)
    Q_DISABLE_COPY(AllocatePrivateVirtualInterfaceResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
