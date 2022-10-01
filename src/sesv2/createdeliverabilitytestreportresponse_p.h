// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDELIVERABILITYTESTREPORTRESPONSE_P_H
#define QTAWS_CREATEDELIVERABILITYTESTREPORTRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class CreateDeliverabilityTestReportResponse;

class CreateDeliverabilityTestReportResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit CreateDeliverabilityTestReportResponsePrivate(CreateDeliverabilityTestReportResponse * const q);

    void parseCreateDeliverabilityTestReportResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDeliverabilityTestReportResponse)
    Q_DISABLE_COPY(CreateDeliverabilityTestReportResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
