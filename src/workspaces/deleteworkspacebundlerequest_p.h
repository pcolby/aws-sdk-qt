// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKSPACEBUNDLEREQUEST_P_H
#define QTAWS_DELETEWORKSPACEBUNDLEREQUEST_P_H

#include "workspacesrequest_p.h"
#include "deleteworkspacebundlerequest.h"

namespace QtAws {
namespace WorkSpaces {

class DeleteWorkspaceBundleRequest;

class DeleteWorkspaceBundleRequestPrivate : public WorkSpacesRequestPrivate {

public:
    DeleteWorkspaceBundleRequestPrivate(const WorkSpacesRequest::Action action,
                                   DeleteWorkspaceBundleRequest * const q);
    DeleteWorkspaceBundleRequestPrivate(const DeleteWorkspaceBundleRequestPrivate &other,
                                   DeleteWorkspaceBundleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteWorkspaceBundleRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
