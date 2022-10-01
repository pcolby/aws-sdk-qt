// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NOTIFYMIGRATIONTASKSTATEREQUEST_P_H
#define QTAWS_NOTIFYMIGRATIONTASKSTATEREQUEST_P_H

#include "migrationhubrequest_p.h"
#include "notifymigrationtaskstaterequest.h"

namespace QtAws {
namespace MigrationHub {

class NotifyMigrationTaskStateRequest;

class NotifyMigrationTaskStateRequestPrivate : public MigrationHubRequestPrivate {

public:
    NotifyMigrationTaskStateRequestPrivate(const MigrationHubRequest::Action action,
                                   NotifyMigrationTaskStateRequest * const q);
    NotifyMigrationTaskStateRequestPrivate(const NotifyMigrationTaskStateRequestPrivate &other,
                                   NotifyMigrationTaskStateRequest * const q);

private:
    Q_DECLARE_PUBLIC(NotifyMigrationTaskStateRequest)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
