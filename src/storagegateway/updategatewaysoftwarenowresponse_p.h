// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGATEWAYSOFTWARENOWRESPONSE_P_H
#define QTAWS_UPDATEGATEWAYSOFTWARENOWRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class UpdateGatewaySoftwareNowResponse;

class UpdateGatewaySoftwareNowResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit UpdateGatewaySoftwareNowResponsePrivate(UpdateGatewaySoftwareNowResponse * const q);

    void parseUpdateGatewaySoftwareNowResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateGatewaySoftwareNowResponse)
    Q_DISABLE_COPY(UpdateGatewaySoftwareNowResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
