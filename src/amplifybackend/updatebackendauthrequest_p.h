// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBACKENDAUTHREQUEST_P_H
#define QTAWS_UPDATEBACKENDAUTHREQUEST_P_H

#include "amplifybackendrequest_p.h"
#include "updatebackendauthrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class UpdateBackendAuthRequest;

class UpdateBackendAuthRequestPrivate : public AmplifyBackendRequestPrivate {

public:
    UpdateBackendAuthRequestPrivate(const AmplifyBackendRequest::Action action,
                                   UpdateBackendAuthRequest * const q);
    UpdateBackendAuthRequestPrivate(const UpdateBackendAuthRequestPrivate &other,
                                   UpdateBackendAuthRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateBackendAuthRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
