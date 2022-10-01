// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGATEWAYRESPONSE_P_H
#define QTAWS_UPDATEGATEWAYRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class UpdateGatewayResponse;

class UpdateGatewayResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit UpdateGatewayResponsePrivate(UpdateGatewayResponse * const q);

    void parseUpdateGatewayResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateGatewayResponse)
    Q_DISABLE_COPY(UpdateGatewayResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
