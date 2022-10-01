// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ALLOCATETRANSITVIRTUALINTERFACERESPONSE_P_H
#define QTAWS_ALLOCATETRANSITVIRTUALINTERFACERESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class AllocateTransitVirtualInterfaceResponse;

class AllocateTransitVirtualInterfaceResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit AllocateTransitVirtualInterfaceResponsePrivate(AllocateTransitVirtualInterfaceResponse * const q);

    void parseAllocateTransitVirtualInterfaceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AllocateTransitVirtualInterfaceResponse)
    Q_DISABLE_COPY(AllocateTransitVirtualInterfaceResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
