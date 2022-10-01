// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERSECURITYPROFILESREQUEST_P_H
#define QTAWS_UPDATEUSERSECURITYPROFILESREQUEST_P_H

#include "connectrequest_p.h"
#include "updateusersecurityprofilesrequest.h"

namespace QtAws {
namespace Connect {

class UpdateUserSecurityProfilesRequest;

class UpdateUserSecurityProfilesRequestPrivate : public ConnectRequestPrivate {

public:
    UpdateUserSecurityProfilesRequestPrivate(const ConnectRequest::Action action,
                                   UpdateUserSecurityProfilesRequest * const q);
    UpdateUserSecurityProfilesRequestPrivate(const UpdateUserSecurityProfilesRequestPrivate &other,
                                   UpdateUserSecurityProfilesRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateUserSecurityProfilesRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
