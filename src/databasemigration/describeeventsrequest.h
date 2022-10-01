// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTSREQUEST_H
#define QTAWS_DESCRIBEEVENTSREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeEventsRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT DescribeEventsRequest : public DatabaseMigrationRequest {

public:
    DescribeEventsRequest(const DescribeEventsRequest &other);
    DescribeEventsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEventsRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
