// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKENDAUTHREQUEST_P_H
#define QTAWS_DELETEBACKENDAUTHREQUEST_P_H

#include "amplifybackendrequest_p.h"
#include "deletebackendauthrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class DeleteBackendAuthRequest;

class DeleteBackendAuthRequestPrivate : public AmplifyBackendRequestPrivate {

public:
    DeleteBackendAuthRequestPrivate(const AmplifyBackendRequest::Action action,
                                   DeleteBackendAuthRequest * const q);
    DeleteBackendAuthRequestPrivate(const DeleteBackendAuthRequestPrivate &other,
                                   DeleteBackendAuthRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBackendAuthRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
