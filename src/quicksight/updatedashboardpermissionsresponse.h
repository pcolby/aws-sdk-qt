// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDASHBOARDPERMISSIONSRESPONSE_H
#define QTAWS_UPDATEDASHBOARDPERMISSIONSRESPONSE_H

#include "quicksightresponse.h"
#include "updatedashboardpermissionsrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateDashboardPermissionsResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT UpdateDashboardPermissionsResponse : public QuickSightResponse {
    Q_OBJECT

public:
    UpdateDashboardPermissionsResponse(const UpdateDashboardPermissionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDashboardPermissionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDashboardPermissionsResponse)
    Q_DISABLE_COPY(UpdateDashboardPermissionsResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
