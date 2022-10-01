// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTREPLICATIONTASKASSESSMENTRESPONSE_H
#define QTAWS_STARTREPLICATIONTASKASSESSMENTRESPONSE_H

#include "databasemigrationresponse.h"
#include "startreplicationtaskassessmentrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class StartReplicationTaskAssessmentResponsePrivate;

class QTAWSDATABASEMIGRATION_EXPORT StartReplicationTaskAssessmentResponse : public DatabaseMigrationResponse {
    Q_OBJECT

public:
    StartReplicationTaskAssessmentResponse(const StartReplicationTaskAssessmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartReplicationTaskAssessmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartReplicationTaskAssessmentResponse)
    Q_DISABLE_COPY(StartReplicationTaskAssessmentResponse)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
