// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITVIRTUALINTERFACERESPONSE_P_H
#define QTAWS_CREATETRANSITVIRTUALINTERFACERESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class CreateTransitVirtualInterfaceResponse;

class CreateTransitVirtualInterfaceResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit CreateTransitVirtualInterfaceResponsePrivate(CreateTransitVirtualInterfaceResponse * const q);

    void parseCreateTransitVirtualInterfaceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTransitVirtualInterfaceResponse)
    Q_DISABLE_COPY(CreateTransitVirtualInterfaceResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
