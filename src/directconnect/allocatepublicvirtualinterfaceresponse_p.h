// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ALLOCATEPUBLICVIRTUALINTERFACERESPONSE_P_H
#define QTAWS_ALLOCATEPUBLICVIRTUALINTERFACERESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class AllocatePublicVirtualInterfaceResponse;

class AllocatePublicVirtualInterfaceResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit AllocatePublicVirtualInterfaceResponsePrivate(AllocatePublicVirtualInterfaceResponse * const q);

    void parseAllocatePublicVirtualInterfaceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AllocatePublicVirtualInterfaceResponse)
    Q_DISABLE_COPY(AllocatePublicVirtualInterfaceResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
