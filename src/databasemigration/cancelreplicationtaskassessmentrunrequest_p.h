// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELREPLICATIONTASKASSESSMENTRUNREQUEST_P_H
#define QTAWS_CANCELREPLICATIONTASKASSESSMENTRUNREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "cancelreplicationtaskassessmentrunrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class CancelReplicationTaskAssessmentRunRequest;

class CancelReplicationTaskAssessmentRunRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    CancelReplicationTaskAssessmentRunRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   CancelReplicationTaskAssessmentRunRequest * const q);
    CancelReplicationTaskAssessmentRunRequestPrivate(const CancelReplicationTaskAssessmentRunRequestPrivate &other,
                                   CancelReplicationTaskAssessmentRunRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelReplicationTaskAssessmentRunRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
