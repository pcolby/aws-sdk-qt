// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGATEWAYRESPONSE_P_H
#define QTAWS_CREATEGATEWAYRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class CreateGatewayResponse;

class CreateGatewayResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit CreateGatewayResponsePrivate(CreateGatewayResponse * const q);

    void parseCreateGatewayResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateGatewayResponse)
    Q_DISABLE_COPY(CreateGatewayResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
