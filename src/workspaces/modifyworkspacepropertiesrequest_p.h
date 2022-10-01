// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYWORKSPACEPROPERTIESREQUEST_P_H
#define QTAWS_MODIFYWORKSPACEPROPERTIESREQUEST_P_H

#include "workspacesrequest_p.h"
#include "modifyworkspacepropertiesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class ModifyWorkspacePropertiesRequest;

class ModifyWorkspacePropertiesRequestPrivate : public WorkSpacesRequestPrivate {

public:
    ModifyWorkspacePropertiesRequestPrivate(const WorkSpacesRequest::Action action,
                                   ModifyWorkspacePropertiesRequest * const q);
    ModifyWorkspacePropertiesRequestPrivate(const ModifyWorkspacePropertiesRequestPrivate &other,
                                   ModifyWorkspacePropertiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyWorkspacePropertiesRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
