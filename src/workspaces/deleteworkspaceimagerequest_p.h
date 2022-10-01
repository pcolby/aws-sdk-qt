// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKSPACEIMAGEREQUEST_P_H
#define QTAWS_DELETEWORKSPACEIMAGEREQUEST_P_H

#include "workspacesrequest_p.h"
#include "deleteworkspaceimagerequest.h"

namespace QtAws {
namespace WorkSpaces {

class DeleteWorkspaceImageRequest;

class DeleteWorkspaceImageRequestPrivate : public WorkSpacesRequestPrivate {

public:
    DeleteWorkspaceImageRequestPrivate(const WorkSpacesRequest::Action action,
                                   DeleteWorkspaceImageRequest * const q);
    DeleteWorkspaceImageRequestPrivate(const DeleteWorkspaceImageRequestPrivate &other,
                                   DeleteWorkspaceImageRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteWorkspaceImageRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
