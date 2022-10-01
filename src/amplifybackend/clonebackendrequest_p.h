// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLONEBACKENDREQUEST_P_H
#define QTAWS_CLONEBACKENDREQUEST_P_H

#include "amplifybackendrequest_p.h"
#include "clonebackendrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class CloneBackendRequest;

class CloneBackendRequestPrivate : public AmplifyBackendRequestPrivate {

public:
    CloneBackendRequestPrivate(const AmplifyBackendRequest::Action action,
                                   CloneBackendRequest * const q);
    CloneBackendRequestPrivate(const CloneBackendRequestPrivate &other,
                                   CloneBackendRequest * const q);

private:
    Q_DECLARE_PUBLIC(CloneBackendRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
