// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPLICATIONTASKASSESSMENTRUNRESPONSE_P_H
#define QTAWS_DELETEREPLICATIONTASKASSESSMENTRUNRESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class DeleteReplicationTaskAssessmentRunResponse;

class DeleteReplicationTaskAssessmentRunResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit DeleteReplicationTaskAssessmentRunResponsePrivate(DeleteReplicationTaskAssessmentRunResponse * const q);

    void parseDeleteReplicationTaskAssessmentRunResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteReplicationTaskAssessmentRunResponse)
    Q_DISABLE_COPY(DeleteReplicationTaskAssessmentRunResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
