// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAUTHORIZATIONTOKENREQUEST_P_H
#define QTAWS_GETAUTHORIZATIONTOKENREQUEST_P_H

#include "ecrrequest_p.h"
#include "getauthorizationtokenrequest.h"

namespace QtAws {
namespace Ecr {

class GetAuthorizationTokenRequest;

class GetAuthorizationTokenRequestPrivate : public EcrRequestPrivate {

public:
    GetAuthorizationTokenRequestPrivate(const EcrRequest::Action action,
                                   GetAuthorizationTokenRequest * const q);
    GetAuthorizationTokenRequestPrivate(const GetAuthorizationTokenRequestPrivate &other,
                                   GetAuthorizationTokenRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAuthorizationTokenRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
