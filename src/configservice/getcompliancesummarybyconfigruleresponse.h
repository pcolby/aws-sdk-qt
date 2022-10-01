// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPLIANCESUMMARYBYCONFIGRULERESPONSE_H
#define QTAWS_GETCOMPLIANCESUMMARYBYCONFIGRULERESPONSE_H

#include "configserviceresponse.h"
#include "getcompliancesummarybyconfigrulerequest.h"

namespace QtAws {
namespace ConfigService {

class GetComplianceSummaryByConfigRuleResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT GetComplianceSummaryByConfigRuleResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    GetComplianceSummaryByConfigRuleResponse(const GetComplianceSummaryByConfigRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetComplianceSummaryByConfigRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetComplianceSummaryByConfigRuleResponse)
    Q_DISABLE_COPY(GetComplianceSummaryByConfigRuleResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
