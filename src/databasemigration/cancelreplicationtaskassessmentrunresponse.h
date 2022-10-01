// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELREPLICATIONTASKASSESSMENTRUNRESPONSE_H
#define QTAWS_CANCELREPLICATIONTASKASSESSMENTRUNRESPONSE_H

#include "databasemigrationresponse.h"
#include "cancelreplicationtaskassessmentrunrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class CancelReplicationTaskAssessmentRunResponsePrivate;

class QTAWSDATABASEMIGRATION_EXPORT CancelReplicationTaskAssessmentRunResponse : public DatabaseMigrationResponse {
    Q_OBJECT

public:
    CancelReplicationTaskAssessmentRunResponse(const CancelReplicationTaskAssessmentRunRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelReplicationTaskAssessmentRunRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelReplicationTaskAssessmentRunResponse)
    Q_DISABLE_COPY(CancelReplicationTaskAssessmentRunResponse)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
