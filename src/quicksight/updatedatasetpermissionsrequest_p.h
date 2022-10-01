// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATASETPERMISSIONSREQUEST_P_H
#define QTAWS_UPDATEDATASETPERMISSIONSREQUEST_P_H

#include "quicksightrequest_p.h"
#include "updatedatasetpermissionsrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateDataSetPermissionsRequest;

class UpdateDataSetPermissionsRequestPrivate : public QuickSightRequestPrivate {

public:
    UpdateDataSetPermissionsRequestPrivate(const QuickSightRequest::Action action,
                                   UpdateDataSetPermissionsRequest * const q);
    UpdateDataSetPermissionsRequestPrivate(const UpdateDataSetPermissionsRequestPrivate &other,
                                   UpdateDataSetPermissionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDataSetPermissionsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
