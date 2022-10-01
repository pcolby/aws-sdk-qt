// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTNOTIFICATIONCONFIGURATIONREQUEST_P_H
#define QTAWS_PUTNOTIFICATIONCONFIGURATIONREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "putnotificationconfigurationrequest.h"

namespace QtAws {
namespace AutoScaling {

class PutNotificationConfigurationRequest;

class PutNotificationConfigurationRequestPrivate : public AutoScalingRequestPrivate {

public:
    PutNotificationConfigurationRequestPrivate(const AutoScalingRequest::Action action,
                                   PutNotificationConfigurationRequest * const q);
    PutNotificationConfigurationRequestPrivate(const PutNotificationConfigurationRequestPrivate &other,
                                   PutNotificationConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutNotificationConfigurationRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
