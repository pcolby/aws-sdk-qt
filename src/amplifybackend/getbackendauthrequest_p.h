// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBACKENDAUTHREQUEST_P_H
#define QTAWS_GETBACKENDAUTHREQUEST_P_H

#include "amplifybackendrequest_p.h"
#include "getbackendauthrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class GetBackendAuthRequest;

class GetBackendAuthRequestPrivate : public AmplifyBackendRequestPrivate {

public:
    GetBackendAuthRequestPrivate(const AmplifyBackendRequest::Action action,
                                   GetBackendAuthRequest * const q);
    GetBackendAuthRequestPrivate(const GetBackendAuthRequestPrivate &other,
                                   GetBackendAuthRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBackendAuthRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
