// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPERMISSIONREQUEST_P_H
#define QTAWS_GETPERMISSIONREQUEST_P_H

#include "ramrequest_p.h"
#include "getpermissionrequest.h"

namespace QtAws {
namespace Ram {

class GetPermissionRequest;

class GetPermissionRequestPrivate : public RamRequestPrivate {

public:
    GetPermissionRequestPrivate(const RamRequest::Action action,
                                   GetPermissionRequest * const q);
    GetPermissionRequestPrivate(const GetPermissionRequestPrivate &other,
                                   GetPermissionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPermissionRequest)

};

} // namespace Ram
} // namespace QtAws

#endif
