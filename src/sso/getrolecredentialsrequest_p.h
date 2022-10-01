// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETROLECREDENTIALSREQUEST_P_H
#define QTAWS_GETROLECREDENTIALSREQUEST_P_H

#include "ssorequest_p.h"
#include "getrolecredentialsrequest.h"

namespace QtAws {
namespace Sso {

class GetRoleCredentialsRequest;

class GetRoleCredentialsRequestPrivate : public SsoRequestPrivate {

public:
    GetRoleCredentialsRequestPrivate(const SsoRequest::Action action,
                                   GetRoleCredentialsRequest * const q);
    GetRoleCredentialsRequestPrivate(const GetRoleCredentialsRequestPrivate &other,
                                   GetRoleCredentialsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRoleCredentialsRequest)

};

} // namespace Sso
} // namespace QtAws

#endif
