// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFOLDERPERMISSIONSREQUEST_P_H
#define QTAWS_UPDATEFOLDERPERMISSIONSREQUEST_P_H

#include "quicksightrequest_p.h"
#include "updatefolderpermissionsrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateFolderPermissionsRequest;

class UpdateFolderPermissionsRequestPrivate : public QuickSightRequestPrivate {

public:
    UpdateFolderPermissionsRequestPrivate(const QuickSightRequest::Action action,
                                   UpdateFolderPermissionsRequest * const q);
    UpdateFolderPermissionsRequestPrivate(const UpdateFolderPermissionsRequestPrivate &other,
                                   UpdateFolderPermissionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateFolderPermissionsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
