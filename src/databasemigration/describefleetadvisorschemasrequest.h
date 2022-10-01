// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETADVISORSCHEMASREQUEST_H
#define QTAWS_DESCRIBEFLEETADVISORSCHEMASREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeFleetAdvisorSchemasRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT DescribeFleetAdvisorSchemasRequest : public DatabaseMigrationRequest {

public:
    DescribeFleetAdvisorSchemasRequest(const DescribeFleetAdvisorSchemasRequest &other);
    DescribeFleetAdvisorSchemasRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFleetAdvisorSchemasRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
