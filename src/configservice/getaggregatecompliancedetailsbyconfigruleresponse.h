// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAGGREGATECOMPLIANCEDETAILSBYCONFIGRULERESPONSE_H
#define QTAWS_GETAGGREGATECOMPLIANCEDETAILSBYCONFIGRULERESPONSE_H

#include "configserviceresponse.h"
#include "getaggregatecompliancedetailsbyconfigrulerequest.h"

namespace QtAws {
namespace ConfigService {

class GetAggregateComplianceDetailsByConfigRuleResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT GetAggregateComplianceDetailsByConfigRuleResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    GetAggregateComplianceDetailsByConfigRuleResponse(const GetAggregateComplianceDetailsByConfigRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAggregateComplianceDetailsByConfigRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAggregateComplianceDetailsByConfigRuleResponse)
    Q_DISABLE_COPY(GetAggregateComplianceDetailsByConfigRuleResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
