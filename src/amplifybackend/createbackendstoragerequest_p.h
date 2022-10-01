// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBACKENDSTORAGEREQUEST_P_H
#define QTAWS_CREATEBACKENDSTORAGEREQUEST_P_H

#include "amplifybackendrequest_p.h"
#include "createbackendstoragerequest.h"

namespace QtAws {
namespace AmplifyBackend {

class CreateBackendStorageRequest;

class CreateBackendStorageRequestPrivate : public AmplifyBackendRequestPrivate {

public:
    CreateBackendStorageRequestPrivate(const AmplifyBackendRequest::Action action,
                                   CreateBackendStorageRequest * const q);
    CreateBackendStorageRequestPrivate(const CreateBackendStorageRequestPrivate &other,
                                   CreateBackendStorageRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateBackendStorageRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
