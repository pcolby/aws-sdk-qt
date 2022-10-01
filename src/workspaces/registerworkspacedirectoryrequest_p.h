// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERWORKSPACEDIRECTORYREQUEST_P_H
#define QTAWS_REGISTERWORKSPACEDIRECTORYREQUEST_P_H

#include "workspacesrequest_p.h"
#include "registerworkspacedirectoryrequest.h"

namespace QtAws {
namespace WorkSpaces {

class RegisterWorkspaceDirectoryRequest;

class RegisterWorkspaceDirectoryRequestPrivate : public WorkSpacesRequestPrivate {

public:
    RegisterWorkspaceDirectoryRequestPrivate(const WorkSpacesRequest::Action action,
                                   RegisterWorkspaceDirectoryRequest * const q);
    RegisterWorkspaceDirectoryRequestPrivate(const RegisterWorkspaceDirectoryRequestPrivate &other,
                                   RegisterWorkspaceDirectoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterWorkspaceDirectoryRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
