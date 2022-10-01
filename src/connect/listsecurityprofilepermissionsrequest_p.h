// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSECURITYPROFILEPERMISSIONSREQUEST_P_H
#define QTAWS_LISTSECURITYPROFILEPERMISSIONSREQUEST_P_H

#include "connectrequest_p.h"
#include "listsecurityprofilepermissionsrequest.h"

namespace QtAws {
namespace Connect {

class ListSecurityProfilePermissionsRequest;

class ListSecurityProfilePermissionsRequestPrivate : public ConnectRequestPrivate {

public:
    ListSecurityProfilePermissionsRequestPrivate(const ConnectRequest::Action action,
                                   ListSecurityProfilePermissionsRequest * const q);
    ListSecurityProfilePermissionsRequestPrivate(const ListSecurityProfilePermissionsRequestPrivate &other,
                                   ListSecurityProfilePermissionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSecurityProfilePermissionsRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
