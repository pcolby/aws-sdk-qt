// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENOTIFICATIONRULEREQUEST_H
#define QTAWS_DELETENOTIFICATIONRULEREQUEST_H

#include "codestarnotificationsrequest.h"

namespace QtAws {
namespace CodestarNotifications {

class DeleteNotificationRuleRequestPrivate;

class QTAWSCODESTARNOTIFICATIONS_EXPORT DeleteNotificationRuleRequest : public CodestarNotificationsRequest {

public:
    DeleteNotificationRuleRequest(const DeleteNotificationRuleRequest &other);
    DeleteNotificationRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteNotificationRuleRequest)

};

} // namespace CodestarNotifications
} // namespace QtAws

#endif
