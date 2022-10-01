// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPUBLICVIRTUALINTERFACERESPONSE_P_H
#define QTAWS_CREATEPUBLICVIRTUALINTERFACERESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class CreatePublicVirtualInterfaceResponse;

class CreatePublicVirtualInterfaceResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit CreatePublicVirtualInterfaceResponsePrivate(CreatePublicVirtualInterfaceResponse * const q);

    void parseCreatePublicVirtualInterfaceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePublicVirtualInterfaceResponse)
    Q_DISABLE_COPY(CreatePublicVirtualInterfaceResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
