// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATECONNECTIONWITHLAGRESPONSE_P_H
#define QTAWS_ASSOCIATECONNECTIONWITHLAGRESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class AssociateConnectionWithLagResponse;

class AssociateConnectionWithLagResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit AssociateConnectionWithLagResponsePrivate(AssociateConnectionWithLagResponse * const q);

    void parseAssociateConnectionWithLagResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateConnectionWithLagResponse)
    Q_DISABLE_COPY(AssociateConnectionWithLagResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
