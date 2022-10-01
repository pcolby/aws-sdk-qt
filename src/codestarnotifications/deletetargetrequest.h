// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETARGETREQUEST_H
#define QTAWS_DELETETARGETREQUEST_H

#include "codestarnotificationsrequest.h"

namespace QtAws {
namespace CodestarNotifications {

class DeleteTargetRequestPrivate;

class QTAWSCODESTARNOTIFICATIONS_EXPORT DeleteTargetRequest : public CodestarNotificationsRequest {

public:
    DeleteTargetRequest(const DeleteTargetRequest &other);
    DeleteTargetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTargetRequest)

};

} // namespace CodestarNotifications
} // namespace QtAws

#endif
