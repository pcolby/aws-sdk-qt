// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUPDATEDWORKSPACEIMAGEREQUEST_P_H
#define QTAWS_CREATEUPDATEDWORKSPACEIMAGEREQUEST_P_H

#include "workspacesrequest_p.h"
#include "createupdatedworkspaceimagerequest.h"

namespace QtAws {
namespace WorkSpaces {

class CreateUpdatedWorkspaceImageRequest;

class CreateUpdatedWorkspaceImageRequestPrivate : public WorkSpacesRequestPrivate {

public:
    CreateUpdatedWorkspaceImageRequestPrivate(const WorkSpacesRequest::Action action,
                                   CreateUpdatedWorkspaceImageRequest * const q);
    CreateUpdatedWorkspaceImageRequestPrivate(const CreateUpdatedWorkspaceImageRequestPrivate &other,
                                   CreateUpdatedWorkspaceImageRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateUpdatedWorkspaceImageRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
