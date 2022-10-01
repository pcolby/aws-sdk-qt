// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREFRESHSCHEMASSTATUSREQUEST_H
#define QTAWS_DESCRIBEREFRESHSCHEMASSTATUSREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeRefreshSchemasStatusRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT DescribeRefreshSchemasStatusRequest : public DatabaseMigrationRequest {

public:
    DescribeRefreshSchemasStatusRequest(const DescribeRefreshSchemasStatusRequest &other);
    DescribeRefreshSchemasStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRefreshSchemasStatusRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
