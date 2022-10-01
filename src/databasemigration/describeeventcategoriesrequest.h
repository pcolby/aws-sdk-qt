// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTCATEGORIESREQUEST_H
#define QTAWS_DESCRIBEEVENTCATEGORIESREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeEventCategoriesRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT DescribeEventCategoriesRequest : public DatabaseMigrationRequest {

public:
    DescribeEventCategoriesRequest(const DescribeEventCategoriesRequest &other);
    DescribeEventCategoriesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEventCategoriesRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
