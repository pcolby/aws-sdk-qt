// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBACKENDREQUEST_P_H
#define QTAWS_CREATEBACKENDREQUEST_P_H

#include "amplifybackendrequest_p.h"
#include "createbackendrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class CreateBackendRequest;

class CreateBackendRequestPrivate : public AmplifyBackendRequestPrivate {

public:
    CreateBackendRequestPrivate(const AmplifyBackendRequest::Action action,
                                   CreateBackendRequest * const q);
    CreateBackendRequestPrivate(const CreateBackendRequestPrivate &other,
                                   CreateBackendRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateBackendRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
