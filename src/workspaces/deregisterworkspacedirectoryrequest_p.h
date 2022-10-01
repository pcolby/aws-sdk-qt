// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERWORKSPACEDIRECTORYREQUEST_P_H
#define QTAWS_DEREGISTERWORKSPACEDIRECTORYREQUEST_P_H

#include "workspacesrequest_p.h"
#include "deregisterworkspacedirectoryrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DeregisterWorkspaceDirectoryRequest;

class DeregisterWorkspaceDirectoryRequestPrivate : public WorkSpacesRequestPrivate {

public:
    DeregisterWorkspaceDirectoryRequestPrivate(const WorkSpacesRequest::Action action,
                                   DeregisterWorkspaceDirectoryRequest * const q);
    DeregisterWorkspaceDirectoryRequestPrivate(const DeregisterWorkspaceDirectoryRequestPrivate &other,
                                   DeregisterWorkspaceDirectoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeregisterWorkspaceDirectoryRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
