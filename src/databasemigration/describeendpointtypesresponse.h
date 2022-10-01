// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENDPOINTTYPESRESPONSE_H
#define QTAWS_DESCRIBEENDPOINTTYPESRESPONSE_H

#include "databasemigrationresponse.h"
#include "describeendpointtypesrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeEndpointTypesResponsePrivate;

class QTAWSDATABASEMIGRATION_EXPORT DescribeEndpointTypesResponse : public DatabaseMigrationResponse {
    Q_OBJECT

public:
    DescribeEndpointTypesResponse(const DescribeEndpointTypesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEndpointTypesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEndpointTypesResponse)
    Q_DISABLE_COPY(DescribeEndpointTypesResponse)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
