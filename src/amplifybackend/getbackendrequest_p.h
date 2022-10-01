// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBACKENDREQUEST_P_H
#define QTAWS_GETBACKENDREQUEST_P_H

#include "amplifybackendrequest_p.h"
#include "getbackendrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class GetBackendRequest;

class GetBackendRequestPrivate : public AmplifyBackendRequestPrivate {

public:
    GetBackendRequestPrivate(const AmplifyBackendRequest::Action action,
                                   GetBackendRequest * const q);
    GetBackendRequestPrivate(const GetBackendRequestPrivate &other,
                                   GetBackendRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBackendRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
