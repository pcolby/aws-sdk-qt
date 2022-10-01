// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETADVISORCOLLECTORSREQUEST_H
#define QTAWS_DESCRIBEFLEETADVISORCOLLECTORSREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeFleetAdvisorCollectorsRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT DescribeFleetAdvisorCollectorsRequest : public DatabaseMigrationRequest {

public:
    DescribeFleetAdvisorCollectorsRequest(const DescribeFleetAdvisorCollectorsRequest &other);
    DescribeFleetAdvisorCollectorsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFleetAdvisorCollectorsRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
