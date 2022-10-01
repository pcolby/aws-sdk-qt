// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKSPACEIMAGEREQUEST_P_H
#define QTAWS_CREATEWORKSPACEIMAGEREQUEST_P_H

#include "workspacesrequest_p.h"
#include "createworkspaceimagerequest.h"

namespace QtAws {
namespace WorkSpaces {

class CreateWorkspaceImageRequest;

class CreateWorkspaceImageRequestPrivate : public WorkSpacesRequestPrivate {

public:
    CreateWorkspaceImageRequestPrivate(const WorkSpacesRequest::Action action,
                                   CreateWorkspaceImageRequest * const q);
    CreateWorkspaceImageRequestPrivate(const CreateWorkspaceImageRequestPrivate &other,
                                   CreateWorkspaceImageRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateWorkspaceImageRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
