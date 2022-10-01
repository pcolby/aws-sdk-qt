// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENDPOINTSETTINGSRESPONSE_H
#define QTAWS_DESCRIBEENDPOINTSETTINGSRESPONSE_H

#include "databasemigrationresponse.h"
#include "describeendpointsettingsrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeEndpointSettingsResponsePrivate;

class QTAWSDATABASEMIGRATION_EXPORT DescribeEndpointSettingsResponse : public DatabaseMigrationResponse {
    Q_OBJECT

public:
    DescribeEndpointSettingsResponse(const DescribeEndpointSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEndpointSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEndpointSettingsResponse)
    Q_DISABLE_COPY(DescribeEndpointSettingsResponse)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
