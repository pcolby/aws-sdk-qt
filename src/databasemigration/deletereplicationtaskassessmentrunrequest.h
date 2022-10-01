// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPLICATIONTASKASSESSMENTRUNREQUEST_H
#define QTAWS_DELETEREPLICATIONTASKASSESSMENTRUNREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DeleteReplicationTaskAssessmentRunRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT DeleteReplicationTaskAssessmentRunRequest : public DatabaseMigrationRequest {

public:
    DeleteReplicationTaskAssessmentRunRequest(const DeleteReplicationTaskAssessmentRunRequest &other);
    DeleteReplicationTaskAssessmentRunRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteReplicationTaskAssessmentRunRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
