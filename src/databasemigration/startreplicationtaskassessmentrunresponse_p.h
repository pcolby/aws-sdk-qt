// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTREPLICATIONTASKASSESSMENTRUNRESPONSE_P_H
#define QTAWS_STARTREPLICATIONTASKASSESSMENTRUNRESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class StartReplicationTaskAssessmentRunResponse;

class StartReplicationTaskAssessmentRunResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit StartReplicationTaskAssessmentRunResponsePrivate(StartReplicationTaskAssessmentRunResponse * const q);

    void parseStartReplicationTaskAssessmentRunResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartReplicationTaskAssessmentRunResponse)
    Q_DISABLE_COPY(StartReplicationTaskAssessmentRunResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
