// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONFORMANCEPACKCOMPLIANCEDETAILSRESPONSE_H
#define QTAWS_GETCONFORMANCEPACKCOMPLIANCEDETAILSRESPONSE_H

#include "configserviceresponse.h"
#include "getconformancepackcompliancedetailsrequest.h"

namespace QtAws {
namespace ConfigService {

class GetConformancePackComplianceDetailsResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT GetConformancePackComplianceDetailsResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    GetConformancePackComplianceDetailsResponse(const GetConformancePackComplianceDetailsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetConformancePackComplianceDetailsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetConformancePackComplianceDetailsResponse)
    Q_DISABLE_COPY(GetConformancePackComplianceDetailsResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
