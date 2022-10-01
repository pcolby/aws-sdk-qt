// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTREPLICATIONTASKASSESSMENTRESPONSE_P_H
#define QTAWS_STARTREPLICATIONTASKASSESSMENTRESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class StartReplicationTaskAssessmentResponse;

class StartReplicationTaskAssessmentResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit StartReplicationTaskAssessmentResponsePrivate(StartReplicationTaskAssessmentResponse * const q);

    void parseStartReplicationTaskAssessmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartReplicationTaskAssessmentResponse)
    Q_DISABLE_COPY(StartReplicationTaskAssessmentResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
