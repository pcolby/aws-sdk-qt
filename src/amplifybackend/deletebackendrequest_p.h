// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKENDREQUEST_P_H
#define QTAWS_DELETEBACKENDREQUEST_P_H

#include "amplifybackendrequest_p.h"
#include "deletebackendrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class DeleteBackendRequest;

class DeleteBackendRequestPrivate : public AmplifyBackendRequestPrivate {

public:
    DeleteBackendRequestPrivate(const AmplifyBackendRequest::Action action,
                                   DeleteBackendRequest * const q);
    DeleteBackendRequestPrivate(const DeleteBackendRequestPrivate &other,
                                   DeleteBackendRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBackendRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
