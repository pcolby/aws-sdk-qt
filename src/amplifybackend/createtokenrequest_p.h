// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETOKENREQUEST_P_H
#define QTAWS_CREATETOKENREQUEST_P_H

#include "amplifybackendrequest_p.h"
#include "createtokenrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class CreateTokenRequest;

class CreateTokenRequestPrivate : public AmplifyBackendRequestPrivate {

public:
    CreateTokenRequestPrivate(const AmplifyBackendRequest::Action action,
                                   CreateTokenRequest * const q);
    CreateTokenRequestPrivate(const CreateTokenRequestPrivate &other,
                                   CreateTokenRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTokenRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
