// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWORKSPACEIMAGEPERMISSIONREQUEST_P_H
#define QTAWS_UPDATEWORKSPACEIMAGEPERMISSIONREQUEST_P_H

#include "workspacesrequest_p.h"
#include "updateworkspaceimagepermissionrequest.h"

namespace QtAws {
namespace WorkSpaces {

class UpdateWorkspaceImagePermissionRequest;

class UpdateWorkspaceImagePermissionRequestPrivate : public WorkSpacesRequestPrivate {

public:
    UpdateWorkspaceImagePermissionRequestPrivate(const WorkSpacesRequest::Action action,
                                   UpdateWorkspaceImagePermissionRequest * const q);
    UpdateWorkspaceImagePermissionRequestPrivate(const UpdateWorkspaceImagePermissionRequestPrivate &other,
                                   UpdateWorkspaceImagePermissionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateWorkspaceImagePermissionRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
