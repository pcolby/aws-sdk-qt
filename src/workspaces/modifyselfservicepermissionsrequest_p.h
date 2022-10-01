// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYSELFSERVICEPERMISSIONSREQUEST_P_H
#define QTAWS_MODIFYSELFSERVICEPERMISSIONSREQUEST_P_H

#include "workspacesrequest_p.h"
#include "modifyselfservicepermissionsrequest.h"

namespace QtAws {
namespace WorkSpaces {

class ModifySelfservicePermissionsRequest;

class ModifySelfservicePermissionsRequestPrivate : public WorkSpacesRequestPrivate {

public:
    ModifySelfservicePermissionsRequestPrivate(const WorkSpacesRequest::Action action,
                                   ModifySelfservicePermissionsRequest * const q);
    ModifySelfservicePermissionsRequestPrivate(const ModifySelfservicePermissionsRequestPrivate &other,
                                   ModifySelfservicePermissionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifySelfservicePermissionsRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
