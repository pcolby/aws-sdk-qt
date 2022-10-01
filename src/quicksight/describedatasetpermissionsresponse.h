// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASETPERMISSIONSRESPONSE_H
#define QTAWS_DESCRIBEDATASETPERMISSIONSRESPONSE_H

#include "quicksightresponse.h"
#include "describedatasetpermissionsrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeDataSetPermissionsResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT DescribeDataSetPermissionsResponse : public QuickSightResponse {
    Q_OBJECT

public:
    DescribeDataSetPermissionsResponse(const DescribeDataSetPermissionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDataSetPermissionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDataSetPermissionsResponse)
    Q_DISABLE_COPY(DescribeDataSetPermissionsResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
