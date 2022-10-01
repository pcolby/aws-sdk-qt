// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPLICATIONTASKASSESSMENTRUNREQUEST_P_H
#define QTAWS_DELETEREPLICATIONTASKASSESSMENTRUNREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "deletereplicationtaskassessmentrunrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DeleteReplicationTaskAssessmentRunRequest;

class DeleteReplicationTaskAssessmentRunRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    DeleteReplicationTaskAssessmentRunRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   DeleteReplicationTaskAssessmentRunRequest * const q);
    DeleteReplicationTaskAssessmentRunRequestPrivate(const DeleteReplicationTaskAssessmentRunRequestPrivate &other,
                                   DeleteReplicationTaskAssessmentRunRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteReplicationTaskAssessmentRunRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
