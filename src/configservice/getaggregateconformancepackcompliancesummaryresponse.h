// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAGGREGATECONFORMANCEPACKCOMPLIANCESUMMARYRESPONSE_H
#define QTAWS_GETAGGREGATECONFORMANCEPACKCOMPLIANCESUMMARYRESPONSE_H

#include "configserviceresponse.h"
#include "getaggregateconformancepackcompliancesummaryrequest.h"

namespace QtAws {
namespace ConfigService {

class GetAggregateConformancePackComplianceSummaryResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT GetAggregateConformancePackComplianceSummaryResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    GetAggregateConformancePackComplianceSummaryResponse(const GetAggregateConformancePackComplianceSummaryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAggregateConformancePackComplianceSummaryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAggregateConformancePackComplianceSummaryResponse)
    Q_DISABLE_COPY(GetAggregateConformancePackComplianceSummaryResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
