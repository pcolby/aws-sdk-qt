// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESUBSCRIPTIONSTOEVENTBRIDGEREQUEST_P_H
#define QTAWS_UPDATESUBSCRIPTIONSTOEVENTBRIDGEREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "updatesubscriptionstoeventbridgerequest.h"

namespace QtAws {
namespace DatabaseMigration {

class UpdateSubscriptionsToEventBridgeRequest;

class UpdateSubscriptionsToEventBridgeRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    UpdateSubscriptionsToEventBridgeRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   UpdateSubscriptionsToEventBridgeRequest * const q);
    UpdateSubscriptionsToEventBridgeRequestPrivate(const UpdateSubscriptionsToEventBridgeRequestPrivate &other,
                                   UpdateSubscriptionsToEventBridgeRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSubscriptionsToEventBridgeRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
