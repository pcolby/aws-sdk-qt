// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINSTATISTICSREPORTREQUEST_P_H
#define QTAWS_GETDOMAINSTATISTICSREPORTREQUEST_P_H

#include "sesv2request_p.h"
#include "getdomainstatisticsreportrequest.h"

namespace QtAws {
namespace SESv2 {

class GetDomainStatisticsReportRequest;

class GetDomainStatisticsReportRequestPrivate : public SESv2RequestPrivate {

public:
    GetDomainStatisticsReportRequestPrivate(const SESv2Request::Action action,
                                   GetDomainStatisticsReportRequest * const q);
    GetDomainStatisticsReportRequestPrivate(const GetDomainStatisticsReportRequestPrivate &other,
                                   GetDomainStatisticsReportRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDomainStatisticsReportRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
