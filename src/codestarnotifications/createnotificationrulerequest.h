// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENOTIFICATIONRULEREQUEST_H
#define QTAWS_CREATENOTIFICATIONRULEREQUEST_H

#include "codestarnotificationsrequest.h"

namespace QtAws {
namespace CodestarNotifications {

class CreateNotificationRuleRequestPrivate;

class QTAWSCODESTARNOTIFICATIONS_EXPORT CreateNotificationRuleRequest : public CodestarNotificationsRequest {

public:
    CreateNotificationRuleRequest(const CreateNotificationRuleRequest &other);
    CreateNotificationRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateNotificationRuleRequest)

};

} // namespace CodestarNotifications
} // namespace QtAws

#endif
