// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYWORKSPACESTATEREQUEST_P_H
#define QTAWS_MODIFYWORKSPACESTATEREQUEST_P_H

#include "workspacesrequest_p.h"
#include "modifyworkspacestaterequest.h"

namespace QtAws {
namespace WorkSpaces {

class ModifyWorkspaceStateRequest;

class ModifyWorkspaceStateRequestPrivate : public WorkSpacesRequestPrivate {

public:
    ModifyWorkspaceStateRequestPrivate(const WorkSpacesRequest::Action action,
                                   ModifyWorkspaceStateRequest * const q);
    ModifyWorkspaceStateRequestPrivate(const ModifyWorkspaceStateRequestPrivate &other,
                                   ModifyWorkspaceStateRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyWorkspaceStateRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
