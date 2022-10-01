// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDASHBOARDPERMISSIONSREQUEST_H
#define QTAWS_UPDATEDASHBOARDPERMISSIONSREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateDashboardPermissionsRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT UpdateDashboardPermissionsRequest : public QuickSightRequest {

public:
    UpdateDashboardPermissionsRequest(const UpdateDashboardPermissionsRequest &other);
    UpdateDashboardPermissionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDashboardPermissionsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
