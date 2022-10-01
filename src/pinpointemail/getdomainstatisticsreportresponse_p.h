// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINSTATISTICSREPORTRESPONSE_P_H
#define QTAWS_GETDOMAINSTATISTICSREPORTRESPONSE_P_H

#include "pinpointemailresponse_p.h"

namespace QtAws {
namespace PinpointEmail {

class GetDomainStatisticsReportResponse;

class GetDomainStatisticsReportResponsePrivate : public PinpointEmailResponsePrivate {

public:

    explicit GetDomainStatisticsReportResponsePrivate(GetDomainStatisticsReportResponse * const q);

    void parseGetDomainStatisticsReportResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDomainStatisticsReportResponse)
    Q_DISABLE_COPY(GetDomainStatisticsReportResponsePrivate)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
