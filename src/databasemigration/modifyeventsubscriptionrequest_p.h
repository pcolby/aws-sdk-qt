// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYEVENTSUBSCRIPTIONREQUEST_P_H
#define QTAWS_MODIFYEVENTSUBSCRIPTIONREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "modifyeventsubscriptionrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class ModifyEventSubscriptionRequest;

class ModifyEventSubscriptionRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    ModifyEventSubscriptionRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   ModifyEventSubscriptionRequest * const q);
    ModifyEventSubscriptionRequestPrivate(const ModifyEventSubscriptionRequestPrivate &other,
                                   ModifyEventSubscriptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyEventSubscriptionRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
