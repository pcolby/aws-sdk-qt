// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINSTATISTICSREPORTREQUEST_P_H
#define QTAWS_GETDOMAINSTATISTICSREPORTREQUEST_P_H

#include "pinpointemailrequest_p.h"
#include "getdomainstatisticsreportrequest.h"

namespace QtAws {
namespace PinpointEmail {

class GetDomainStatisticsReportRequest;

class GetDomainStatisticsReportRequestPrivate : public PinpointEmailRequestPrivate {

public:
    GetDomainStatisticsReportRequestPrivate(const PinpointEmailRequest::Action action,
                                   GetDomainStatisticsReportRequest * const q);
    GetDomainStatisticsReportRequestPrivate(const GetDomainStatisticsReportRequestPrivate &other,
                                   GetDomainStatisticsReportRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDomainStatisticsReportRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
