// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENOTIFICATIONSETTINGSREQUEST_P_H
#define QTAWS_UPDATENOTIFICATIONSETTINGSREQUEST_P_H

#include "mturkrequest_p.h"
#include "updatenotificationsettingsrequest.h"

namespace QtAws {
namespace MTurk {

class UpdateNotificationSettingsRequest;

class UpdateNotificationSettingsRequestPrivate : public MTurkRequestPrivate {

public:
    UpdateNotificationSettingsRequestPrivate(const MTurkRequest::Action action,
                                   UpdateNotificationSettingsRequest * const q);
    UpdateNotificationSettingsRequestPrivate(const UpdateNotificationSettingsRequestPrivate &other,
                                   UpdateNotificationSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateNotificationSettingsRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
