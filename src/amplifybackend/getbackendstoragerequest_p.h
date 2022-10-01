// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBACKENDSTORAGEREQUEST_P_H
#define QTAWS_GETBACKENDSTORAGEREQUEST_P_H

#include "amplifybackendrequest_p.h"
#include "getbackendstoragerequest.h"

namespace QtAws {
namespace AmplifyBackend {

class GetBackendStorageRequest;

class GetBackendStorageRequestPrivate : public AmplifyBackendRequestPrivate {

public:
    GetBackendStorageRequestPrivate(const AmplifyBackendRequest::Action action,
                                   GetBackendStorageRequest * const q);
    GetBackendStorageRequestPrivate(const GetBackendStorageRequestPrivate &other,
                                   GetBackendStorageRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBackendStorageRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
