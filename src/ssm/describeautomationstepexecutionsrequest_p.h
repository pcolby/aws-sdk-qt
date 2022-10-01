// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUTOMATIONSTEPEXECUTIONSREQUEST_P_H
#define QTAWS_DESCRIBEAUTOMATIONSTEPEXECUTIONSREQUEST_P_H

#include "ssmrequest_p.h"
#include "describeautomationstepexecutionsrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeAutomationStepExecutionsRequest;

class DescribeAutomationStepExecutionsRequestPrivate : public SsmRequestPrivate {

public:
    DescribeAutomationStepExecutionsRequestPrivate(const SsmRequest::Action action,
                                   DescribeAutomationStepExecutionsRequest * const q);
    DescribeAutomationStepExecutionsRequestPrivate(const DescribeAutomationStepExecutionsRequestPrivate &other,
                                   DescribeAutomationStepExecutionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAutomationStepExecutionsRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
