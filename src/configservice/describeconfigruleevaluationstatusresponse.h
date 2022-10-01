// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGRULEEVALUATIONSTATUSRESPONSE_H
#define QTAWS_DESCRIBECONFIGRULEEVALUATIONSTATUSRESPONSE_H

#include "configserviceresponse.h"
#include "describeconfigruleevaluationstatusrequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeConfigRuleEvaluationStatusResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT DescribeConfigRuleEvaluationStatusResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    DescribeConfigRuleEvaluationStatusResponse(const DescribeConfigRuleEvaluationStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeConfigRuleEvaluationStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConfigRuleEvaluationStatusResponse)
    Q_DISABLE_COPY(DescribeConfigRuleEvaluationStatusResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
