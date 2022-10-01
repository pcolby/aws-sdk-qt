// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNOTIFICATIONSREQUEST_H
#define QTAWS_LISTNOTIFICATIONSREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class ListNotificationsRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT ListNotificationsRequest : public AuditManagerRequest {

public:
    ListNotificationsRequest(const ListNotificationsRequest &other);
    ListNotificationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListNotificationsRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
