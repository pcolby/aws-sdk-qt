// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPLICATIONTASKASSESSMENTRUNRESPONSE_H
#define QTAWS_DELETEREPLICATIONTASKASSESSMENTRUNRESPONSE_H

#include "databasemigrationresponse.h"
#include "deletereplicationtaskassessmentrunrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DeleteReplicationTaskAssessmentRunResponsePrivate;

class QTAWSDATABASEMIGRATION_EXPORT DeleteReplicationTaskAssessmentRunResponse : public DatabaseMigrationResponse {
    Q_OBJECT

public:
    DeleteReplicationTaskAssessmentRunResponse(const DeleteReplicationTaskAssessmentRunRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteReplicationTaskAssessmentRunRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteReplicationTaskAssessmentRunResponse)
    Q_DISABLE_COPY(DeleteReplicationTaskAssessmentRunResponse)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
