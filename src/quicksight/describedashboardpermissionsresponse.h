// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDASHBOARDPERMISSIONSRESPONSE_H
#define QTAWS_DESCRIBEDASHBOARDPERMISSIONSRESPONSE_H

#include "quicksightresponse.h"
#include "describedashboardpermissionsrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeDashboardPermissionsResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT DescribeDashboardPermissionsResponse : public QuickSightResponse {
    Q_OBJECT

public:
    DescribeDashboardPermissionsResponse(const DescribeDashboardPermissionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDashboardPermissionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDashboardPermissionsResponse)
    Q_DISABLE_COPY(DescribeDashboardPermissionsResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
