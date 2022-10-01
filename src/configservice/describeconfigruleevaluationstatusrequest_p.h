// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGRULEEVALUATIONSTATUSREQUEST_P_H
#define QTAWS_DESCRIBECONFIGRULEEVALUATIONSTATUSREQUEST_P_H

#include "configservicerequest_p.h"
#include "describeconfigruleevaluationstatusrequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeConfigRuleEvaluationStatusRequest;

class DescribeConfigRuleEvaluationStatusRequestPrivate : public ConfigServiceRequestPrivate {

public:
    DescribeConfigRuleEvaluationStatusRequestPrivate(const ConfigServiceRequest::Action action,
                                   DescribeConfigRuleEvaluationStatusRequest * const q);
    DescribeConfigRuleEvaluationStatusRequestPrivate(const DescribeConfigRuleEvaluationStatusRequestPrivate &other,
                                   DescribeConfigRuleEvaluationStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeConfigRuleEvaluationStatusRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
