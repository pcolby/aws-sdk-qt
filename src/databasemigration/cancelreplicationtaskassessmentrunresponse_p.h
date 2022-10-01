// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELREPLICATIONTASKASSESSMENTRUNRESPONSE_P_H
#define QTAWS_CANCELREPLICATIONTASKASSESSMENTRUNRESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class CancelReplicationTaskAssessmentRunResponse;

class CancelReplicationTaskAssessmentRunResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit CancelReplicationTaskAssessmentRunResponsePrivate(CancelReplicationTaskAssessmentRunResponse * const q);

    void parseCancelReplicationTaskAssessmentRunResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelReplicationTaskAssessmentRunResponse)
    Q_DISABLE_COPY(CancelReplicationTaskAssessmentRunResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
