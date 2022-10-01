// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTREPLICATIONTASKASSESSMENTREQUEST_P_H
#define QTAWS_STARTREPLICATIONTASKASSESSMENTREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "startreplicationtaskassessmentrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class StartReplicationTaskAssessmentRequest;

class StartReplicationTaskAssessmentRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    StartReplicationTaskAssessmentRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   StartReplicationTaskAssessmentRequest * const q);
    StartReplicationTaskAssessmentRequestPrivate(const StartReplicationTaskAssessmentRequestPrivate &other,
                                   StartReplicationTaskAssessmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartReplicationTaskAssessmentRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
