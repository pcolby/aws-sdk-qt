// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONNECTIONRESPONSE_P_H
#define QTAWS_CREATECONNECTIONRESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class CreateConnectionResponse;

class CreateConnectionResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit CreateConnectionResponsePrivate(CreateConnectionResponse * const q);

    void parseCreateConnectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateConnectionResponse)
    Q_DISABLE_COPY(CreateConnectionResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
