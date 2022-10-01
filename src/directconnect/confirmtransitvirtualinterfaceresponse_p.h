// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIRMTRANSITVIRTUALINTERFACERESPONSE_P_H
#define QTAWS_CONFIRMTRANSITVIRTUALINTERFACERESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class ConfirmTransitVirtualInterfaceResponse;

class ConfirmTransitVirtualInterfaceResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit ConfirmTransitVirtualInterfaceResponsePrivate(ConfirmTransitVirtualInterfaceResponse * const q);

    void parseConfirmTransitVirtualInterfaceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ConfirmTransitVirtualInterfaceResponse)
    Q_DISABLE_COPY(ConfirmTransitVirtualInterfaceResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
