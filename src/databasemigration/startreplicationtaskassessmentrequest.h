// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTREPLICATIONTASKASSESSMENTREQUEST_H
#define QTAWS_STARTREPLICATIONTASKASSESSMENTREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class StartReplicationTaskAssessmentRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT StartReplicationTaskAssessmentRequest : public DatabaseMigrationRequest {

public:
    StartReplicationTaskAssessmentRequest(const StartReplicationTaskAssessmentRequest &other);
    StartReplicationTaskAssessmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartReplicationTaskAssessmentRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
