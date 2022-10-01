// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKENDSTORAGEREQUEST_P_H
#define QTAWS_DELETEBACKENDSTORAGEREQUEST_P_H

#include "amplifybackendrequest_p.h"
#include "deletebackendstoragerequest.h"

namespace QtAws {
namespace AmplifyBackend {

class DeleteBackendStorageRequest;

class DeleteBackendStorageRequestPrivate : public AmplifyBackendRequestPrivate {

public:
    DeleteBackendStorageRequestPrivate(const AmplifyBackendRequest::Action action,
                                   DeleteBackendStorageRequest * const q);
    DeleteBackendStorageRequestPrivate(const DeleteBackendStorageRequestPrivate &other,
                                   DeleteBackendStorageRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBackendStorageRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
