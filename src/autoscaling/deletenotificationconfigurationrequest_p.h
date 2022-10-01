// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENOTIFICATIONCONFIGURATIONREQUEST_P_H
#define QTAWS_DELETENOTIFICATIONCONFIGURATIONREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "deletenotificationconfigurationrequest.h"

namespace QtAws {
namespace AutoScaling {

class DeleteNotificationConfigurationRequest;

class DeleteNotificationConfigurationRequestPrivate : public AutoScalingRequestPrivate {

public:
    DeleteNotificationConfigurationRequestPrivate(const AutoScalingRequest::Action action,
                                   DeleteNotificationConfigurationRequest * const q);
    DeleteNotificationConfigurationRequestPrivate(const DeleteNotificationConfigurationRequestPrivate &other,
                                   DeleteNotificationConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteNotificationConfigurationRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
