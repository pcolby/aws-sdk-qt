// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIRMPRIVATEVIRTUALINTERFACERESPONSE_P_H
#define QTAWS_CONFIRMPRIVATEVIRTUALINTERFACERESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class ConfirmPrivateVirtualInterfaceResponse;

class ConfirmPrivateVirtualInterfaceResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit ConfirmPrivateVirtualInterfaceResponsePrivate(ConfirmPrivateVirtualInterfaceResponse * const q);

    void parseConfirmPrivateVirtualInterfaceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ConfirmPrivateVirtualInterfaceResponse)
    Q_DISABLE_COPY(ConfirmPrivateVirtualInterfaceResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
