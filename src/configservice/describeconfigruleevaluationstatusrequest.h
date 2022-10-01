// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGRULEEVALUATIONSTATUSREQUEST_H
#define QTAWS_DESCRIBECONFIGRULEEVALUATIONSTATUSREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeConfigRuleEvaluationStatusRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT DescribeConfigRuleEvaluationStatusRequest : public ConfigServiceRequest {

public:
    DescribeConfigRuleEvaluationStatusRequest(const DescribeConfigRuleEvaluationStatusRequest &other);
    DescribeConfigRuleEvaluationStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConfigRuleEvaluationStatusRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
