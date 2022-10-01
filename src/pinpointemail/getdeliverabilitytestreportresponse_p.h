// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDELIVERABILITYTESTREPORTRESPONSE_P_H
#define QTAWS_GETDELIVERABILITYTESTREPORTRESPONSE_P_H

#include "pinpointemailresponse_p.h"

namespace QtAws {
namespace PinpointEmail {

class GetDeliverabilityTestReportResponse;

class GetDeliverabilityTestReportResponsePrivate : public PinpointEmailResponsePrivate {

public:

    explicit GetDeliverabilityTestReportResponsePrivate(GetDeliverabilityTestReportResponse * const q);

    void parseGetDeliverabilityTestReportResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDeliverabilityTestReportResponse)
    Q_DISABLE_COPY(GetDeliverabilityTestReportResponsePrivate)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
