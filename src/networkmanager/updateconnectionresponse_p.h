// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONNECTIONRESPONSE_P_H
#define QTAWS_UPDATECONNECTIONRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class UpdateConnectionResponse;

class UpdateConnectionResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit UpdateConnectionResponsePrivate(UpdateConnectionResponse * const q);

    void parseUpdateConnectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateConnectionResponse)
    Q_DISABLE_COPY(UpdateConnectionResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
