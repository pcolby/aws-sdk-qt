// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOMPLIANCEBYCONFIGRULEREQUEST_P_H
#define QTAWS_DESCRIBECOMPLIANCEBYCONFIGRULEREQUEST_P_H

#include "configservicerequest_p.h"
#include "describecompliancebyconfigrulerequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeComplianceByConfigRuleRequest;

class DescribeComplianceByConfigRuleRequestPrivate : public ConfigServiceRequestPrivate {

public:
    DescribeComplianceByConfigRuleRequestPrivate(const ConfigServiceRequest::Action action,
                                   DescribeComplianceByConfigRuleRequest * const q);
    DescribeComplianceByConfigRuleRequestPrivate(const DescribeComplianceByConfigRuleRequestPrivate &other,
                                   DescribeComplianceByConfigRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeComplianceByConfigRuleRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
