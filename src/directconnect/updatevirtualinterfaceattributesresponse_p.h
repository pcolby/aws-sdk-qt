// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVIRTUALINTERFACEATTRIBUTESRESPONSE_P_H
#define QTAWS_UPDATEVIRTUALINTERFACEATTRIBUTESRESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class UpdateVirtualInterfaceAttributesResponse;

class UpdateVirtualInterfaceAttributesResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit UpdateVirtualInterfaceAttributesResponsePrivate(UpdateVirtualInterfaceAttributesResponse * const q);

    void parseUpdateVirtualInterfaceAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateVirtualInterfaceAttributesResponse)
    Q_DISABLE_COPY(UpdateVirtualInterfaceAttributesResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
