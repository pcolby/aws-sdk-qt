// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINSTATISTICSREPORTREQUEST_H
#define QTAWS_GETDOMAINSTATISTICSREPORTREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class GetDomainStatisticsReportRequestPrivate;

class QTAWSSESV2_EXPORT GetDomainStatisticsReportRequest : public SESv2Request {

public:
    GetDomainStatisticsReportRequest(const GetDomainStatisticsReportRequest &other);
    GetDomainStatisticsReportRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDomainStatisticsReportRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
