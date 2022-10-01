// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONNECTIONALIASPERMISSIONREQUEST_P_H
#define QTAWS_UPDATECONNECTIONALIASPERMISSIONREQUEST_P_H

#include "workspacesrequest_p.h"
#include "updateconnectionaliaspermissionrequest.h"

namespace QtAws {
namespace WorkSpaces {

class UpdateConnectionAliasPermissionRequest;

class UpdateConnectionAliasPermissionRequestPrivate : public WorkSpacesRequestPrivate {

public:
    UpdateConnectionAliasPermissionRequestPrivate(const WorkSpacesRequest::Action action,
                                   UpdateConnectionAliasPermissionRequest * const q);
    UpdateConnectionAliasPermissionRequestPrivate(const UpdateConnectionAliasPermissionRequestPrivate &other,
                                   UpdateConnectionAliasPermissionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateConnectionAliasPermissionRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
