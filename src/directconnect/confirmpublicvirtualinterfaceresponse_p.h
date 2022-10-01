// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIRMPUBLICVIRTUALINTERFACERESPONSE_P_H
#define QTAWS_CONFIRMPUBLICVIRTUALINTERFACERESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class ConfirmPublicVirtualInterfaceResponse;

class ConfirmPublicVirtualInterfaceResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit ConfirmPublicVirtualInterfaceResponsePrivate(ConfirmPublicVirtualInterfaceResponse * const q);

    void parseConfirmPublicVirtualInterfaceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ConfirmPublicVirtualInterfaceResponse)
    Q_DISABLE_COPY(ConfirmPublicVirtualInterfaceResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
