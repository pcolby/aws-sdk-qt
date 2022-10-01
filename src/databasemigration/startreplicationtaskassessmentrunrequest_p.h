// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTREPLICATIONTASKASSESSMENTRUNREQUEST_P_H
#define QTAWS_STARTREPLICATIONTASKASSESSMENTRUNREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "startreplicationtaskassessmentrunrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class StartReplicationTaskAssessmentRunRequest;

class StartReplicationTaskAssessmentRunRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    StartReplicationTaskAssessmentRunRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   StartReplicationTaskAssessmentRunRequest * const q);
    StartReplicationTaskAssessmentRunRequestPrivate(const StartReplicationTaskAssessmentRunRequestPrivate &other,
                                   StartReplicationTaskAssessmentRunRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartReplicationTaskAssessmentRunRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
