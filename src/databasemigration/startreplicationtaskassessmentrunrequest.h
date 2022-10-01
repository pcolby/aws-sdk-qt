// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTREPLICATIONTASKASSESSMENTRUNREQUEST_H
#define QTAWS_STARTREPLICATIONTASKASSESSMENTRUNREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class StartReplicationTaskAssessmentRunRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT StartReplicationTaskAssessmentRunRequest : public DatabaseMigrationRequest {

public:
    StartReplicationTaskAssessmentRunRequest(const StartReplicationTaskAssessmentRunRequest &other);
    StartReplicationTaskAssessmentRunRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartReplicationTaskAssessmentRunRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
