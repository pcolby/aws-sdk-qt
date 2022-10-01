// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLICATIONTASKINDIVIDUALASSESSMENTSREQUEST_H
#define QTAWS_DESCRIBEREPLICATIONTASKINDIVIDUALASSESSMENTSREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeReplicationTaskIndividualAssessmentsRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT DescribeReplicationTaskIndividualAssessmentsRequest : public DatabaseMigrationRequest {

public:
    DescribeReplicationTaskIndividualAssessmentsRequest(const DescribeReplicationTaskIndividualAssessmentsRequest &other);
    DescribeReplicationTaskIndividualAssessmentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReplicationTaskIndividualAssessmentsRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
