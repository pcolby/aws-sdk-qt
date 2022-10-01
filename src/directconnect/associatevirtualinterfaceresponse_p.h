// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEVIRTUALINTERFACERESPONSE_P_H
#define QTAWS_ASSOCIATEVIRTUALINTERFACERESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class AssociateVirtualInterfaceResponse;

class AssociateVirtualInterfaceResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit AssociateVirtualInterfaceResponsePrivate(AssociateVirtualInterfaceResponse * const q);

    void parseAssociateVirtualInterfaceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateVirtualInterfaceResponse)
    Q_DISABLE_COPY(AssociateVirtualInterfaceResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
