// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDELIVERABILITYDASHBOARDOPTIONSRESPONSE_P_H
#define QTAWS_GETDELIVERABILITYDASHBOARDOPTIONSRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class GetDeliverabilityDashboardOptionsResponse;

class GetDeliverabilityDashboardOptionsResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit GetDeliverabilityDashboardOptionsResponsePrivate(GetDeliverabilityDashboardOptionsResponse * const q);

    void parseGetDeliverabilityDashboardOptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDeliverabilityDashboardOptionsResponse)
    Q_DISABLE_COPY(GetDeliverabilityDashboardOptionsResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
