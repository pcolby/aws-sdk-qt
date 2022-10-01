// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDELIVERABILITYTESTREPORTRESPONSE_P_H
#define QTAWS_GETDELIVERABILITYTESTREPORTRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class GetDeliverabilityTestReportResponse;

class GetDeliverabilityTestReportResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit GetDeliverabilityTestReportResponsePrivate(GetDeliverabilityTestReportResponse * const q);

    void parseGetDeliverabilityTestReportResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDeliverabilityTestReportResponse)
    Q_DISABLE_COPY(GetDeliverabilityTestReportResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
