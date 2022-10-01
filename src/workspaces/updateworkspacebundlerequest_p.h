// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWORKSPACEBUNDLEREQUEST_P_H
#define QTAWS_UPDATEWORKSPACEBUNDLEREQUEST_P_H

#include "workspacesrequest_p.h"
#include "updateworkspacebundlerequest.h"

namespace QtAws {
namespace WorkSpaces {

class UpdateWorkspaceBundleRequest;

class UpdateWorkspaceBundleRequestPrivate : public WorkSpacesRequestPrivate {

public:
    UpdateWorkspaceBundleRequestPrivate(const WorkSpacesRequest::Action action,
                                   UpdateWorkspaceBundleRequest * const q);
    UpdateWorkspaceBundleRequestPrivate(const UpdateWorkspaceBundleRequestPrivate &other,
                                   UpdateWorkspaceBundleRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateWorkspaceBundleRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
