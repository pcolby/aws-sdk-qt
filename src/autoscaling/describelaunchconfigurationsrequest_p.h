// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELAUNCHCONFIGURATIONSREQUEST_P_H
#define QTAWS_DESCRIBELAUNCHCONFIGURATIONSREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "describelaunchconfigurationsrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeLaunchConfigurationsRequest;

class DescribeLaunchConfigurationsRequestPrivate : public AutoScalingRequestPrivate {

public:
    DescribeLaunchConfigurationsRequestPrivate(const AutoScalingRequest::Action action,
                                   DescribeLaunchConfigurationsRequest * const q);
    DescribeLaunchConfigurationsRequestPrivate(const DescribeLaunchConfigurationsRequestPrivate &other,
                                   DescribeLaunchConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLaunchConfigurationsRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
