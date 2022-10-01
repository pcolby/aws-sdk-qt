// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIRMCONNECTIONRESPONSE_P_H
#define QTAWS_CONFIRMCONNECTIONRESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class ConfirmConnectionResponse;

class ConfirmConnectionResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit ConfirmConnectionResponsePrivate(ConfirmConnectionResponse * const q);

    void parseConfirmConnectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ConfirmConnectionResponse)
    Q_DISABLE_COPY(ConfirmConnectionResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
