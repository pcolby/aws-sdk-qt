// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SHUTDOWNGATEWAYRESPONSE_P_H
#define QTAWS_SHUTDOWNGATEWAYRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class ShutdownGatewayResponse;

class ShutdownGatewayResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit ShutdownGatewayResponsePrivate(ShutdownGatewayResponse * const q);

    void parseShutdownGatewayResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ShutdownGatewayResponse)
    Q_DISABLE_COPY(ShutdownGatewayResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
