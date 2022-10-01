// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELAUNCHCONFIGURATIONREQUEST_P_H
#define QTAWS_DELETELAUNCHCONFIGURATIONREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "deletelaunchconfigurationrequest.h"

namespace QtAws {
namespace AutoScaling {

class DeleteLaunchConfigurationRequest;

class DeleteLaunchConfigurationRequestPrivate : public AutoScalingRequestPrivate {

public:
    DeleteLaunchConfigurationRequestPrivate(const AutoScalingRequest::Action action,
                                   DeleteLaunchConfigurationRequest * const q);
    DeleteLaunchConfigurationRequestPrivate(const DeleteLaunchConfigurationRequestPrivate &other,
                                   DeleteLaunchConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteLaunchConfigurationRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
