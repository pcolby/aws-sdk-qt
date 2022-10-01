// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVIRTUALINTERFACERESPONSE_P_H
#define QTAWS_DELETEVIRTUALINTERFACERESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class DeleteVirtualInterfaceResponse;

class DeleteVirtualInterfaceResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit DeleteVirtualInterfaceResponsePrivate(DeleteVirtualInterfaceResponse * const q);

    void parseDeleteVirtualInterfaceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteVirtualInterfaceResponse)
    Q_DISABLE_COPY(DeleteVirtualInterfaceResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
