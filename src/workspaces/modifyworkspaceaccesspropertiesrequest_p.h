// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYWORKSPACEACCESSPROPERTIESREQUEST_P_H
#define QTAWS_MODIFYWORKSPACEACCESSPROPERTIESREQUEST_P_H

#include "workspacesrequest_p.h"
#include "modifyworkspaceaccesspropertiesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class ModifyWorkspaceAccessPropertiesRequest;

class ModifyWorkspaceAccessPropertiesRequestPrivate : public WorkSpacesRequestPrivate {

public:
    ModifyWorkspaceAccessPropertiesRequestPrivate(const WorkSpacesRequest::Action action,
                                   ModifyWorkspaceAccessPropertiesRequest * const q);
    ModifyWorkspaceAccessPropertiesRequestPrivate(const ModifyWorkspaceAccessPropertiesRequestPrivate &other,
                                   ModifyWorkspaceAccessPropertiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyWorkspaceAccessPropertiesRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
