// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBACKENDSTORAGEREQUEST_P_H
#define QTAWS_UPDATEBACKENDSTORAGEREQUEST_P_H

#include "amplifybackendrequest_p.h"
#include "updatebackendstoragerequest.h"

namespace QtAws {
namespace AmplifyBackend {

class UpdateBackendStorageRequest;

class UpdateBackendStorageRequestPrivate : public AmplifyBackendRequestPrivate {

public:
    UpdateBackendStorageRequestPrivate(const AmplifyBackendRequest::Action action,
                                   UpdateBackendStorageRequest * const q);
    UpdateBackendStorageRequestPrivate(const UpdateBackendStorageRequestPrivate &other,
                                   UpdateBackendStorageRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateBackendStorageRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
