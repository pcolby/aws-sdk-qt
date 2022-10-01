// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFLEETADVISORCOLLECTORREQUEST_P_H
#define QTAWS_DELETEFLEETADVISORCOLLECTORREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "deletefleetadvisorcollectorrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DeleteFleetAdvisorCollectorRequest;

class DeleteFleetAdvisorCollectorRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    DeleteFleetAdvisorCollectorRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   DeleteFleetAdvisorCollectorRequest * const q);
    DeleteFleetAdvisorCollectorRequestPrivate(const DeleteFleetAdvisorCollectorRequestPrivate &other,
                                   DeleteFleetAdvisorCollectorRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFleetAdvisorCollectorRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
