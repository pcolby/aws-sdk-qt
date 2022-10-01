// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDELIVERABILITYTESTREPORTRESPONSE_P_H
#define QTAWS_CREATEDELIVERABILITYTESTREPORTRESPONSE_P_H

#include "pinpointemailresponse_p.h"

namespace QtAws {
namespace PinpointEmail {

class CreateDeliverabilityTestReportResponse;

class CreateDeliverabilityTestReportResponsePrivate : public PinpointEmailResponsePrivate {

public:

    explicit CreateDeliverabilityTestReportResponsePrivate(CreateDeliverabilityTestReportResponse * const q);

    void parseCreateDeliverabilityTestReportResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDeliverabilityTestReportResponse)
    Q_DISABLE_COPY(CreateDeliverabilityTestReportResponsePrivate)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
