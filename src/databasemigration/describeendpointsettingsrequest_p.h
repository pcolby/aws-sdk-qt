// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENDPOINTSETTINGSREQUEST_P_H
#define QTAWS_DESCRIBEENDPOINTSETTINGSREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "describeendpointsettingsrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeEndpointSettingsRequest;

class DescribeEndpointSettingsRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    DescribeEndpointSettingsRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   DescribeEndpointSettingsRequest * const q);
    DescribeEndpointSettingsRequestPrivate(const DescribeEndpointSettingsRequestPrivate &other,
                                   DescribeEndpointSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEndpointSettingsRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
