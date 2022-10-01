// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAGGREGATECONFIGRULECOMPLIANCESUMMARYRESPONSE_H
#define QTAWS_GETAGGREGATECONFIGRULECOMPLIANCESUMMARYRESPONSE_H

#include "configserviceresponse.h"
#include "getaggregateconfigrulecompliancesummaryrequest.h"

namespace QtAws {
namespace ConfigService {

class GetAggregateConfigRuleComplianceSummaryResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT GetAggregateConfigRuleComplianceSummaryResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    GetAggregateConfigRuleComplianceSummaryResponse(const GetAggregateConfigRuleComplianceSummaryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAggregateConfigRuleComplianceSummaryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAggregateConfigRuleComplianceSummaryResponse)
    Q_DISABLE_COPY(GetAggregateConfigRuleComplianceSummaryResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
