// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENOTIFICATIONCONFIGURATIONREQUEST_P_H
#define QTAWS_UPDATENOTIFICATIONCONFIGURATIONREQUEST_P_H

#include "kinesisvideorequest_p.h"
#include "updatenotificationconfigurationrequest.h"

namespace QtAws {
namespace KinesisVideo {

class UpdateNotificationConfigurationRequest;

class UpdateNotificationConfigurationRequestPrivate : public KinesisVideoRequestPrivate {

public:
    UpdateNotificationConfigurationRequestPrivate(const KinesisVideoRequest::Action action,
                                   UpdateNotificationConfigurationRequest * const q);
    UpdateNotificationConfigurationRequestPrivate(const UpdateNotificationConfigurationRequestPrivate &other,
                                   UpdateNotificationConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateNotificationConfigurationRequest)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
