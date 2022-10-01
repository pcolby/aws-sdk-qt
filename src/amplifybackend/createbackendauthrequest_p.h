// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBACKENDAUTHREQUEST_P_H
#define QTAWS_CREATEBACKENDAUTHREQUEST_P_H

#include "amplifybackendrequest_p.h"
#include "createbackendauthrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class CreateBackendAuthRequest;

class CreateBackendAuthRequestPrivate : public AmplifyBackendRequestPrivate {

public:
    CreateBackendAuthRequestPrivate(const AmplifyBackendRequest::Action action,
                                   CreateBackendAuthRequest * const q);
    CreateBackendAuthRequestPrivate(const CreateBackendAuthRequestPrivate &other,
                                   CreateBackendAuthRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateBackendAuthRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
