// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPRIVATEVIRTUALINTERFACERESPONSE_P_H
#define QTAWS_CREATEPRIVATEVIRTUALINTERFACERESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class CreatePrivateVirtualInterfaceResponse;

class CreatePrivateVirtualInterfaceResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit CreatePrivateVirtualInterfaceResponsePrivate(CreatePrivateVirtualInterfaceResponse * const q);

    void parseCreatePrivateVirtualInterfaceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePrivateVirtualInterfaceResponse)
    Q_DISABLE_COPY(CreatePrivateVirtualInterfaceResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
