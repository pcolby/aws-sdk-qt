// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUTOMATIONEXECUTIONSREQUEST_P_H
#define QTAWS_DESCRIBEAUTOMATIONEXECUTIONSREQUEST_P_H

#include "ssmrequest_p.h"
#include "describeautomationexecutionsrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeAutomationExecutionsRequest;

class DescribeAutomationExecutionsRequestPrivate : public SsmRequestPrivate {

public:
    DescribeAutomationExecutionsRequestPrivate(const SsmRequest::Action action,
                                   DescribeAutomationExecutionsRequest * const q);
    DescribeAutomationExecutionsRequestPrivate(const DescribeAutomationExecutionsRequestPrivate &other,
                                   DescribeAutomationExecutionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAutomationExecutionsRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
