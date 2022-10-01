// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYWORKSPACECREATIONPROPERTIESREQUEST_P_H
#define QTAWS_MODIFYWORKSPACECREATIONPROPERTIESREQUEST_P_H

#include "workspacesrequest_p.h"
#include "modifyworkspacecreationpropertiesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class ModifyWorkspaceCreationPropertiesRequest;

class ModifyWorkspaceCreationPropertiesRequestPrivate : public WorkSpacesRequestPrivate {

public:
    ModifyWorkspaceCreationPropertiesRequestPrivate(const WorkSpacesRequest::Action action,
                                   ModifyWorkspaceCreationPropertiesRequest * const q);
    ModifyWorkspaceCreationPropertiesRequestPrivate(const ModifyWorkspaceCreationPropertiesRequestPrivate &other,
                                   ModifyWorkspaceCreationPropertiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyWorkspaceCreationPropertiesRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
