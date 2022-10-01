// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTGATEWAYRESPONSE_P_H
#define QTAWS_STARTGATEWAYRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class StartGatewayResponse;

class StartGatewayResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit StartGatewayResponsePrivate(StartGatewayResponse * const q);

    void parseStartGatewayResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartGatewayResponse)
    Q_DISABLE_COPY(StartGatewayResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
