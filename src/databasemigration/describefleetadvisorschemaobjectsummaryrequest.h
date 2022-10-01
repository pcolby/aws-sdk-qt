// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETADVISORSCHEMAOBJECTSUMMARYREQUEST_H
#define QTAWS_DESCRIBEFLEETADVISORSCHEMAOBJECTSUMMARYREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeFleetAdvisorSchemaObjectSummaryRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT DescribeFleetAdvisorSchemaObjectSummaryRequest : public DatabaseMigrationRequest {

public:
    DescribeFleetAdvisorSchemaObjectSummaryRequest(const DescribeFleetAdvisorSchemaObjectSummaryRequest &other);
    DescribeFleetAdvisorSchemaObjectSummaryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFleetAdvisorSchemaObjectSummaryRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
