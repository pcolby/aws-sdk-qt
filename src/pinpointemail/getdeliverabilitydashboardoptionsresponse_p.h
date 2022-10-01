// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDELIVERABILITYDASHBOARDOPTIONSRESPONSE_P_H
#define QTAWS_GETDELIVERABILITYDASHBOARDOPTIONSRESPONSE_P_H

#include "pinpointemailresponse_p.h"

namespace QtAws {
namespace PinpointEmail {

class GetDeliverabilityDashboardOptionsResponse;

class GetDeliverabilityDashboardOptionsResponsePrivate : public PinpointEmailResponsePrivate {

public:

    explicit GetDeliverabilityDashboardOptionsResponsePrivate(GetDeliverabilityDashboardOptionsResponse * const q);

    void parseGetDeliverabilityDashboardOptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDeliverabilityDashboardOptionsResponse)
    Q_DISABLE_COPY(GetDeliverabilityDashboardOptionsResponsePrivate)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
