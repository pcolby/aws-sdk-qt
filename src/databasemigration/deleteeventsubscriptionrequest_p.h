// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTSUBSCRIPTIONREQUEST_P_H
#define QTAWS_DELETEEVENTSUBSCRIPTIONREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "deleteeventsubscriptionrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DeleteEventSubscriptionRequest;

class DeleteEventSubscriptionRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    DeleteEventSubscriptionRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   DeleteEventSubscriptionRequest * const q);
    DeleteEventSubscriptionRequestPrivate(const DeleteEventSubscriptionRequestPrivate &other,
                                   DeleteEventSubscriptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteEventSubscriptionRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
