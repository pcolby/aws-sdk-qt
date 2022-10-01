// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETPERMISSIONREQUEST_P_H
#define QTAWS_SETPERMISSIONREQUEST_P_H

#include "opsworksrequest_p.h"
#include "setpermissionrequest.h"

namespace QtAws {
namespace OpsWorks {

class SetPermissionRequest;

class SetPermissionRequestPrivate : public OpsWorksRequestPrivate {

public:
    SetPermissionRequestPrivate(const OpsWorksRequest::Action action,
                                   SetPermissionRequest * const q);
    SetPermissionRequestPrivate(const SetPermissionRequestPrivate &other,
                                   SetPermissionRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetPermissionRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
