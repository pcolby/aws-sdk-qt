// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAGGREGATECOMPLIANCEBYCONFIGRULESRESPONSE_H
#define QTAWS_DESCRIBEAGGREGATECOMPLIANCEBYCONFIGRULESRESPONSE_H

#include "configserviceresponse.h"
#include "describeaggregatecompliancebyconfigrulesrequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeAggregateComplianceByConfigRulesResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT DescribeAggregateComplianceByConfigRulesResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    DescribeAggregateComplianceByConfigRulesResponse(const DescribeAggregateComplianceByConfigRulesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAggregateComplianceByConfigRulesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAggregateComplianceByConfigRulesResponse)
    Q_DISABLE_COPY(DescribeAggregateComplianceByConfigRulesResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
