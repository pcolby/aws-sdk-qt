// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENDPOINTSETTINGSREQUEST_H
#define QTAWS_DESCRIBEENDPOINTSETTINGSREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeEndpointSettingsRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT DescribeEndpointSettingsRequest : public DatabaseMigrationRequest {

public:
    DescribeEndpointSettingsRequest(const DescribeEndpointSettingsRequest &other);
    DescribeEndpointSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEndpointSettingsRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
