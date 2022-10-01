// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATECONNECTIONFROMLAGRESPONSE_P_H
#define QTAWS_DISASSOCIATECONNECTIONFROMLAGRESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class DisassociateConnectionFromLagResponse;

class DisassociateConnectionFromLagResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit DisassociateConnectionFromLagResponsePrivate(DisassociateConnectionFromLagResponse * const q);

    void parseDisassociateConnectionFromLagResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateConnectionFromLagResponse)
    Q_DISABLE_COPY(DisassociateConnectionFromLagResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
