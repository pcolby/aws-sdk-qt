// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATASOURCEPERMISSIONSREQUEST_P_H
#define QTAWS_UPDATEDATASOURCEPERMISSIONSREQUEST_P_H

#include "quicksightrequest_p.h"
#include "updatedatasourcepermissionsrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateDataSourcePermissionsRequest;

class UpdateDataSourcePermissionsRequestPrivate : public QuickSightRequestPrivate {

public:
    UpdateDataSourcePermissionsRequestPrivate(const QuickSightRequest::Action action,
                                   UpdateDataSourcePermissionsRequest * const q);
    UpdateDataSourcePermissionsRequestPrivate(const UpdateDataSourcePermissionsRequestPrivate &other,
                                   UpdateDataSourcePermissionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDataSourcePermissionsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
