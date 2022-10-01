// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENOTIFICATIONRULEREQUEST_H
#define QTAWS_UPDATENOTIFICATIONRULEREQUEST_H

#include "codestarnotificationsrequest.h"

namespace QtAws {
namespace CodestarNotifications {

class UpdateNotificationRuleRequestPrivate;

class QTAWSCODESTARNOTIFICATIONS_EXPORT UpdateNotificationRuleRequest : public CodestarNotificationsRequest {

public:
    UpdateNotificationRuleRequest(const UpdateNotificationRuleRequest &other);
    UpdateNotificationRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateNotificationRuleRequest)

};

} // namespace CodestarNotifications
} // namespace QtAws

#endif
