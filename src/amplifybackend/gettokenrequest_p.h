// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTOKENREQUEST_P_H
#define QTAWS_GETTOKENREQUEST_P_H

#include "amplifybackendrequest_p.h"
#include "gettokenrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class GetTokenRequest;

class GetTokenRequestPrivate : public AmplifyBackendRequestPrivate {

public:
    GetTokenRequestPrivate(const AmplifyBackendRequest::Action action,
                                   GetTokenRequest * const q);
    GetTokenRequestPrivate(const GetTokenRequestPrivate &other,
                                   GetTokenRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTokenRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
