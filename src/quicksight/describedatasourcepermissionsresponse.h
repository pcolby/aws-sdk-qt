// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASOURCEPERMISSIONSRESPONSE_H
#define QTAWS_DESCRIBEDATASOURCEPERMISSIONSRESPONSE_H

#include "quicksightresponse.h"
#include "describedatasourcepermissionsrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeDataSourcePermissionsResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT DescribeDataSourcePermissionsResponse : public QuickSightResponse {
    Q_OBJECT

public:
    DescribeDataSourcePermissionsResponse(const DescribeDataSourcePermissionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDataSourcePermissionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDataSourcePermissionsResponse)
    Q_DISABLE_COPY(DescribeDataSourcePermissionsResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
