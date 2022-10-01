// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELAUNCHCONFIGURATIONREQUEST_P_H
#define QTAWS_CREATELAUNCHCONFIGURATIONREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "createlaunchconfigurationrequest.h"

namespace QtAws {
namespace AutoScaling {

class CreateLaunchConfigurationRequest;

class CreateLaunchConfigurationRequestPrivate : public AutoScalingRequestPrivate {

public:
    CreateLaunchConfigurationRequestPrivate(const AutoScalingRequest::Action action,
                                   CreateLaunchConfigurationRequest * const q);
    CreateLaunchConfigurationRequestPrivate(const CreateLaunchConfigurationRequestPrivate &other,
                                   CreateLaunchConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLaunchConfigurationRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
