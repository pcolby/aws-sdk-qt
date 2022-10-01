// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOMPLIANCEBYCONFIGRULERESPONSE_H
#define QTAWS_DESCRIBECOMPLIANCEBYCONFIGRULERESPONSE_H

#include "configserviceresponse.h"
#include "describecompliancebyconfigrulerequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeComplianceByConfigRuleResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT DescribeComplianceByConfigRuleResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    DescribeComplianceByConfigRuleResponse(const DescribeComplianceByConfigRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeComplianceByConfigRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeComplianceByConfigRuleResponse)
    Q_DISABLE_COPY(DescribeComplianceByConfigRuleResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
