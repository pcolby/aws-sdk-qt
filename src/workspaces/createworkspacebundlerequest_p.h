// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKSPACEBUNDLEREQUEST_P_H
#define QTAWS_CREATEWORKSPACEBUNDLEREQUEST_P_H

#include "workspacesrequest_p.h"
#include "createworkspacebundlerequest.h"

namespace QtAws {
namespace WorkSpaces {

class CreateWorkspaceBundleRequest;

class CreateWorkspaceBundleRequestPrivate : public WorkSpacesRequestPrivate {

public:
    CreateWorkspaceBundleRequestPrivate(const WorkSpacesRequest::Action action,
                                   CreateWorkspaceBundleRequest * const q);
    CreateWorkspaceBundleRequestPrivate(const CreateWorkspaceBundleRequestPrivate &other,
                                   CreateWorkspaceBundleRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateWorkspaceBundleRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
