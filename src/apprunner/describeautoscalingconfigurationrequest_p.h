// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUTOSCALINGCONFIGURATIONREQUEST_P_H
#define QTAWS_DESCRIBEAUTOSCALINGCONFIGURATIONREQUEST_P_H

#include "apprunnerrequest_p.h"
#include "describeautoscalingconfigurationrequest.h"

namespace QtAws {
namespace AppRunner {

class DescribeAutoScalingConfigurationRequest;

class DescribeAutoScalingConfigurationRequestPrivate : public AppRunnerRequestPrivate {

public:
    DescribeAutoScalingConfigurationRequestPrivate(const AppRunnerRequest::Action action,
                                   DescribeAutoScalingConfigurationRequest * const q);
    DescribeAutoScalingConfigurationRequestPrivate(const DescribeAutoScalingConfigurationRequestPrivate &other,
                                   DescribeAutoScalingConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAutoScalingConfigurationRequest)

};

} // namespace AppRunner
} // namespace QtAws

#endif
