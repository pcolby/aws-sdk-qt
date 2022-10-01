// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAUTHORIZATIONTOKENREQUEST_P_H
#define QTAWS_GETAUTHORIZATIONTOKENREQUEST_P_H

#include "ecrpublicrequest_p.h"
#include "getauthorizationtokenrequest.h"

namespace QtAws {
namespace EcrPublic {

class GetAuthorizationTokenRequest;

class GetAuthorizationTokenRequestPrivate : public EcrPublicRequestPrivate {

public:
    GetAuthorizationTokenRequestPrivate(const EcrPublicRequest::Action action,
                                   GetAuthorizationTokenRequest * const q);
    GetAuthorizationTokenRequestPrivate(const GetAuthorizationTokenRequestPrivate &other,
                                   GetAuthorizationTokenRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAuthorizationTokenRequest)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
