// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINSTATISTICSREPORTREQUEST_H
#define QTAWS_GETDOMAINSTATISTICSREPORTREQUEST_H

#include "pinpointemailrequest.h"

namespace QtAws {
namespace PinpointEmail {

class GetDomainStatisticsReportRequestPrivate;

class QTAWSPINPOINTEMAIL_EXPORT GetDomainStatisticsReportRequest : public PinpointEmailRequest {

public:
    GetDomainStatisticsReportRequest(const GetDomainStatisticsReportRequest &other);
    GetDomainStatisticsReportRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDomainStatisticsReportRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
