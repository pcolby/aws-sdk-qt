// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFLEETADVISORCOLLECTORREQUEST_P_H
#define QTAWS_CREATEFLEETADVISORCOLLECTORREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "createfleetadvisorcollectorrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class CreateFleetAdvisorCollectorRequest;

class CreateFleetAdvisorCollectorRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    CreateFleetAdvisorCollectorRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   CreateFleetAdvisorCollectorRequest * const q);
    CreateFleetAdvisorCollectorRequestPrivate(const CreateFleetAdvisorCollectorRequestPrivate &other,
                                   CreateFleetAdvisorCollectorRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateFleetAdvisorCollectorRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
