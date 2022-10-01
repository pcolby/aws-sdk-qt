// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESECURITYPROFILEREQUEST_P_H
#define QTAWS_UPDATESECURITYPROFILEREQUEST_P_H

#include "connectrequest_p.h"
#include "updatesecurityprofilerequest.h"

namespace QtAws {
namespace Connect {

class UpdateSecurityProfileRequest;

class UpdateSecurityProfileRequestPrivate : public ConnectRequestPrivate {

public:
    UpdateSecurityProfileRequestPrivate(const ConnectRequest::Action action,
                                   UpdateSecurityProfileRequest * const q);
    UpdateSecurityProfileRequestPrivate(const UpdateSecurityProfileRequestPrivate &other,
                                   UpdateSecurityProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSecurityProfileRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
