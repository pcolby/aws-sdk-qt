// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENDPOINTTYPESREQUEST_P_H
#define QTAWS_DESCRIBEENDPOINTTYPESREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "describeendpointtypesrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeEndpointTypesRequest;

class DescribeEndpointTypesRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    DescribeEndpointTypesRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   DescribeEndpointTypesRequest * const q);
    DescribeEndpointTypesRequestPrivate(const DescribeEndpointTypesRequestPrivate &other,
                                   DescribeEndpointTypesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEndpointTypesRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
