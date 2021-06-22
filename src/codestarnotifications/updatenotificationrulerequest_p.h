/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_UPDATENOTIFICATIONRULEREQUEST_P_H
#define QTAWS_UPDATENOTIFICATIONRULEREQUEST_P_H

#include "codestarnotificationsrequest_p.h"
#include "updatenotificationrulerequest.h"

namespace QtAws {
namespace CodeStarNotifications {

class UpdateNotificationRuleRequest;

class UpdateNotificationRuleRequestPrivate : public CodeStarNotificationsRequestPrivate {

public:
    UpdateNotificationRuleRequestPrivate(const CodeStarNotificationsRequest::Action action,
                                   UpdateNotificationRuleRequest * const q);
    UpdateNotificationRuleRequestPrivate(const UpdateNotificationRuleRequestPrivate &other,
                                   UpdateNotificationRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateNotificationRuleRequest)

};

} // namespace CodeStarNotifications
} // namespace QtAws

#endif
